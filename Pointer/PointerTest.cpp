void main()
{
    //q1
    char s[]="0113256";
    char *p=s; //指向s[0]
    printf("%c",*p++);      //index=1, print 0  *先取值再下一
    printf("%c",*(p++));    //2, 1  * *(p++)等同*p++
    printf("%c",(*p)++);    //2, print 1 => s[2]=2
    printf("%c",*++p);      //1, 1
    printf("%c",*(++p));    //0, 0
    printf("%c",++*p);      //
    printf("%c",++(*p));
    printf("\n%s",s);

    //ans
    char s[]="0113256";
    char *p=s;
    printf("%c",*p++); //先取值再把p指標位移
    //印0值不變再指到s[1]
    printf("%c",*(p++));//等同*p++
    //印1值不變再指到s[2]
    printf("%c",(*p)++);//先取值再把值+1
    //印1值變2一樣指到s[2]
    printf("%c",*++p); //p指標位移再取值
    //指到s[3]後取值
    printf("%c",*(++p));//等同*++p
    //指到s[4]後取值
    printf("%c",++*p); //*p的值+1後取值
    //s[4]值+1後取值
    printf("%c",++(*p));//同++*p
    //再一次s[4]值+1後取值
    printf("\n%s",s);
    //關鍵在於p和++碰在一起就是位移
    //-> 0113234
    //-> 0123456

    //q2
    int a[] ={1,2,3,4,5,6,7,9};
    int *ptr = (int*) (&a+1);
    printf("%d\n", &a);
    printf("%d\n", &a+1);
    printf("%d\n", ptr);
    printf("%d\n", *(ptr));
    printf("%d\n", ptr-1);
    printf("%d\n", *(ptr-1));
    printf("%d\n", ptr-2);
    printf("%d\n", *(ptr-2));
    printf("%d\n", *a);
    printf("%d\n", *a+7);
    printf("%d\n", *(a+7));

    //ans
    int main(){
    int a[] ={1,2,3,4,5,6,7,9};
    int *ptr = (int*) (&a+1);
    printf("%d\n", &a);         //26410768
    printf("%d\n", &a+1);       //26410800 若以&a後面接+1會直接多個長度
    printf("%d\n", ptr);        //26410800
    printf("%d\n", *(ptr));     //0 -> the one next to a[]
    printf("%d\n", ptr-1);      //26410796
    printf("%d\n", *(ptr-1));   //9 -> a[8-1]
    printf("%d\n", ptr-2);      //26410792
    printf("%d\n", *(ptr-2));   //7 -> a[8-2]
    printf("%d\n", *a);         //1 -> a[0]
    printf("%d\n", *a+7);       //8 -> a[0]+7
    printf("%d\n", *(a+7));     //9 -> a[0+7]

    //q3
    int arr[] = {10,20,30,40,50};
    int *ptr1 = arr;
    int *ptr2 = arr+5;
    printf("%d\n", (ptr2-ptr1));               //5
    printf("%d\n", (char*)ptr2 - (char*)ptr1); //20
}