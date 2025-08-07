# include<stdio.h>
struct point {  // when structre is vary large then not a ringt way to sand function holl struct the right way is struct address  
    int x;
    int y;
};
void print(struct point *p){
    printf("%d %d \n",p->x,p->y);
} 
int main(){
  struct point p1={12,34};
  struct point p2={15,59};
  print(&p1);
  print(&p2);
    
    return 0;
}