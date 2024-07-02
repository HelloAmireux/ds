#include<stdio.h>
#define InitSize 100
typedef struct{
    ElementType *data;
    int Maxsize,length;
}SqList;

//init the list
void InitList(SqList &L){
    L.data=(ElementType *) malloc (InitSize *sizeof (ElementType));
    L.length=0;
    L.Maxsize=InitSize;
}

//insert the data to list
bool ListInsert(SqList &L,int i,ElementType e){
    if (i<1||i>L.length){
        return false;
    }
    if (L.length>=Maxsize){
        return false;
    }
    for (int j=L.length;j>=i;j--){
        L.data[j]=L.data[j-1];
    }
    L.data[i-1]=e;
    L.length++;
    return true;
}
//delete element in list
bool ListDelete(SqList &L,int i,ElementType&e){
    if (i<1||i>L.length){
        return false;
    }
    e=L.data[i-1];
    for (int j =i;j<L.length;++i)
        L.data[j-1]=L.data[j];
    L.length--;
    return true;
}


//find element in list
int Localelem (SqList L,ElementType e){
    int i;
    for (i=0;i<L.length;i++){
        if (L.data[i]==e)
            return i+1; 
    return 0;
    }
}


//1  删除最小的元素
bool Del_Min(SqList &L,ElementType &value){
    if (L.length==0){
        return false;
    }
    value=L.data[0];
    int pos=0;
    for(int i=1;i<L.length;++i){
        if(L.data[i]<value){
            value=L.data[i];
            pos=i;
        }
        L.data[pos]=L.data[L.length-1];
        L.length--;
        return true;
    }
}

//2 reverse the list
void Reverse(SqList &L){
    ElementType temp;
    for (int i=0;i<L.length/2;i++){
        temp=L.data[i];
        L.data[i]=L.data[L.length-i-1];
        L.data[L.length-i-1]=temp;
    }
}


// 3.1 delete all element is a in list
void del_x_1(SqList &L,ElementType e){
    int k=0,i;
    for(i=0;i<L.length;i++){
        if(L.data[i]!=x){
            L.data[k]=L.data[i];
            k++;
        }
    }
    L.length=k;
}

//3.2


int main(){
   // printf("hello world");
   L.data=(ElementType *) malloc (sizeof(ElementType)*InitSize);//init the sqlist


    return 0;
}