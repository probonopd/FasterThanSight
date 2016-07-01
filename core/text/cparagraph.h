#pragma once

#include "ctextfragment.h"

#include <vector>

struct IndexedFragment {
	TextFragment fragment;
	size_t fragmentIndex;
};

struct Paragraph {

	void addFragment(const TextFragment& fragment, size_t index);
	size_t firstFragmentNumber() const;
	size_t lastFragmentNumber() const;
	size_t fragmentsCount() const;

	QString reconstructText(bool richText) const;

	std::vector<IndexedFragment> _fragments;
};
