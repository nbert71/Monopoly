//
// Created by Arthur on 29/12/2021.
//

#include "Case.h"

#include <utility>

Case::Case(string s) {
    this->nom = std::move(s);
}
