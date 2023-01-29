#include <stdio.h>

int main(void)
{
	
	char *array = "Kalinka-ne malinka";
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
	char *source, *destination;
	for (source = array, destination = ptr->model; *source; ++source, ++destination) 
		*destination = *source;
	*destination ='\0';
	printf("%s", ptr->model);
	return 0;
}
