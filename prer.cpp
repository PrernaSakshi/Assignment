#include<iostream>
using namespace std;
#define SIZE 30
class Array_operations
{
    public:
    int arr[SIZE],i,size,value,loc,j,element;
    void input_Array()
    {
        cout<<"Enter size of Array: \n";
        cin>>size;
        cout<<"Enter elements in array: \n";
        for(i=0;i<size;i++)
            cin>>arr[i];
    }
    void display_Array()
    {
        cout<<"Array is:\n";
        for(i=0;i<size;i++)
            cout<<arr[i]<<"\t";
    }
    void find_largest()
    {
        int largest=arr[0];
        for(i=1;i<size;i++)
            if(arr[i]>largest)
            largest=arr[i];
        cout<<"\nLargest element in the Array is "<<largest;
    }
    void insertion()
    {
        cout<<"\nEnter a value you wanna insert: ";
        cin>>value;
        cout<<"\nEnter the location at which you wanna insert: ";
        cin>>loc;
            for(i=size;i>=loc;i--)
               arr[i+1]=arr[i];
               arr[loc]=value;
             cout<<"Array after insertion: \t";
             for(i=0;i<size+1;i++)
                cout<<arr[i]<<"\t";
    }
      void deletion()
      {
          cout<<"Enter the element to remove from the array: \n";
          cin>>element;
          for(i=0;i<=size;i++)
          {
              if(arr[i]==element)
              {
                  for(j=i+1;j<=size;j++)
                    arr[j-1]=arr[j];
                  i--;
                  size--;
              }
          }
          cout<<"\nArray after deletion of "<<element<<": ";
          for(i=0;i<size;i++)
            cout<<arr[i]<<"\t";
      }

};
int main()
{
    Array_operations obj;
    int choice;
    obj.input_Array();
    obj.display_Array();
    cout<<"\n1-to find largest value in the Array.\n2-to insert an element in the Array.\n3- to delete element from Array.\n";
    do{
    cout<<"\nEnter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            obj.find_largest();
            break;
        case 2:
            obj.insertion();
            break;
        case 3:
            obj.deletion();
            break;
        default:
            cout<<"Wrong choice.";

    }
    }while(choice!=4);

}