//
// Created by Andrew on 9/11/2021.
//

#ifndef PROGRAMMING_ASSIGNMENT_2_CIRDUBLINKEDLIST_H
#define PROGRAMMING_ASSIGNMENT_2_CIRDUBLINKEDLIST_H

//Forward declaration of Node
template <typename T>
struct Node;

template <typename T>
class CirDubLinkedList {

public:
    /*
     * Function to add an item to the list in its appropriate spot
     * Precondition:
     *      item is of matching type to the class instance
     * Postcondition:
     *      The provided item has been inserted into the list at its appropriate spot based on
     *      increasing sort. i.e. the smallest element is first
     */
    void insert(T item);
    /*
     * Function to remove the largest element in the list.
     * Precondition:
     *      The list is not empty.
     * Postcondition:
     *      The largest element in the list has been removed.
     */
    T removeLargest();
    /*
     * Function to remove the smallest element in the list
     * Precondition:
     *      The list is not empty.
     * Postcondition:
     *      The smallest element in the list has been removed.
     */
    T removeSmallest();
    /*
     * Function to remove the first occurrence of a specific value in the list
     * Precondition:
     *      The list is not empty.
     * Postcondition:
     *      If the element is not in the list, null is returned.
     *      Otherwise the first occurrence of the specified element is removed from the list.
     */
    T remove(T item);
    /*
     * Function to remove the element at a specific index in the list
     * Precondition:
     *      The list is not empty.
     *      0 <= i < elementCount
     * Postcondition:
     *      If the index is not valid, null is returned.
     *      Otherwise the element at the desired index has been removed.
     */
    void removeAt(int i);
    /*
     * Function to clear the contents of the list and reset it to capacity 0
     * Precondition:
     *      The contents of the list need to be cleared out and the list reset
     * Postcondition:
     *      All data in the list has been deleted, and the list
     *      is reset to be completely empty with no available space
     */
    void resetList();
    /*
     * Function to check if a provided element is in the list
     * Precondition:
     *      item is an element of matching datatype and not null
     * Postcondition:
     *      returns true if the element is in the list, false otherwise
     */
    bool contains(T item) const;
    /*
     * Access function, to retrieve a value at a specific index
     * Precondition:
     *     0 <= i < elementCount && i < intMax
     * Postcondition:
     *      If the index is not valid, null is returned.
     *      Otherwise, the value of the element at desired index (i) is returned
     */
    T get(int i) const;
    /*
     * Function to determine if the list is empty or not
     * Precondition:
     *      The instance of the CirDubLinkedList class has been initialized
     * Postcondition:
     *      Returns true if the list is empty, false otherwise
     */
    [[nodiscard]] bool isEmpty() const;
    /*
     * Function to return the current number of elements within the list
     * Precondition:
     *      The instance of the CirDubLinkedList class has been initialized
     * Postcondition:
     *      The current number of elements in the list is returned
     */
    int GetLength() const;
    /*
     * Function to delete the current list, and create a new list containing the values from the passed list
     * Precondition:
     *      list2 is a valid CirDubLinkedList object that has been initialized with a matching datatype
     * Postcondition:
     *      The data currently in the list has been deleted, and memory released.
     *      A new list is created and filled with data to match the data in list2
     */
    void copyFrom(const CirDubLinkedList &list2);
    /*
     * Function to print the contents of the list to the terminal
     * Precondition:
     *      The instance of the CirDubLinkedList class has been initialized
     * Postcondition:
     *      The data currently stored within the list has been printed to the terminal
     */
    void printList() const;
    /*
     * Default constructor for a Circular Doubly Linked List object
     * Precondition:
     *      User wants to create a default circular doubly linked list object
     * Postcondition:
     *      An empty list has been created.
     */
    CirDubLinkedList();
    /*
     * CirDubLinkedList copy constructor
     * Precondition:
     *      list2 is a valid CirDubLinkedList object that has been initialized
     * Postcondition:
     *      A new instance of a CirDubLinkedList object has been created that is a copy of the instance list2
     */
    CirDubLinkedList(const CirDubLinkedList &list2);
    /*
     * Destructor for a CirDubLinkedList
     * Precondition:
     *      It is time to delete the instance of our object
     * Postcondition:
     *      All dynamic data held within the list has been deleted,
     */
    ~CirDubLinkedList();
private:
    //Pointer to the head node of our list
    Node<T>* head;
    //Pointer to the tail node of our list
    Node<T>* tail;
};

//complete node struct for the circular doubly linked list
template<typename T>
struct Node {

};

//complete implementation of CirDubLinkedList.cpp here


#endif //PROGRAMMING_ASSIGNMENT_2_CIRDUBLINKEDLIST_H
