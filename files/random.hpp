#pragma once
namespace lib
{
    //pseudo_random generates an random number in any datatype based on an seed that you type in
    Template<T>
    T pseudo_random(long long seed, T num, T range)
    {
        T bet = seed * num + num / num - num;
        T res = static_cast<T>(bet)
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
