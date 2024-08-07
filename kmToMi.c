// Portfolio Courses C Programming Examples #24
// Converting kilometers to miles.

#include <stdio.h>

double km_to_miles(double km);
double km_to_nautical_miles(double km);

int main(void) {
  double start_km = 0;
  double end_km = 0;
  double step_km = 0;
  double current_km = 0;

  printf("\n\n\n");

  do {
    printf("Start km value: ");
    scanf("%lf", &start_km);
    if (start_km < 0)
      printf("Start km not >= 0\n");
  } while (start_km < 0);

  do {
    printf("End km value: ");
    scanf("%lf", &end_km);
    if (end_km <= 0)
      printf("End km not > 0\n");
  } while (end_km <= 0);

  do {
    printf("Step km value: ");
    scanf("%lf", &step_km);
    if (step_km <= 0)
      printf("Step km not > 0\n");
  } while (step_km <= 0);

  printf("\n\n\n");
  printf("%-20s%-20s%-20s\n", "Kilometers", "Miles", "Nautical");
  printf("************************************************************\n");
  for (current_km = start_km; current_km <= end_km; current_km += step_km) {
    printf("%-20.2f%-20.2f%-20.2f\n", current_km, km_to_miles(current_km),
           km_to_nautical_miles(current_km));
  }
  printf("\n\n\n");
  return 0;
}

double km_to_miles(double km) { return km * 0.62137; }
double km_to_nautical_miles(double km) { return km * 0.539957; }
