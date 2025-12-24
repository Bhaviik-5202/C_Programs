/*  
In digital world colors are speci ed in RGB format, with values of R, G, and B varying on 
integer scale from 0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) 
format with values of C, M, Y and K varying on a real scale from 0.0 to 1.0. Convert RGB 
color to CMYK as per formula:
    -White=Max(red/255,green/255,blue/255)
    -Cyan=(white - red/255)/white
    -Magenta=(white - green/255)/white
    -Yellow=(white - blue/255)/white
    -Black=1 - white
 Note: if RGB values are all 0, then the CMY values are all 0 and the K value is 1
*/
#include <stdio.h>  
void rgbToCmyk(int r, int g, int b, float *c, float *m, float *y, float *k) {  
    float rNorm = r / 255.0;  
    float gNorm = g / 255.0;  
    float bNorm = b / 255.0;  

    float white = fmax(rNorm, fmax(gNorm, bNorm));  
    
    if (white == 0) {  
        // If RGB values are all 0  
        *c = 0; *m = 0; *y = 0; *k = 1;  
    } else {  
        *c = (white - rNorm) / white;  
        *m = (white - gNorm) / white;  
        *y = (white - bNorm) / white;  
        *k = 1 - white;  
    }  
}  

int main() {  
    int r, g, b;  
    printf("Enter RGB values (0-255): ");  
    scanf("%d %d %d", &r, &g, &b);  

    float c, m, y, k;  
    rgbToCmyk(r, g, b, &c, &m, &y, &k);  

    printf("CMYK values: C=%.2f M=%.2f Y=%.2f K=%.2f\n", c, m, y, k);  
    return 0;  
}