//
// Created by Тарас on 10.06.2020.
//

#include "ListRealization.h"

template<typename Key, typename T>
int ListRealization<Key, T>::size() {
    return _list.size();
}

template<typename Key, typename T>
std::vector<std::pair<Key, T>> ListRealization<Key, T>::elements() {
    std::vector<std::pair<Key, T>> res(size());
    int i = 0;
    for(auto j : _list) res[i] = j;
    return std::move(res);
}

template<typename Key, typename T>
std::vector<T> ListRealization<Key, T>::values() {
    std::vector<T> res(size());

}
