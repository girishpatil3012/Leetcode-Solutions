/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
private:
    vector<NestedInteger> nestedList; // Stores the input nested list.
    vector<int> tempList; // Temporary list for flattened integers.
    int Index = 0; // Index to track the current position in tempList.

    // Recursive function to flatten the nested list.
    void ans(vector<NestedInteger>& nestedList) {
        for (int i = 0; i < nestedList.size(); i++) {
            if (nestedList[i].isInteger()) {
                tempList.push_back(nestedList[i].getInteger()); // Add integers to tempList.
            } else {
                ans(nestedList[i].getList()); // Recursively flatten nested lists.
            }
        }
    }

public:
    // Constructor that initializes the iterator.
    NestedIterator(vector<NestedInteger> &nestedList) {
        this->nestedList = nestedList; // Initialize the nestedList member variable.
        ans(nestedList); // Flatten the nested list and store it in tempList.
    }

    // Method to retrieve the next integer from the flattened list.
    int next() {
        int number = tempList[Index]; // Get the integer at the current index.
        Index++; // Move the index to the next integer.
        return number; // Return the retrieved integer.
    }

    // Method to check if there are more integers to retrieve.
    bool hasNext() {
        return (Index < tempList.size()) ? true : false; // Return true if there are more integers in tempList, otherwise false.
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */