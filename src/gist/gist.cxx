#pragma once

#include "gist/gist.h"

template <typename P>
Gist<P>::Gist(int u, int l) {
    upperBound = u;
    lowerBound = l;
    root = new Node<P>();
}

template <typename P>
Gist<P>::~Gist() {
	if (root != nullptr) {
		delete root;
	}
    // TODO
}

template <typename P>
std::vector<Entry<P> *> Gist<P>::search(const P &p) const {
    return std::vector<Entry<P> *>();
}

template <typename P>
void Gist<P>::insert(Entry<P> const &e) {
}

template <typename P>
void Gist<P>::deleteEntry(Entry<P> const &e) {
}