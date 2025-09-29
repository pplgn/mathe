int main()
{
	int numPoints;
	std::cout << "geben sie die anzahl der zufallspunkte ein: ";
	std::cin >> numPoints;

	int pointsInCircle = 0;

	srand(time(0));

	for (int i = 0; i < numPoints; ++i)
	{
		double x = static_cast<double>(rand()) / RAND_MAX;
		double y = static_cast<double>(rand()) / RAND_MAX;

		if (x * x + y * y <= 1.0) 
		{
			pointsInCircle++;
		}
	}

	double pi_estimate = 4.0 * static_cast<double>(pointsInCircle) / numPoints;

	std::cout << "geschaetzter wert für pi: " << pi_estimate << std::endl;

	return 0;
}
