#include <iostream>
#include <vector>
#include <cstdlib>

void trainer(void);

class neurone
{
    private:
        double x;
        double y;
    public:
    neurone(double x_,double y_) : x(x_),y(y_){}
        void trainer(void)
        {
            double x1 = 0.1;
            double x2 = 0.1;
            double m1 = 0.1;
            double m2 = 0.1;

            double biais = 0.1;

            double learning_marge = 3;
            double res = x / y;
            double n_r = 0.0;
            while (std::abs(res - n_r) > 1e-6)
            {
                n_r = m1 * x1 + m2 * x2 + biais;
                double err = res - n_r;

                m1 += learning_marge * err * x1;
                m2 += learning_marge * err * x2;
                std::cout << n_r << std::endl;
            }
            std::cout << "Fastet Neural path and settings to find the result of : "<< x << "/" << y <<std::endl;
            std::cout << "r = f("<<m1<<"*"<<x1<<")"<<"+"<<"("<<m2<<"*"<<x2<<")"<<"+"<<biais<<std::endl;
        }
};
int main()
{
    neurone n(6.0,2.0);
    n.trainer();
}
