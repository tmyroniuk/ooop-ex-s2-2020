//
// Created by Тарас on 10.06.2020.
//

#ifndef OOOP_EX_S2_2020_LISTREALIZATION_H
#define OOOP_EX_S2_2020_LISTREALIZATION_H

#include "ContainerRealization.h"
#include "../structures/list/Iterator.h"

template<typename Key, typename T>
class ListRealization : ContainerRealization<Key, T> {
    List<std::pair<Key, T>> _list;
public:
    int size();

    void set(const Key &key, const T &val);

    T extract(const Key &key);

    T get(const Key &key);

    std::vector<Key> keys();

    std::vector<T> values();

    std::vector<std::pair<Key, T>> elements();
};


#endif //OOOP_EX_S2_2020_LISTREALIZATION_H
