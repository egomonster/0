//подсчет количества уникальных элементов в массиве

#include <stdio.h>
#include <stdbool.h>

int main(){
    const int szz = 10;

    //HARDCODE
    int array[10] = {5,5,7,3,3,2,2,1,1,10}; //фиксированный размер а не константная переменная
    //int array[10] = {};
    //int array[10] = {5,5,7,3,3,2};
    //int array[10] = {5,5,5,5,5,5,5,5,5,5};
    //int array[10] = {1,2,3,4,5,6,7,8,9,0};
    //int array[10] = {1,2,1,2,1,2,1,2,1,2};

    int max = array[0];
    for(int i=1;i < szz;i++)
        if(array[i] > max) max = array[i];
    bool unique = true;
    int notExist = max+1;
    int countEl=0;
    for(int i=0;i < szz;i++)
    {
        int jx = i+1;
        if(array[i]!= notExist)
        {
            unique = true;
            while(jx < szz)
            {
                if(array[jx]!= notExist)
                {
                    if(array[i] == array[jx])
                    {
                        array[jx] = notExist;

                    }
                }
                jx++;
            }
        }
        else
            unique = false;
        if(unique)
            countEl++;
        else
            array[i] = notExist;
    }

    printf("countEl = %d", countEl);
    return 0;
}
