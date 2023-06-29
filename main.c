#include <stdio.h>
#include <stdlib.h>

struct{
    int arr[5],top;
    
}st;

void push(int ele){
    st.top++;
    if(st.top<=sizeof(st.arr[5])){
        st.arr[st.top]=ele;
        printf("\nPush %d element to %d index of array ",ele,st.top);
    }
    else{
        printf("\nStack is almost full can not add %d element",ele);
        st.top--;
    }
}

int pop(){
    int out=st.arr[st.top];
    
    printf("\n Pop %d index elemnt %d",st.top,st.arr[st.top]);
    st.top--;
    return out;
}

void disArr(){
    printf("\n");
    for(int i=0;i<= st.top ; i++){
        
        printf("\t %d",st.arr[i]);
    }
}


int main() {
    st.top=-1;
    
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    disArr();
    pop();
    pop();
    disArr();
    push(40);
    push(50);
    push(60);
    disArr();

    return 0;
}
