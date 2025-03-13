#include <iostream>
using namespace std;
struct Node
{
    char data;
    Node *next;
    Node *prev;
    Node(char ch) : data(ch)
    {
        next = NULL;
        prev = NULL;
    }
};
class doublylinklist
{
    Node *head;
    Node *tail;

public:
   doublylinklist() : head(NULL), tail(NULL) {} // add constructor to initialize head and tail
    ~doublylinklist();
    void inserts(char ch);
    bool search(char ch) const;
    bool delet(char ch);
    void printall();
    bool isempty()
    {
        return !head;
    }
};
doublylinklist::~doublylinklist()
{
    Node *curr = head;
    while (head)
    {
        head = head->next;
        delete curr;
        curr = head;
    }
}
void doublylinklist::inserts(char ch)
{
    Node *node = new Node(ch);
    if (head == NULL && tail == NULL)
    {
        head = node;
        tail = node;
    }
    else
    {
        tail->next = node;
        node->prev = tail;
        tail = node;
    }
}
bool doublylinklist::search(char ch) const
{
    bool result = false;
    Node *curr = head;
    while (curr && !result)
    {
        if (curr->data == ch)
            result = true;
        curr = curr->next;
    }
    return result;
}
void doublylinklist::printall()
{
    Node *curr = head;
    while (curr)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
}
bool doublylinklist::delet(char ch)
{
    Node *curr = head;
    bool found = false;
    while (curr && !found)
    {
        if (curr->data == ch)
        {
            found = true;
            if (curr == head && curr == tail)
            {
                head = tail = NULL;
            }
            else if (curr == head)
            {
                head = head->next;
                head->prev = NULL;
            }
            else if (curr == tail)
            {
                tail = tail->prev;
                tail->next = NULL;
            }
            else
            {
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
            }
            delete curr;
        }
        curr = curr->next;
    }
    return found;
}
int main()
{
    doublylinklist obj;
    obj.inserts('a');
    obj.inserts('b');
    obj.printall(); // prints 'a' 'b'
    obj.isempty(); // returns false
    obj.delet('a');
    obj.printall(); // prints 'b'
    obj.isempty(); // returns false
    obj.delet('b');
    obj.printall(); // prints nothing
    obj.isempty(); // returns true
    return 0;
}
