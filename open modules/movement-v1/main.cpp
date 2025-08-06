#include <vector>

int main()
{
  //code
  for (unsigned short i = 0; i < 64; ++i)
  {
    if (TERY[i].V == -1)
    {
      for (short j = 0; j < 32; ++j)
      {
	if (TERY[i].L == f0_reg[j].pole_ob[0].L && TERY[i].N == f0_reg[j].pole_ob[0].N)
        {
	  int maL = TERY[i].L, mbN = TERY[i].N;
	  for (short ij = 0; ij < 64; ++ij)
	  {
	    if (VALofME[ij].L == maL && VALofME[ij].N == mbN && (VALofME[ij].V < najlr))
	    {
              najlr = VALofME[ij].V;
	      movi = i;
	      movj = j;
	    }
          }
        }
      }
    }
  }
}
