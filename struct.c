#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	enum car_en_tp {wagon, SUV, heightback, saloon, convertable};
	struct car
	{
		char model[21];
		enum car_en_tp type;
		int seats_num;
		float fuel_consuption;//litres per 100km
		int max_speed;
		float weight;
	};
	struct car *ptr;
	struct car malina = {"kalinka-malinka", saloon, 5, 17.3, 210, 1470.8};
	ptr = malloc(sizeof(*ptr));
	int i;
	char model_str[] = "not a strawberry";
	for ( i = 0; i < sizeof(model_str); i++)
	{
		ptr->model[i] = model_str[i]; 
	}
	ptr->seats_num = 7;
	(*ptr).weight = 1656.87;
	printf("%s, seats %d\n", malina.model, malina.seats_num);
	printf("%s, weight %4.3f\n", ptr->model, ptr->weight);

	return 0;
}