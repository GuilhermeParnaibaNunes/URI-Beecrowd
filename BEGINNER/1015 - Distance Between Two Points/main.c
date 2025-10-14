#include <stdio.h>
#include <math.h>

typedef struct t_Point{
  double x;
  double y;
} Point;

double DistanceBetweenTwoPoints(Point p1, Point p2){
  return sqrt((pow(p2.x-p1.x, 2)+pow(p2.y-p1.y, 2)));
}

int main(){
  Point point[2];
  for(int i = 0; i < 2; i++){
    scanf("%lf", &point[i].x);
    scanf("%lf", &point[i].y);
  }

  printf("%.4lf\n", DistanceBetweenTwoPoints(point[0], point[1]));
  return 0;
}
