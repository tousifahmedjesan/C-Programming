void myQuickSort(){static int a[8]={4,7,8,5,2,6,3,1};
quickSort(a,0,7);
for(int i=0;i<8;i++)
printf("%d",a[i]);
static void quickSort (int a[], int lo, int hi)
{// lo is the lower index, hi is the upper index
// of the region of array a that is to be sorted
int i=lo, j=hi, h;
int x=a[(lo+hi)/2];
// partition
do
{
    while (a[i]<x) i++;
    while (a[j]>x) j--;
    if (i<=j)
    {
    h=a[i]; a[i]=a[j]; a[j]=h;
    i++; j--;
    }
    } while (i<=j);
    // recursion
    if (lo<j) quickSort(a, lo, j);
    if (i<hi) quickSort(a, i, hi);
    }

