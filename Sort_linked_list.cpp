/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/

Node* sortList(Node *head)
{
    int c1 = 0, c2 = 0, c3 = 0;
    Node* temp = head;
    while(temp !=  NULL)
    {
        if(temp->data == 0)
            c1++;
        else if(temp->data == 1)
            c2++;
        else
            c3++;
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL)
    {
        if(c1 != 0)
        {
            temp->data = 0;
            c1--;
        }
        else if(c2 != 0)
        {
            temp->data = 1;
            c2--;
        }
        else
        {
            temp->data = 2;
            c3--;
        }
        temp = temp->next;
    }
    
    return head;

}
