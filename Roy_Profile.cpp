#include <iostream>
#include <math.h>
int main()
{
    int LenforFb, width, height, NoofPhotos;
    std :: cin >> LenforFb;
    std :: cin >> NoofPhotos;
    while (NoofPhotos--)
    {
        std :: cin >> height >> width;
        if (width < LenforFb || height < LenforFb)
        {
            std :: cout << "UPLOAD ANOTHER";
        }
        if( width >= LenforFb && height >= LenforFb)
        {
            if(height == width)
            {
                std :: cout << "ACCEPTED";
            }
            else 
            {
                std :: cout << "CROP IT";
            }
        }
        std :: cout << std :: endl;
    }
    return 0;
}