#pragma once
namespace lib {
  Template<T>
  T random(long long seed, T num, T range)
  {
    T bet = seed * num + num / num - num;
    T res = static_cast<T>(bet)
    return res * range;
  }
}
