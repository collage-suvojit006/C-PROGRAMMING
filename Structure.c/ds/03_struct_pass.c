# include<stdio.h>
struct point {
    int x;
    int y;
};
void print(struct point p){
    printf("%d %d \n",p.x,p.y);
} 
int main(){
  struct point p1={12,34};
  struct point p2={15,59};
  print(p1);
  print(p2);
    
    return 0;
}