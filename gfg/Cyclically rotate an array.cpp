void rotate(int arr[], int n)
{
    int last = arr[n-1], i;
   for (i = n-1; i > 0; i--)
      arr[i] = arr[i-1];
   arr[0] = last;
    
}