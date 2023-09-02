// Input:    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 3, 7, 6
// Output: TRUE
// Input:    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 3, 7, 3
// Output: FALSE

#include <stdio.h>

int binary_search(unsigned int * arr, int l, int u, int target)
{
    int m ;
    while(u >= l){
        m = l + (u - l) / 2;
        if(arr[m] == target)
            return 1;
        else if(arr[m] > target)
            u = m - 1;
        else
            // arr[m] < target
            l = m + 1;
    }
    return 0;
}
int main(void)
{
    unsigned int sorted_data[10] = {0};
    for (int idx = 0; idx < 10; idx++)
    {
        sorted_data[idx] = idx * 1;
    }
    printf("%X", binary_search(sorted_data, 3, 7, 0));
    return 0;
}// Input:    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 3, 7, 6
// Output: TRUE
// Input:    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 3, 7, 3
// Output: FALSE

#include <stdio.h>

int binary_search(unsigned int * arr, int l, int u, int target)
{

}
int main(void)
{
    unsigned int sorted_data[10] = {0};
    for (int idx = 0; idx < 10; idx++)
    {
        sorted_data[idx] = idx * 1;
    }
    printf("%X", binary_search(sorted_data, 3, 7, 0));
    return 0;
}// Input:    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 3, 7, 6
// Output: TRUE
// Input:    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 3, 7, 3
// Output: FALSE

#include <stdio.h>

int binary_search(unsigned int * arr, int l, int u, int target){
    int m = l + (u - l) / 2;
    if(u < l)
        return 0;
    if(arr[m] == target)
        return 1;
    else if(arr[m] < target)
        return binary_search(arr, m + 1, u, target);
    else // arr[m] > target
        return binary_search(arr, l, m - 1, target);
}
int main(void){
    unsigned int sorted_data[10] = {0};
    for (int idx = 0; idx < 10; idx++){
        sorted_data[idx] = idx * 1;
    }
    printf("%X", binary_search(sorted_data, 3, 7, 6));
    return 0;
}