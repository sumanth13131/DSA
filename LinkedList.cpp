#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int val;
  Node *next;
  Node(int v){
    this->val = v;
    this->next = NULL;
  }  
};

void insert(Node* &head,int val){
  if(head == NULL){
    head = new Node(val);
    return;
  }
  Node* temp = new Node(val);
  temp->next = head;
  head = temp;
}

void printLL(Node* head){
  while(head!=NULL){
    cout<<head->val<<"-->";
    head = head->next;
  }
  cout<<endl;
  return;

}


void reverse(Node* &head){
  Node *prev = NULL;
  while(head->next != NULL){
    Node *temp = head;
    head = temp->next;
    temp->next = prev;
    prev = temp;
  }
  head->next = prev;
  return;
}

Node* recReverse(Node *head){
  //base
  if(head == NULL or head->next == NULL){
    return head;
  }

  Node *sHead = recReverse(head->next);
  head->next->next = head;
  head->next = NULL;
  return sHead;

}

Node* kGrpRev(Node *head,int k){

  Node *temp = head;
  Node *curr = head;
  Node *prev = NULL;
  int cnt = 1;

  while(curr!=NULL and cnt<=k){
    temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
    cnt++;
  }

  if(temp!=NULL){
    head->next = kGrpRev(temp,k);
  }
  return prev;
}


int getMid(Node* head){
    //Complete this function to return data middle node
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL){
        if(fast->next == NULL){
            break;
        }
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->val;
    
}
int main(){
  Node* head = NULL;
  insert(head,11);
  insert(head,10);
  insert(head,9);
  insert(head,8);
  insert(head,7);
  insert(head,6);
  insert(head,5);
  insert(head,4);
  insert(head,3);
  insert(head,2);
  insert(head,1);
  printLL(head);
  reverse(head);
  Node* rev = recReverse(head);
  printLL(rev);
  Node* t = kGrpRev(head,3);
  printLL(t);
  cout<<getMid(head)<<endl;
  return 0;
}

