#include <unistd.h>
#include <iostream>
#include <string>
#include "Led.h"

using namespace std;
#define RODELED 135
#define GROENELED 132
#define GELELED 134

int main() {
cout<<"Hi NSE"<<endl;
Led rood(RODELED,"Rood","Pietje Puk");
Led geel(GELELED,"Geel");
Led groen(GROENELED);
groen.zetAan();
usleep(1000000);
groen.zetUit();
geel.zetAan();
usleep(1000000);
geel.zetUit();
rood.zetAan();
usleep(1000000);
rood.zetUit();
cout<<"einde"<<endl;
}
