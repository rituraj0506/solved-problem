//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node*l1, struct Node*l2)
    {
    //   stack<int>s1,s2;
    //   while(first!=NULL)
    //   {
    //       s1.push(first->data);
    //       first=first->next;
    //   }
    //   while(second!=NULL)
    //   {
    //       s1.push(second->data);
    //       second=second->next;
    //   }
      
    //   int carry=0;
    //   Node*prev=NULL;
    //   while(!s1.empty()||!s2.empty()||!carry!=0)
    //   {
    //      int sum=carry;
    //       if(!s1.empty())
    //       {
    //         sum+=s1.top();
    //          s1.pop();
    //       }
          
    //     if(!s2.empty())
    //       {
    //         sum+=s2.top();
    //          s2.pop();
    //       }
          
    //       carry=sum/10;
    //       Node*newnode=new Node(sum%10);
    //       newnode->next=prev;
    //       prev=newnode;
    //   }
    //   return prev;
      stack<int>s1,s2;
        while(l1!=NULL)
        {
            s1.push(l1->data);
            l1=l1->next;
        }
         while(l2!=NULL)
        {
            s2.push(l2->data);
             l2=l2->next;
        }
        
          Node*prev=NULL;
        int carry=0;
        while(!s1.empty() ||!s2.empty() ||carry!=0)
        {
            int sum=carry;
            if(!s1.empty())
            {
               sum+=s1.top();
                s1.pop();
            }
             if(!s2.empty())
            {
               sum+=s2.top();
                s2.pop();
            }
            carry=sum/10;
         Node*newnode=new Node(sum%10);
             newnode->next=prev;
            prev=newnode;
        }
        return prev;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends