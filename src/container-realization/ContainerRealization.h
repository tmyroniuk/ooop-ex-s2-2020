//
// Created by Тарас on 08.06.2020.
//

#ifndef OOOP_EX_S2_2020_CONTAINERREALIZATION_H
#define OOOP_EX_S2_2020_CONTAINERREALIZATION_H

#include <utility>
#include <vector>

template<typename Key, typename T>
class ContainerRealization {
public:
    virtual int size() = 0;

    virtual void set(const Key &key, const T &val) = 0;

    virtual T extract(const Key &key) = 0;

    virtual T get(const Key &key) = 0;

    virtual std::vector<Key> keys() = 0;

    virtual std::vector<T> values() = 0;

    virtual std::vector<std::pair<Key, T>> elements() = 0;

};


#endif //OOOP_EX_S2_2020_CONTAINERREALIZATION_H
