typedef struct y_v
{
    double y;
}t_y_v;

void get_res(t_y_v *y_res);
void input_values(const std::vector<double>& x,const std::vector<double>& w, double b);

class neurone
{
    private:
    std::vector<double> entryX;
    std::vector<double> withW;
    double biais;
    public:
    void input_values(const std::vector<double>& x,const std::vector<double>& w, double b)
    {
        entryX.resize(2,0.0);
        withW.resize(2,0.0);

        entryX = x;
        withW = w;
        biais = b;
    }
    void get_res(t_y_v *y_res)
    {
        y_res->y = ((withW[0] * entryX[0]) + (withW[1] * entryX[1]) + biais);
        if(y_res->y >= 0)
        {
            std::cout << "1";
        }else
        {
            std::cout << "0";
        }
    }
};
