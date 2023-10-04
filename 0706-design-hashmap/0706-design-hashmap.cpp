class MyHashMap {
private:
    // Define a structure for key-value pairs
    struct Node {
        int key;
        int value;
        Node* next;
        Node(int k, int v) : key(k), value(v), next(nullptr) {}
    };

    // The size of the hash table (you can adjust this as needed)
    static const int tableSize = 10007; // A prime number for better distribution

    std::vector<Node*> table;

    // Hash function to map keys to table indices
    int hash(int key) {
        return key % tableSize;
    }

public:
    MyHashMap() {
        table.resize(tableSize, nullptr);
    }

    void put(int key, int value) {
        int index = hash(key);
        Node* newNode = new Node(key, value);

        // Check if the key already exists in the linked list at the index
        Node* curr = table[index];
        Node* prev = nullptr;

        while (curr) {
            if (curr->key == key) {
                curr->value = value; // Update the value if the key exists
                delete newNode; // Avoid memory leak
                return;
            }
            prev = curr;
            curr = curr->next;
        }

        // If the key doesn't exist, add the new node to the linked list
        if (!prev) {
            table[index] = newNode;
        } else {
            prev->next = newNode;
        }
    }

    int get(int key) {
        int index = hash(key);
        Node* curr = table[index];

        while (curr) {
            if (curr->key == key) {
                return curr->value; // Key found, return its value
            }
            curr = curr->next;
        }

        return -1; // Key not found
    }

    void remove(int key) {
        int index = hash(key);
        Node* curr = table[index];
        Node* prev = nullptr;

        while (curr) {
            if (curr->key == key) {
                if (prev) {
                    prev->next = curr->next;
                } else {
                    table[index] = curr->next;
                }
                delete curr; // Free memory
                return;
            }
            prev = curr;
            curr = curr->next;
        }
    }

    ~MyHashMap() {
        for (int i = 0; i < tableSize; ++i) {
            Node* curr = table[i];
            while (curr) {
                Node* temp = curr;
                curr = curr->next;
                delete temp;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */