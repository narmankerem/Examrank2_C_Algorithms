int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    return (n & (n - 1)) == 0;
    //0b00000011(3)  ~  0b00000010(2)
    //0b00000100(4)  ~  0b00000011(3)
}