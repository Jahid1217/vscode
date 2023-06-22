#include<iostream>
using namespace std;

 /**********************  Array Input ******************************/

void arrayinput(int array[],int count){
    cout<<"\nInput array Element: ";
    for (int i = 0; i < count; i++)
    {
        /* code */
        cin>>array[i];
    } 
    std::cout <<"" << std::endl;   
}

/********************** Array Print ******************************/

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

void BubbleSort(int array[], int count)
{
    cout <<"Bubble Sort ";
    int temp;
    for (int i = 0; i < count-1; i++)
    {
        /* code */
        for (int j =i+1 ; j <count; j++)
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

/********************** Insertion Sort ******************************/

void InsertionSort(int array[], int count)
{
    cout <<"Insaertion Sort ";
    int temp,j;
    for (int i = 1; i <= count-1; i++)
    {
        temp = array[i];
        j=i-1;
        while ((temp<array[j])&&(j>0))
        {
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=temp;

    }

}

/********************** Selection Sort ******************************/

void SelectionSort(int array[], int count)
{
    cout <<"Selection Sort ";
    int temp, min, p;
    for (int i = 0; i < count-1; i++)
    {
        min=array[i];
        p=i;
        for (int j = i+1;j < count; j++)
        {
            if (min>array[j])
            {
                min=array[j];
                p=j;
            }
            
        }
        temp = array[i];
        array[i]= array[p];
        array[p]=temp;
    }
    
}

/********************** Quick Sort ******************************/

int divid(int array[], int start, int end)
{
    int piovt = array[end];
    int index = start;

    for (int i = start; i < end; i++)
    {
        /* code */
        if (array[i]<piovt){
            int temp = array[i];
            array[i]= array[index];
            array[index]=temp;
            index++;
        }
        
    }
    int temp= array[end];
    array[end]= array[index];
    array[index]=temp;

    return index;
}
void QuickSort(int array[] , int start, int end)
{
    if (start<end)
    {
        int d = divid(array, start, end);
        QuickSort(array, start, (d-01));
        QuickSort(array, (d+1), end);
    }
    
}

/************************ Binary Scarch ********************************/

void BinaryScarch(int array[],int count, int num)
{
    int frist=0;
    int last= count-1;
    int middle=(frist+last)/2;
    while (frist<=last)
    {
        /* code */
        if (array[middle]< num)
        {
            /* code */
            frist=middle+1;
        }
        else if (array[middle]==num)
        {
            std::cout << "" << std::endl<<num<<" Number is fround prosition is "<<middle+1<<endl;
           break;
        }
        else
        {
          last=middle-1;  
        }
        middle= (frist+last)/2; 
    }
    if (frist>last)
    {
        std::cout <<num<< " Number is not present in this array" << std::endl;
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

    int num;
    std::cout << "Input Scarch Element: ";
    cin>>num;
    BinaryScarch(array, count,num);

    return 0 ;
}