#include "Skateboard.h"

Skateboard::Skateboard() {
    setBrand("Blind");
    setModel("deck");
}

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

