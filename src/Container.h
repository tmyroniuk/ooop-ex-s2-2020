//
// Created by tmyroniuk on 08.06.2020.
//

#ifndef OOOP_EX_S2_2020_CONTAINER_H
#define OOOP_EX_S2_2020_CONTAINER_H

#include <memory>
#include <vector>

#include "container-realization/ContainerRealization.h"

template<typename Key, typename T>
class Container {
    std::unique_ptr<ContainerRealization<Key, T>> _realization;

public:
    explicit Container(std::unique_ptr<ContainerRealization<Key, T>> realization);

    int size();

    void set(const Key &key, const T &val);

    T extract(const Key &key);

    T get(const Key &key);

    std::vector<Key> keys();

    std::vector<T> values();

    std::vector<std::pair<Key, T>> elements();

    ~Container();
};

#endif //OOOP_EX_S2_2020_CONTAINER_H
