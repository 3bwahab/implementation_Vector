#include <iostream>

using namespace std;

template<typename T> class vectorclass{


private:
    T* arr;
    int current,capacity;

public:
    //constructor
    vectorclass(){
    arr=new T[1];
    capacity=1;
    current=0;

    }

    //destructor
    ~vectorclass(){delete[]arr;}

    //function to insert element to the end of vector
    void push(T data){
    if(current==capacity){
        T*temp=new T[2*capacity];
        for(int i=0;i<capacity;i++){
            temp[i]=arr[i];

        }
        delete[]arr;
        capacity*=2;
        arr=temp;
    }
        arr[current]=data;
        current++;

    }
    //function to insert data to the index in the vector
    void push(T data ,int index){
        if(index==capacity){
            push(data);
        }
        else{
            arr[index]=data;
        }

    }
    //function to return the value of your index you insert
    T get(int index){
    if(index==current){
        return arr[index];
    }
    else{
        return -1;
    }
    }
    //function to delete one element from the last of vector
    void pop(){
    current--;
    }
    //function to return the size of vector
    int Size(){
    return current;

    }
    //function to return the capacity of the vector
    int getcapacity(){
    return capacity;

    }
    //function to display the values of vector
    void print(){
    for(int i=0;i<current;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    }
    void rightRotation(){

        int lastItme=arr[current-1];
        for(int i=current-2;i>=0;--i){
            arr[i+1]=arr[i];

        }
             arr[0]=lastItme;

    }
    void leftRotation(){

        int firstItem=arr[0];
        for(int i=1;i<=current-1;i++){
            arr[i-1]=arr[i];
        }
            arr[current-1]=firstItem;


    }
    void rightRotation(int index){
    for(int j=0;j<index;j++){
        int lastItme=arr[current-1];
        for(int i=current-2;i>=0;--i){
            arr[i+1]=arr[i];

        }
             arr[0]=lastItme;


    }

    }

    T pop(int value){
    for(int i=0;i<current;i++){
        if(arr[i]==value){
            int deleValue=arr[i];
            for(int j=i;j<current-1;j++){
                arr[j]=arr[j+1];
            }
            current--;
             return deleValue;


        }

    }
           return -1;

    }

};


int main()
{

vectorclass<int>v;
v.push(1);
v.push(2);
v.push(3);
v.push(4);
v.push(5);
v.print();



}
