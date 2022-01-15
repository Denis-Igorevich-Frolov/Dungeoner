#include "SortingArray.h"
#include <cmath>

void USortingArray::IntegerSort(UPARAM(ref) TArray<int32>& ArrayToSort, bool Descending, TArray<int32>& SortedArray)
{
    int32 m = ArrayToSort.Num(); // Return the array size 
    int32 a, k;
    bool bDidSwap;

    for (a = 0; a < (m - 1); a++)
    {
        bDidSwap = false;

        if (Descending == true) // If element 1 is less than element 2 move it back in the array (sorts high to low)
        {
            for (k = 0; k < m - a - 1; k++)
            {
                if (ArrayToSort[k] < ArrayToSort[k + 1])
                {
                    int32 z;
                    z = ArrayToSort[k];
                    ArrayToSort[k] = ArrayToSort[k + 1];
                    ArrayToSort[k + 1] = z;
                    bDidSwap = true;
                }
            }

            if (bDidSwap == false) // If no swaps occured array is sorted do not go through last loop
            {
                break;
            }
        }
        else
        {
            ArrayToSort.Sort(); // If array will be sorted low to high use Unreal's "Sort" function
        }
    }

    SortedArray = ArrayToSort;
}

void USortingArray::FloatSort(UPARAM(ref) TArray<float>& ArrayToSort, bool Descending, TArray<float>& SortedArray)
{
    int32 m = ArrayToSort.Num(); // Return the array size
    int32 a, k;
    bool bDidSwap;

    for (a = 0; a < (m - 1); a++)
    {
        bDidSwap = false;

        if (Descending == true) // If element 1 is less than element 2 move it back in the array (sorts high to low)
        {
            for (k = 0; k < m - a - 1; k++)
            {
                if (ArrayToSort[k] < ArrayToSort[k + 1])
                {
                    float z;
                    z = ArrayToSort[k];
                    ArrayToSort[k] = ArrayToSort[k + 1];
                    ArrayToSort[k + 1] = z;
                    bDidSwap = true;
                }
            }

            if (bDidSwap == false) // If no swaps occured array is sorted do not go through last loop
            {
                break;
            }
        }
        else
        {
            ArrayToSort.Sort(); // If array will be sorted low to high use Unreal's "Sort" function
        }
    }

    SortedArray = ArrayToSort;
}

void USortingArray::StringSort(UPARAM(ref) TArray<FString>& ArrayToSort, bool Descending, TArray<FString>& SortedArray)
{
    ArrayToSort.Sort(); // Sort array using built in function (sorts A-Z)

    if (Descending == true)
    {
        TArray<FString> newarray; // Define "temp" holding array
        int x = ArrayToSort.Num() - 1;

        while (x > -1)
        {
            newarray.Add(ArrayToSort[x]);
            // loop through A-Z sorted array and remove element from back and place it in beginning of "temp" array
            --x;
        }

        ArrayToSort = newarray; // Set reference array to "temp" array order, array is now Z-A
    }

    SortedArray = ArrayToSort;
}

void USortingArray::IncreaseSort(UPARAM(ref) TArray<FIncrease>& Increases, bool Descending, TArray<FIncrease>& SortedIncreases)
{
    int32 m = Increases.Num();
    int32 a, k;
    bool bDidSwap;

    for (a = 0; a < (m - 1); a++)
    {
        bDidSwap = false;

        if (Descending == true) 
        {
            for (k = 0; k < m - a - 1; k++)
            {
                if (abs(Increases[k].Value) > abs(Increases[k + 1].Value))
                {
                    FIncrease z;
                    z = Increases[k];
                    Increases[k] = Increases[k + 1];
                    Increases[k + 1] = z;
                    bDidSwap = true;
                }
            }

            if (bDidSwap == false)
            {
                break;
            }
        }
        else
        {
            bDidSwap = false;

            for (k = 0; k < m - a - 1; k++)
            {
                if (abs(Increases[k].Value) < abs(Increases[k + 1].Value))
                {
                    FIncrease z;
                    z = Increases[k];
                    Increases[k] = Increases[k + 1];
                    Increases[k + 1] = z;
                    bDidSwap = true;
                }
            }

            if (bDidSwap == false)
            {
                break;
            }
        }
    }

    SortedIncreases = Increases;
}