int addDigits(int num) {
    int d=0;
    while(1)
    {
        d+=num%10;
        num/=10;
        if(num<=0)
        {
            if(d<10)
            {
                break;
            }
            num=d;
            d=0;
        }
    }
    return d;
}
