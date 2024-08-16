#pragma once

namespace scl
{
    //pseudo_random generates an random long long based on an seed that you type in
    long long pseudo_random(long long seed, long long num, long long range)
    {
        long long bet = seed * num + num / num - num;
        long long res = static_cast<long long>(bet)
        return res * range;
    }

    //the number 4 is completly random chosen by me
    int rand_int()
    {
        return 4;
    }

    //the number 0.3221F is randomly chosen
    float rand_float()
    {
        return 0.3221F;
    }
}
