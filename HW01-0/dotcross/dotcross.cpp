# include <iostream>
# include <iomanip>

int main() {
	float Ax;
	float Ay;
	float Az;

	float Bx;
	float By;
	float Bz;

	float Cx;
	float Cy;
	float Cz;


	std::cout << "Please type info for Vector A which is 3 floating-points" << std::endl;
	std::cin >> Ax;
	std::cin >> Ay;
	std::cin >> Az;

	std::cout << "Please type info for Vector B which is 3 floating-points" << std::endl;
	std::cin >> Bx;
	std::cin >> By;
	std::cin >> Bz;

	std::cout << "(Ax*Bx + Ay*By + Az*Bz), The dot product" << std::endl;
	std::cout << std::setprecision(6) << (Ax * Bx + Ay * By + Az * Bz) << std::endl;

	Cx = Ay * Bz - Az * By;
	Cy = Az * Bx - Ax * Bz;
	Cz = Ax * By - Ay * Bx;

	std::cout << "A cross B = (" << Cx << ", " << Cy << ", " << Cz << ")" << std::endl;
	return 0;
}