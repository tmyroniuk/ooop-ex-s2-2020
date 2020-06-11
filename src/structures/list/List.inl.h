//
// Created by Тарас on 09.06.2020.
//

#include <assert.h>
#include "List.h"

template<typename T>
List<T>::~List() {
    while (_head != _tail) {
        auto temp = _head;
        _head = _head -> next;
        delete temp;
    }
    delete _tail;
}

template<typename T>
int List<T>::size() {
    return _size;
}

template<typename T>
Iterator<T> List<T>::begin() {
    return Iterator<T>(_head);
}

template<typename T>
Iterator<T> List<T>::end() {
    return Iterator<T>(_tail);
}

template<typename T>
void List<T>::insert(Iterator<T> pos, const T &val) {
    assert(pos.list == this);
    if (pos.node == _head) {
        //create head
        _head = new Node(val);
        _head->next = pos.node;
    } else {
        auto temp = _head;
        while(temp->next != pos.node)
            temp = temp->next;
        temp->next = new Node(val);
        temp->next->next = pos.node;
    }
    _size++;
}

template<typename T>
void List<T>::remove(Iterator<T> pos) {
    assert(pos.list == this);
    T temp = pos.node->val;
    //we shouldn't delete tail
    if (pos.node != _tail) {
        //in case it is not head fix left
        if (pos.node != _head)
            (pos - 1).node->next = pos.node->next;
        else _head = _head->next;
        delete pos;
        _size--;
    }
    return temp;
}

template<typename T>
List<T>::List() {
    _tail = new Node();
    _head = _tail;
    _size = 0;
}
