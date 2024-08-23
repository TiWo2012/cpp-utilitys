#pragma once

namespace scl {
namespace Random {
// pseudo_random generates an random long long based on an seed that you type in
long long pseudo_random(long long seed, long long num, long long range) {
    long long bet = seed * num + num / num - num;
    return bet * range;
}

// the number 4 is completly random chosen by me
int Rand_int() { return 4; }

// the number 0.3221F is randomly chosen
float Rand_float() { return 0.3221F; }
} // namespace random

} // namespace scl
