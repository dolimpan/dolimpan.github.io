#include <iostream>

void sort(int x[], int num)
{
    int tmp;
    for(int i=0;i<5;i++)
    { 
        for(int j=0;j<5;j++)
        { 
            if(x[i]>x[j])
            { 
            tmp=x[i]; 
            x[i]=x[j]; 
            x[j]=tmp;
            }
        }
    }
}

int totalLength(int* x, int num)
{
    int tot = 0;
    for(int i = 0; i<num; i++)
    {
        tot += x[i];
    }
    return tot;
}

int main()
{
    int* length = new int[1];
    length[0] = 64;
    int current = 1;
    int tot = 64;
    int target;
    scanf("%d", &target);
    while(tot != target)
    {
        sort(length, current);
        int temp[current+1];
        for(int i =0; i<current; i++)
        {
            temp[i] = length[i];
        }
        temp[current-1] = (length[current-1]/2);   
        printf("if문전 진입");
        if(totalLength(temp,current)>=target)
        {
            
            printf("1번진입");
            delete[] length;
            int* length = new int[current];
            length = temp;
            tot = totalLength(length, current);
        }
        else
        {
            printf("2번진입");
            temp[current] = (length[current-1]/2);
            delete[] length;
            current++;
            int* length = new int[current];
            length = temp;
            tot = totalLength(length, current);
        }
    }
    
    
    printf("총 길이: %d 토막: %d\n", tot, current);
    
    
}