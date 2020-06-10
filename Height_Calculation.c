#include <stdio.h>
#include <math.h>

void timeHeight(float gP, float valueP, int initialHeightP, int timeP, int xP);

int main()
{
	float g = 9.81;
	float value = 0.5;
	int initialHeight = 443;
	int time = 0;
	int x = 0;
	
	printf("%s \t\t %s", "Time", "Height");
	printf("\n%s \t %s", "(seconds)", "(meters)");
	
	timeHeight(g, value, initialHeight, time, x);
	
	return 0;
}

void timeHeight(float gP, float valueP, int initialHeightP, int timeP, int xP)
{
	for (initialHeightP = 443; initialHeightP >= xP;)
	{
		xP = ( initialHeightP - ( ( valueP * gP ) * ( pow ( timeP , 2 ) ) ) );
		
		if (xP < 0)
		{
			printf("\n%d - last second in air", timeP);
			break;
		}
		
		printf("\n%d \t\t %d", timeP, xP);
		timeP++;
	}
}
