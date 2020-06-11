//
// Created by Тарас on 09.06.2020.
//

#ifndef OOOP_EX_S2_2020_ITERATOR_H
#define OOOP_EX_S2_2020_ITERATOR_H

#include "List.h"

template<typename T>
class Iterator {
private:
    friend List<T>;

    List<T> list;

    typename List<T>::Node *node;
public:

    Iterator();

    Iterator(const Iterator &_that);

    explicit Iterator(typename List<T>::Node *_node, List<T> *_list);

    Iterator &operator=(const Iterator &that);

    Iterator &operator++();

    Iterator operator++(int);

    Iterator &operator--();

    Iterator operator--(int);

    bool operator==(const Iterator &that);

    bool operator!=(const Iterator &that);

    Iterator operator+(int _val);

    Iterator operator-(int _val);

    Iterator &operator+=(int _val);

    Iterator &operator-=(int _val);

    T &operator*();
};


#endif //OOOP_EX_S2_2020_ITERATOR_H
