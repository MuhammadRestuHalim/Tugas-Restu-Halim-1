#include <iostream>
using namespace std;

int main (){
	float BTC;
	
	//INPUT//
	cout << " Masukan Bitcoin \t : "; cin >> BTC ;
	
	//OUTPUT//
	if (BTC <1){ cout << "Shrimp";
	}else if (BTC >= 1 && BTC < 10){cout << "Crab";
	}else if (BTC >= 10 && BTC < 50){cout << "Octopus";
	}else if (BTC >= 50 && BTC < 100){cout << "Fish" ;
	}else if (BTC >= 100 && BTC < 500){cout << "Dolphin" ;
	}else if (BTC >= 500 && BTC < 1000){cout << "Shark" ;
	}else if (BTC >= 1000 && BTC < 5000){cout << "Whale";
	}else { cout << "Humpback" ;
	}
}
