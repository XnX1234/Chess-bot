//=============================================================//
//																														 //
// 	Copyright (C) XnX1234 2025														 		 //
//																														 //
//	Thid file is under PolyForm Noncommercial License 1.0.0		 //
//	<https://polyformproject.org/licenses/noncommercial/1.0.0> //
//																														 //
//	Go to LICENSE file to get more information								 //
//																														 //
//=============================================================//
#include <vector>

using namespace std;

int main()
{
  //code/module  (fill-VALofME-object-v1)
  //Copyright (C) XnX1234 2025
  for(short i = 0; i < 64; ++i) 
	{
		for (short j = 0; j < 32; ++j) // j 
		{
			if(VALofME[i].L == f0_reg[j].pole_ob[0].L && VALofME[i].N == f0_reg[j].pole_ob[0].N )
				{
			for (short ii = 0; ii < f0_reg[j].ruchy.size(); ++ii)
			{
				bmap exportd;
				exportd.L = f0_reg[j].ruchy[ii].L; exportd.N = f0_reg[j].ruchy[ii].N;
				int a, b, c; 
				a = (VALofME[i].L + exportd.L);
				b = (VALofME[i].N + exportd.N);
				for (short jj = 0; jj < f0_reg.size(); jj++) // szukanie
				{
					c = -1;
					if (f0_reg[jj].pole_ob[0].L == a && f0_reg[jj].pole_ob[0].N == b)
					{
						c += (jj + 1); 
						break;
					}
				}
				if (f0_reg[j].white = true && c != -2) 
				{
					VALofME[c].V += -1;
				}
				else if (f0_reg[j].white = false && c != -1) 
				{
					VALofME[c].V += 1;
				}
				else
				{
					cout << "[SYSTEM]: ERROR: C == -1!? #"<<err_i << endl;
					err_i += 1; //licznik
				}
				}
			}
		}
	}
  //end
}
