#include <iostream>
#define Limit(a,b) (((a)>=0)&&((a)<(b)))
#define Mass(A,c,d) *(*((A)+(c))+(d))
#define MassSize(name,type) ((sizeof(name))/(type))
int main (){
    int n=5, m =7;
    std::cout<<std::boolalpha<<Limit(n,m);

    int z,x=3,y=4;
    int **Array=new int*[n]{};
    for(int i=0;i<n;i++){
        Array[i]=new int[m]{};
    }
    Array[3][4]=32;
    z=Mass(Array,x,y);
    std::cout<<"\n"<<z;

    int Array2[6], q, r;
    r=sizeof(Array2[0]);
     q=MassSize( Array2,r);
     std::cout<<"\n"<<q;
    return 0;
}