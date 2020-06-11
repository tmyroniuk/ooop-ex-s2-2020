//
// Created by Тарас on 09.06.2020.
//

#ifndef OOOP_EX_S2_2020_LIST_H
#define OOOP_EX_S2_2020_LIST_H

template<typename T> class Iterator;

template <typename T>
class List {
public:
    struct Node {
        T val;
        Node *next;
        explicit Node(const T &val = T()) : val(val) {}
    };

    List();

    ~List();

    int size();

    Iterator<T> begin();

    Iterator<T> end();

    void insert(Iterator<T> pos, const T &val);

    void remove(Iterator<T> pos);

private:
    Node *_head, *_tail;
    int _size;
};

#endif //OOOP_EX_S2_2020_LIST_H
