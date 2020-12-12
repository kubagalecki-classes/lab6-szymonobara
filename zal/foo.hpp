#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::for_each(people.begin(), people.end(), [&](Human& h) { h.birthday(); });
    std::transform(people.rbegin(), people.rend(), ret_v.begin(), [&](Human h) {
        return h.isMonster() ? 'n' : 'y';
    });

    return ret_v;
}
