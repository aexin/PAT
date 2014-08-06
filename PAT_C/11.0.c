#include <stdio.h>
#include <string.h>

struct data{
	double x[2];
	double y[2];
}dat;

struct data *input();

int main()
{
	input(&dat);

	double dat_x = dat.x[0] + dat.x[1];
	double dat_y = dat.y[0] + dat.y[1];
	if(dat_x > -0.05 && dat_x < 0.05) {
		dat_x = 0.0; 
	}
	if(dat_y > -0.05 && dat_y < 0.05) {
		dat_y = 0.0;
	} 
	printf("(%.1lf, %.1lf)", dat_x, dat_y);
	
	return 0;
} 

struct data *input(struct data *da)
{
	scanf("%lf %lf %lf %lf", &(da->x[0]), &(da->y[0]), &(da->x[1]), &(da->y[1]));
	
	return da;
}
