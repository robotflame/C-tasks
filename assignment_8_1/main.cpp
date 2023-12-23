#include <iostream>


using namespace std;

class Node {
public:
    int value;
    Node* next;

};

class List {
private:
    Node* head;

public:
    List() {
        head = NULL;
    }

    void push_back(const int value) {
        Node* new_node = new Node;
        Node* last_node = head;
        new_node->value = value;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
        }
        else {
            while (last_node->next != NULL) {
                last_node = last_node->next;
            }
            last_node->next = new_node;
        }

    }

    size_t size() {
        size_t count = 0;
        Node *temp_ptr = head;

        while (temp_ptr != NULL) {
            count++;
            temp_ptr = temp_ptr->next;
        }

        return count;
    }

    int& at(size_t index) {
        int temp_index = 0;
        Node* temp_ptr = head;

        while (temp_ptr != NULL) {
            if (temp_index == index) {
                return temp_ptr->value;
            }
            temp_index++;
            temp_ptr = temp_ptr->next;
        }
    }

    void remove(size_t index) {
        Node* temp_ptr = head;

        if (head == NULL) return;

        if (index == 0) {
            head = temp_ptr->next;
            delete temp_ptr;
            return;
        }

        for (size_t x = 0; x < index - 1 && temp_ptr != NULL; x++) {
            temp_ptr = temp_ptr->next;
        }

        if (temp_ptr->next == NULL || temp_ptr == NULL) return;

        Node* delete_node_ptr = temp_ptr->next;
        temp_ptr->next = delete_node_ptr->next;
        delete delete_node_ptr;
    }

};






int main() {
    int choise;
    List list;
    int exit = 0;

    do
    {
        cout << "1. Add integer\n"
             << "2. Show integer at index\n"
             << "3. Remove integer at index\n"
             << "4. Print information\n"
             << "5. Exit\n";

        cout << "Select option: ";
        cin >> choise;

        switch (choise)
        {
            case 1:
                int value;
                cout << "Integer to add: ";
                cin >> value;
                list.push_back(value);
                break;
            case 2:
                size_t index2;
                cout << "Index: ";
                cin >> index2;
                if (list.size() == 0)
                    cout << "List contains no integers\n";
                else
                    cout << "Integer at index " << index2 << ": " << list.at(index2) << "\n";
                break;
            case 3:
                size_t index;
                cout << "Index: ";
                cin >> index;
                if (list.size() == 0)
                    cout << "List contains no integers\n";
                else
                    list.remove(index);
                break;
            case 4:
                if (list.size() == 0)
                    cout << "List contains no integers\n";
                else {
                    cout << "List contains " << list.size() << " integers: ";
                    for (size_t index = 0; index < list.size(); index++) {
                        cout << list.at(index) << " ";
                    }
                    cout << "\n";
                }
                break;
            case 5:
                exit = 1;
                break;
            default:
                break;
        }
        cout << "\n\n\n\n";
    } while (exit != 1);

    return 0;
}