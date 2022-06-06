int main()
{
    int size = 2, i;
    int arr[size];
    int *ptr;
    ptr = &arr;    //將ptr指向array
    // 1.記憶體位址 
    for(i=0; i<size; i++)
        printf("&arr[%d]: %p, ptr+%d: %p\n", i, &arr[i], i, ptr+i);
    // 2.值的存取
    arr[0] = 0;
    *(ptr+1) = 1;
    for(i=0; i<size; i++)
        printf("arr[%d]: %d, *(ptr+%d): %d\n", i, arr[i], i, *(ptr+i));

    return 0;
}

//a) *ptr++是表示*(ptr++)的意思，就是ptr指向下一個位置所存的值(同arr[i++])。
//b) *++ptr是代表ptr先做位址往前移，再取值(同arr[++i])。
//c) ++*ptr是表示++(*ptr)之意，即為ptr當下位置的值+1(同++arr[i])。

//ps. 陣列變數，因為存的是值而不是位址，因此不存在++arr與arr++之類的表示法。


