void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int i;
    int m;
    int bbuf;
    int sh;

    i = 0;
    m = 0;
    while (m < n)
    {
        bbuf = i;
        while (i < n)
        {
            if (values[i] < values[bbuf])
                bbuf = i;
            i++;
        }
        sh = values[m];
        values[m] = values[bbuf];
        values[bbuf] = sh;
        m++;
        i = m;
    }
    return;
}
