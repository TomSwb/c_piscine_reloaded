
#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point);

int main(void)
{
	t_point point;

	printf("%p,\n", &point.x);
	printf("%p.\n", &point.y);
	set_point(&point);
	printf("%d,\n", point.x);
	printf("%d.", point.y);
}

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}