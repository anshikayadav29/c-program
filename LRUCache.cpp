#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
    int key, value;
    Node *prev, *next;
    Node(int k, int v): key(k), value(v), prev(nullptr), next(nullptr) {}
};

class LRUCache {
    int cap;
    unordered_map<int, Node*> cache;
    Node *head, *tail;

    void moveToFront(Node* node) {
        if (node == head) return;
        node->prev->next = node->next;
        if (node->next) node->next->prev = node->prev;
        else tail = node->prev;

        node->next = head;
        node->prev = nullptr;
        head->prev = node;
        head = node;
    }

    void removeTail() {
        if (!tail) return;
        cache.erase(tail->key);
        if (tail->prev) tail->prev->next = nullptr;
        Node* temp = tail;
        tail = tail->prev;
        delete temp;
    }

public:
    LRUCache(int capacity): cap(capacity), head(nullptr), tail(nullptr) {}

    int get(int key) {
        if (cache.find(key) == cache.end()) return -1;
        moveToFront(cache[key]);
        return cache[key]->value;
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            cache[key]->value = value;
            moveToFront(cache[key]);
            return;
        }

        Node* node = new Node(key, value);
        node->next = head;
        if (head) head->prev = node;
        head = node;
        if (!tail) tail = node;
        cache[key] = node;

        if (cache.size() > cap) removeTail();
    }
};

int main() {
    LRUCache lru(2);
    lru.put(1, 1);
    lru.put(2, 2);
    cout << lru.get(1) << endl; // 1
    lru.put(3, 3); // removes 2
    cout << lru.get(2) << endl; // -1
    return 0;
}