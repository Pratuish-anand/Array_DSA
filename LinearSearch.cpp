#include<iostream>
using namespace std;

bool search(int arr[], int size , int key  ){

        for(int i=0; i<size ; i++){

            if(arr[i]== key){
                return 1;
            }
        }
        return 0;

    }
int main(){
    

    int arr[10]= {5,7,11,44,55,78,1,56,78,80};
    cout<<"Enter the element for search" <<endl;
    int key;
    cin>>key;

    bool found = search(arr, 10 , key );

    if(found){
        cout<<"key is present"<<endl;

    }
    else{
        cout<<"key is absent"<<endl;
    }


    return 0;
}