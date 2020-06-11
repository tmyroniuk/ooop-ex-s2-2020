//
// Created by Тарас on 09.06.2020.
//

#include "Iterator.h"

template<typename T>
Iterator<T>::Iterator() : node(nullptr) {}

template<typename T>
Iterator<T>::Iterator(const Iterator &that) : node(that.node) {}

template<typename T>
Iterator<T>::Iterator(typename List<T>::Node *_node, List<T> *_list) : node(_node), list(_list) {}

template<typename T>
Iterator<T> &Iterator<T>::operator=(const Iterator &that) {
    node = that.node;
    return *this;
}

template<typename T>
Iterator<T> &Iterator<T>::operator++() {
    node = node->next;
    return *this;
}

template<typename T>
Iterator<T> &Iterator<T>::operator--() {
    auto temp = list.begin().node;
    if(temp == node) return nullptr;
    while(temp->next != node)
        temp = temp->next;
    node = temp;
    return *this;
}

template<typename T>
Iterator<T> Iterator<T>::operator++(int) {
    auto temp = *this;
    node = node->next;
    return temp;
}

template<typename T>
Iterator<T> Iterator<T>::operator--(int) {
    auto temp = list.begin().node;
    if(temp == node) return nullptr;
    while(temp->next != node)
        temp = temp->next;
    node = temp;
    return Iterator(node->next);
}

template<typename T>
bool Iterator<T>::operator==(const Iterator &that) {
    return that.node == node;
}

template<typename T>
bool Iterator<T>::operator!=(const Iterator &that) {
    return that.node != node;
}

template<typename T>
T &Iterator<T>::operator*() {
    return node->getVal();
}

template<typename T>
Iterator<T> Iterator<T>::operator+(int _val) {
    auto temp = *this;
    for(int i = 0; i < _val; i ++)
        temp++;
    return temp;
}

template<typename T>
Iterator<T> Iterator<T>::operator-(int _val) {
    auto temp = *this;
    for(int i = 0; i < _val; i ++)
        temp--;
    return temp;
}

template<typename T>
Iterator<T> &Iterator<T>::operator+=(int _val) {
    *this = *this + _val;
    return *this;
}

template<typename T>
Iterator<T> &Iterator<T>::operator-=(int _val) {
    *this = *this - _val;
    return *this;
}
