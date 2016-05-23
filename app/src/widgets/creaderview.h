#pragma once

#include "compiler/compiler_warnings_control.h"

DISABLE_COMPILER_WARNINGS
#include <QGraphicsOpacityEffect>
#include <QWidget>
RESTORE_COMPILER_WARNINGS

class QPropertyAnimation;

class CReaderView : public QWidget
{
public:
	CReaderView(QWidget* parent = 0);
	~CReaderView();

	void setText(const QString& text, int pivotCharacterIndex = -1);
	QString text() const;
	void clear();

protected:
	void paintEvent(QPaintEvent* e) override;

private:
	QString _text;
	int _pivotCharacterIndex = -1;

	QPropertyAnimation* _textFadeOutAnimation = nullptr;
	QGraphicsOpacityEffect _textFadeEffect;
};
