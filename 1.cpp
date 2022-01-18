namespace my_math
{
	using ull = unsigned long long;

	constexpr double exp(const double& power)
	{

		unsigned int count = 1;
		long double term = 1;
		long double sum = 0;
		while (term >= 1e-100)
		{
			sum += term;
			term *= power/count++;
		}
		return sum;
	}

	constexpr double log(double num)
	{
		double s = 0;
		unsigned int tmp_odd = 1;
		double term = (num - 1) / (num + 1);
		double mul = term * term;
		double error = 0;
		while (term >= 1e-100)
		{
			double tmp = s + term;
			error += (s - tmp) + term;
			s = tmp;
			term *= tmp_odd;
			tmp_odd += 2;
			term *= mul / tmp_odd;
		}
		return 2 * (s + error);
	}

	constexpr double pow(const double& a, const double& b)
	{
		return exp(b * log(a));
	}
}