#include<iostream>
using namespace std;
 
void arrayinput(int array[],int count){
    cout<<"\nInput array Element: ";
    for (int i = 0; i < count; i++)
    {
        /* code */
        cin>>array[i];
    } 
    std::cout <<"" << std::endl;   
}
void arrayPrint(int array[],int count){
    std::cout << "Print Array Element: ";
    for (int i = 0; i < count; i++)
    {
        /* code */
        cout <<"\t"<<array[i];
    }
    std::cout << "" << std::endl;
}

/********************** Bubble Sort ******************************/

void BubbleSort(int array[], int count){
    cout <<"Bubble Sort ";
    int temp;
    for (int i = 0; i < count; i++)
    {
        /* code */
        for (int j = i+1; j < i-1-count; j++)
        {
            /* code */
            if (array[j]<array[i])
            {
                /* code */
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
            
        }
        
    }
    
}



int main(){
    int count;
    std::cout << "Enter Array Size: ";
    cin>>count;
    std::cout << "" << std::endl;
    int array[count];
    arrayinput(array,count);

    arrayPrint(array,count);

    BubbleSort(array,count);

    arrayPrint(array,count);

    QuickSort(array,0, (count-1));
    cout <<"Quick Sort ";
    arrayPrint(array,count);

    InsertionSort(array,count);

    arrayPrint(array,count);

    SelectionSort(array,count);

    arrayPrint(array,count);

    return 0 ;
}