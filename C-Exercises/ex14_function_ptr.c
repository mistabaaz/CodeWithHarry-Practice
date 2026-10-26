// calculating area of circle
#include<stdio.h>
#include<math.h>

struct coord {
	int x1,y1;
	int x2,y2;
};

float EDistance(struct coord *points);

float MDistance(struct coord *points);

float CalculateArea(struct coord *points, float (*fDistance)(struct coord *) );

int main() {
	struct coord p = {5, 10, 8, 14};
	float area = 0.0;
	area = CalculateArea(&p, EDistance);
	printf("Area of circle using Euclidian Distance %f\n", area);
	area = CalculateArea(&p, MDistance);
	printf("Area of circle using Manhattan Distance %f\n", area);
	return 0;
}

float CalculateArea(struct coord *points,float (*fDistance)(struct coord *) ) {
	int r = (*fDistance)(points);
	return 3.14 * r * r;
}

float EDistance(struct coord *points) {
	int d1 = points->x2 - points->x1;
	int d2 = points->y2 - points->y1;
	int val = d1*d1 + d2*d2;
	return sqrt(val);
}

float MDistance(struct coord *points) {
	return points->x2 - points->x1 + points->y2 - points->y1;
}
