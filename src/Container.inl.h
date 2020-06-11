//
// Created by tmyroniuk on 08.06.2020.
//

#include "Container.h"

template<typename Key, typename T>
Container<Key, T>::Container(std::unique_ptr<ContainerRealization<Key, T>> realization) : _realization(std::move(realization)) {}

template<typename Key, typename T>
Container<Key, T>::~Container() {
    delete _realization;
}

template<typename Key, typename T>
int Container<Key, T>::size() {
    return _realization->size();
}

template<typename Key, typename T>
void Container<Key, T>::set(const Key &key, const T &val) {
    _realization->set(key, val);
}

template<typename Key, typename T>
T Container<Key, T>::extract(const Key &key) {
    return _realization->extract(key);
}

template<typename Key, typename T>
T Container<Key, T>::get(const Key &key) {
    return _realization->get(key);
}

template<typename Key, typename T>
std::vector<Key> Container<Key, T>::keys() {
    return std::move(_realization->keys());
}

template<typename Key, typename T>
std::vector<T> Container<Key, T>::values() {
    return std::move(_realization->values());
}

template<typename Key, typename T>
std::vector<std::pair<Key, T>> Container<Key, T>::elements() {
    return std::move(_realization->elements());
}




