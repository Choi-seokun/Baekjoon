//덱
#include <iostream>
#include <vector>
#include <algorithm> // sort사용

using namespace std;

class Deque{
    int arr[20000] = {};
    int front=(20000/2)-1, rear=20000/2;
    
    public :
        void push_front(int i){
            arr[front] = i;
            front--;
        }
        void push_back(int i){
            arr[rear] = i;
            rear++;
        }
        int pop_front(){
            if(front+1==rear){
                return -1;
            }else{
                front++;
                return arr[front]; 
            }
        }
        int pop_back(){
            if(front+1==rear){
                return -1;
            }else{
                rear--;
                return arr[rear]; 
            }
        }
        int size(){
            return (rear-front-1);
        }
        int empty(){
            if(front+1==rear){
                return 1;
            }else{
                return 0;
            }        
        }
        int Front(){
            if(front+1==rear){
                return -1;
            }else{
                return arr[front+1]; 
            }
        }
        int back(){
            if(front==rear || front+1==rear){
                return -1;
            }else{
                return arr[rear-1];  
            }
        }
};

int main()
{   
    Deque D;
    int N, temp;
    string S;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> S;
        if(S == "push_front"){
            cin >> temp;
            D.push_front(temp);
        }
        if(S == "push_back"){
            cin >> temp;
            D.push_back(temp);
        }
        if(S == "pop_front"){
            cout << D.pop_front() << "\n";
        }
        if(S == "pop_back"){
            cout << D.pop_back() << "\n";
        }
        if(S == "size"){
            cout << D.size() << "\n";
        }
        if(S == "empty"){
            cout << D.empty() << "\n";
        }
        if(S == "front"){
            cout << D.Front() << "\n";
        }
        if(S == "back"){
            cout << D.back() << "\n";
        }
    }
}