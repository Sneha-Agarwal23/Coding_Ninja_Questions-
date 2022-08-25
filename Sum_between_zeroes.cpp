/****************************************************************

    Following is the class structure of the Node class:

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

*****************************************************************/

Node* sumBetweenZeroes(Node* head) 
{
    Node* temp1 = head;
    Node* temp2 = head;
    Node* prev = NULL;
    int sum = 0;
    while(temp1 != NULL)
    {
        if(temp1->data != 0)
            sum += temp1->data;
        else
        {
            temp2->data = sum;
            prev = temp2;
            temp2 = temp2->next;
            sum = 0;
        }
        temp1 = temp1->next;
    }
    prev->next = NULL;
    return head->next;
}