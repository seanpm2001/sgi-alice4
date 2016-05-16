/* --------------------------------------------------------------------------
|| CHRTBL - Stroke character table on 6x9 matrix. 3-dimensional array. Each
|| element consists of V, dX, dY where V = 3 for invisible, V=2 for
|| visible, and V=0 for end of list. Array accessing is
|| chrtbl[chr,strokenumber,which] where which=0 gets V, =1 gets dX, and
|| =2 gets dY
------------------------------------------------------------------------- */
#define _strokemax 022
short strokemax = _strokemax;

short chrtbl[0200][_strokemax][3] = {
/* c0 */ {{0}},
/* c1 */ {{3,0,4},  {2,2,-2},  {2,2,2},  {3,-2,4},  {2,0,-6}, {3,4,-2}},
/* c2 */ {{3,0,3},  {2,0,2},  {2,1,1},  {2,1,0},  {2,1,-1},  {2,1,1},
		{3,-1,-1},  {2,0,-2},  {2,1,-1},  {3,-1,1},  {2,-1,-1},
		{2,-1,0},  {2,-1,1},  {3,6,-3}},
/* c3 */ {{2,1,1},  {2,0,4},  {2,1,1},  {2,2,0},  {2,1,-1},  {2,-1,-1},
		{2,-3,0},  {3,3,0},  {2,1,-1},  {2,-1,-1},  {2,-3,0},  {3,6,-2}},
/* c4 */ {{3,0,4},  {2,2,2},  {2,2,-2},  {3,2,-4}},
/* c5 */ {{3,0,5},  {2,4,0},  {2,0,-1},  {3,2,-4}},
/* c6 */ {{3,1,4},  {2,2,0},  {3,0,2},  {2,-1,0},  {2,-1,-1},  {2,0,-2},
		{2,1,-1},  {2,1,0},  {3,3,-2}},
/* c7 */ {{3,1,2},  {2,0,4},  {3,-1,0},  {2,4,0},  {3,-1,0},  {2,0,-4},
		{3,3,-2}},
/* c10 */ {{3,0,2},  {2,2,2},  {3,-2,3},  {2,0,-1},  {2,4,-4}, {3,2,-2}},
/* c11 */ {{0}},		/* tab */
/* c12 */ {{3,0,-9}},
/* c13 */ {{3,0,2},  {2,1,-1},  {2,1,1},  {2,0,5},  {2,1,1},  {2,1,-1},  {3,2,-7}},
/* c14 */ {{3,0,3},  {2,4,0},  {3,0,3},  {2,-4,0},  {3,2,2},  {2,0,-4},  {3,4,-4}},
/* c15 */ {{0}},		/* carriage-return */
/* c16 */ {{3,1,3},  {2,1,1},  {2,0,1},  {2,1,1},  {2,1,-1},
		  {2,0,-1},  {2,-1,-1},  {2,-1,1},  {3,0,1},  {2,-1,1},
		  {2,-1,-1},  {2,0,-1},  {2,1,-1},  {3,5,-3}},
/* c17 */ {{3,0,3},  {2,0,1},  {2,1,1},  {2,2,0},  {2,1,-1},
		{2,0,2},  {2,-2,2},  {2,-1,0},  {3,3,-4},  {2,0,-1},
		{2,-1,-1},  {2,-2,0},  {2,-1,1},  {3,6,-3}},
/* c20 */ {{3,4,7},  {2,-3,0},  {2,-1,-1},  {2,0,-2},  {2,1,-1},
		{2,3,0},  {3,2,-3}},
/* c21 */ {{3,0,3},  {2,3,0},  {2,1,1},  {2,0,2},  {2,-1,1},  {2,-3,0},  {3,6,-7}},
/* c22 */ {{3,0,4},  {2,0,2},  {2,1,1},  {2,2,0},  {2,1,-1},  {2,0,-2},  {3,2,-4}},
/* c23 */ {{3,0,7},  {2,0,-2},  {2,1,-1},  {2,2,0},  {2,1,1},  {2,0,2},  {3,2,-7}},
/* c24 */ {{3,0,8},  {2,2,-6},  {2,2,6},  {3,-1,-2},  {2,-2,0},  {3,5,-6}},
/* c25 */ {{3,0,2},  {2,4,0},  {2,0,3},  {2,-3,0},  {3,-1,3},  {2,4,0},
		{2,0,-3},  {3,2,-5}},
/* c26 */ {{3,0,4},  {2,0,2},  {2,1,1},  {2,2,0},  {2,1,-1},  {2,0,-2},
		{2,-1,-1},  {2,-2,0},  {2,-1,1},  {3,1,0},  {2,2,2},  {3,-2,0},
		{2,2,-2},  {3,3,-4}},
/* c27 */ {{3,2,0},  {2,-2,2},  {2,4,4},  {2,-2,2},  {3,-2,-2},  {2,4,0},
		{3,-4,-4},  {2,4,0},  {3,2,-2}},
/* c30 */ {{2,4,0},  {3,2,0}},
/* c31 */ {{3,2,3},  {2,2,2},  {2,-2,2},  {3,-2,-2},  {2,4,0},  {3,2,-5}},
/* c32 */ {{3,0,8},  {2,1,1},  {2,1,0},  {2,0,-1},  {2,1,0},  {2,1,1},  {3,2,-9}},
/* c33 */ {{3,0,1},  {2,4,6},  {3,0,-2},  {2,-4,0},  {3,0,-2},  {2,4,0},  {3,2,-2}},
/* c34 */ {{3,1,2},  {2,2,0},  {3,0,2},  {2,-2,2},  {2,2,2},  {3,3,-8}},
/* c35 */ {{3,1,2},  {2,2,0},  {3,-2,2},  {2,2,2},  {2,-2,2},  {3,5,-8}},
/* c36 */ {{3,0,3},  {2,4,0},  {3,0,2},  {2,-4,0},  {3,0,2},  {2,4,0},  {3,2,-7}},
/* c37 */ {{3,0,6},  {2,2,-2},  {2,2,2},  {3,2,-6}},
/* c40 */ {{3,6,0}},
/* c41 */ {{3,2,1},  {2,0,1},  {3,0,2},  {2,0,4},  {3,4,-8}},
/* c42 */ {{3,1,7},  {2,0,2},  {3,2,0},  {2,0,-2},  {3,3,-7}},
/* c43 */ {{3,1,2},  {2,0,5},  {3,2,0},  {2,0,-5},  {3,1,1},  {2,-4,0},  {3,0,3},
		{2,4,0},  {3,2,-6}},
/* c44 */ {{3,2,1},  {2,0,8},  {3,2,-2},  {2,-1,1},  {2,-2,0},  {2,-1,-1},
		{2,0,-1},  {2,1,-1},  {2,2,0},  {2,1,-1},  {2,0,-2},  {2,-1,-1},
		{2,-2,0},  {2,-1,1},  {3,6,-3}},
/* c45 */ {{3,0,2},  {2,0,1},  {2,4,4},  {2,0,1},  {3,-3,0},  {2,-1,0},
		{2,0,-1},  {2,1,0},  {2,0,1},  {3,3,-5},  {2,1,0},  {2,0,-1},
		{2,-1,0},  {2,1,0},  {3,3,-1}},
/* c46 */ {{3,4,4},  {2,-2,-2},  {2,-1,0},  {2,-1,1},  {2,0,1},  {2,2,2},  {2,0,1},
		{2,-1,1},  {2,-1,-1},  {2,0,-1},  {2,4,-4},  {3,2,-2}},
/* c47 */ {{3,0,7},  {2,1,1},  {2,0,1},  {2,1,0},  {2,0,-1},  {2,-1,0},  {3,5,-7}},
/* c50 */ {{3,4,2},  {2,-2,2},  {2,0,2},  {2,2,2},  {3,2,-8}},
/* c51 */ {{3,0,2},  {2,2,2},  {2,0,2},  {2,-2,2},  {3,6,-8}},
/* c52 */ {{3,2,2},  {2,0,6},  {3,-2,-1},  {2,4,-4},  {3,0,2},  {2,-4,0},
		{3,0,-2},  {2,4,4},  {3,2,-7}},
/* c53 */ {{3,2,3},  {2,0,4},  {3,-2,-2},  {2,4,0},  {3,2,-5}},
/* c54 */ {{3,0,1},  {2,1,1},  {2,0,1},  {3,5,-3}},
/* c55 */ {{3,0,5},  {2,4,0},  {3,2,-5}},
/* c56 */ {{3,1,2},  {2,1,0},  {3,4,-2}},
/* c57 */ {{3,0,3},  {2,4,4},  {3,2,-7}},
/* c60 */ {{3,0,3},  {2,4,4},  {2,-1,1},  {2,-2,0},  {2,-1,-1},  {2,0,-4},
		{2,1,-1},  {2,2,0},  {2,1,1},  {2,0,4},  {3,2,-7}},
/* c61 */ {{3,1,2},  {2,2,0},  {3,-1,0},  {2,0,6},  {2,-1,-1},  {3,5,-7}},
/* c62 */ {{3,0,7},  {2,1,1},  {2,2,0},  {2,1,-1},  {2,0,-1},  {2,-4,-4},
		{2,4,0},  {3,2,-2}},
/* c63 */ {{3,0,3},  {2,1,-1},  {2,2,0},  {2,1,1},  {2,0,1},  {2,-1,1},
		{2,-1,0},   {3,1,0},  {2,1,1},  {2,0,1},  {2,-1,1},
		{2,-2,0},  {2,-1,-1},  {3,6,-7}},
/* c64 */ {{3,3,2},  {2,0,6},  {2,-3,-3},  {2,0,-1},  {2,4,0},  {3,2,-4}},
/* c65 */ {{3,0,3},  {2,1,-1},  {2,2,0},  {2,1,1},  {2,0,2},  {2,-1,1},  {2,-3,0},
		{2,0,2},  {2,4,0},  {3,2,-8}},
/* c66 */ {{3,0,5},  {2,0,-2},  {2,1,-1},  {2,2,0},  {2,1,1},  {2,0,1},
		{2,-1,1},  {2,-3,0},
		{2,0,1},  {2,2,2},  {2,1,0},  {3,3,-8}},
/* c67 */ {{3,0,8},  {2,4,0},  {2,-2,-4},  {2,0,-2},  {3,4,-2}},
/* c70 */ {{3,1,5},  {2,-1,-1},  {2,0,-1},  {2,1,-1},  {2,2,0},  {2,1,1},
		{2,0,1},  {2,-1,1},  {2,-2,0},  {2,-1,1},  {2,0,1},  {2,1,1},
		{2,2,0},  {2,1,-1},  {2,0,-1},  {2,-1,-1},  {3,3,-5}},
/* c71 */ {{3,1,2},  {2,1,0},  {2,2,2},  {2,0,3},  {2,-1,1},  {2,-2,0},  {2,-1,-1},
		{2,0,-1},  {2,1,-1},  {2,3,0},  {3,2,-5}},
/* c72 */ {{3,0,3},  {2,1,0},  {3,0,3},  {2,-1,0},  {3,6,-6}},
/* c73 */ {{3,0,1},  {2,1,1},  {2,0,1},  {3,0,3},  {2,-1,0},  {3,6,-6}},
/* c74 */ {{3,3,3},  {2,-2,2},  {2,2,2},  {3,3,-7}},
/* c75 */ {{3,0,4},  {2,4,0},  {3,0,2},  {2,-4,0},  {3,6,-6}},
/* c76 */ {{3,1,7},  {2,2,-2},  {2,-2,-2},  {3,5,-3}},
/* c77 */ {{3,1,2},  {2,1,0},  {3,0,2},  {2,0,1},  {2,2,2},  {2,-1,1},  {2,-2,0},
		{2,-1,-1},  {3,6,-7}},
/* c100 */ {{3,3,2},  {2,-2,0},  {2,-1,1},  {2,0,4},  {2,1,1},  {2,2,0},  {2,1,-1},
		{2,0,-3},  {2,-2,0},  {2,0,2},  {2,2,0},  {3,2,-6}},
/* c101 */ {{3,0,2},  {2,0,5},  {2,1,1},  {2,2,0},  {2,1,-1},  {2,0,-5},
		{3,-4,3},  {2,4,0},  {3,2,-5}},
/* c102 */ {{3,0,2},  {2,3,0},  {2,1,1},  {2,0,1},  {2,-1,1},  {2,-3,0},  {3,3,0},
		{2,1,1},  {2,0,1},  {2,-1,1},  {2,-3,0},  {2,0,-6},  {3,6,-2}},
/* c103 */ {{3,4,7},  {2,-1,1},  {2,-2,0},  {2,-1,-1},  {2,0,-4},  {2,1,-1},
		{2,2,0},  {2,1,1},  {3,2,-3}},
/* c104 */ {{3,0,2},  {2,3,0},  {2,1,1},  {2,0,4},  {2,-1,1},  {2,-3,0},
		{3,1,0},  {2,0,-6},  {3,5,-2}},
/* c105 */ {{3,4,2},  {2,-4,0},  {2,0,6},  {2,4,0},  {3,-1,-3},  {2,-3,0},  {3,6,-5}},
/* c106 */ {{3,0,2},  {2,0,6},  {2,4,0},  {3,-1,-3},  {2,-3,0},  {3,6,-5}},
/* c107 */ {{3,3,4},  {2,1,0},  {2,0,-1},  {2,-1,-1},  {2,-2,0},  {2,-1,1},
		{2,0,4},  {2,1,1},  {2,2,0},  {2,1,-1},  {3,2,-7}},
/* c110 */ {{3,0,2},  {2,0,6},  {3,0,-3},  {2,4,0},  {3,0,3},  {2,0,-6},  {3,2,-2}},
/* c111 */ {{3,1,2},  {2,2,0},  {3,-1,0},  {2,0,6},  {3,-1,0},  {2,2,0},  {3,3,-8}},
/* c112 */ {{3,0,3},  {2,1,-1},  {2,2,0},  {2,1,1},  {2,0,5},  {3,2,-8}},
/* c113 */ {{3,0,2},  {2,0,6},  {3,4,0},  {2,-3,-3},  {2,3,-3},  {3,4,-2}},
/* c114 */ {{3,0,8},  {2,0,-6},  {2,4,0},  {3,2,-2}},
/* c115 */ {{3,0,2},  {2,0,6},  {2,2,-2},  {2,2,2},  {2,0,-6},  {3,2,-2}},
/* c116 */ {{3,0,2},  {2,0,6},  {2,4,-6},  {2,0,6},  {3,2,-8}},
/* c117 */ {{3,0,3},  {2,0,4},  {2,1,1},  {2,2,0},  {2,1,-1},  {2,0,-4},
		{2,-1,-1},  {2,-2,0},  {2,-1,1},  {3,6,-3}},
/* c120 */ {{3,0,2},  {2,0,6},  {2,3,0},  {2,1,-1},  {2,0,-1},  {2,-1,-1},
		{2,-3,0},  {3,6,-5}},
/* c121 */ {{3,0,3},  {2,0,4},  {2,1,1},  {2,2,0},  {2,1,-1},  {2,0,-3},  {2,-2,-2},
		{2,-1,0},  {2,-1,1},  {3,2,2},  {2,2,-2},  {3,2,-3}},
/* c122 */ {{3,0,2},  {2,0,6},  {2,3,0},  {2,1,-1},  {2,0,-1},  {2,-1,-1},  {2,-3,0},
		{3,1,0},  {2,3,-3},  {3,2,-2}},
/* c123 */ {{3,4,7},  {2,-1,1},  {2,-2,0},  {2,-1,-1},  {2,0,-1},  {2,1,-1},  {2,2,0},
		{2,1,-1},  {2,0,-1},  {2,-1,-1},  {2,-2,0},  {2,-1,1},  {3,6,-3}},
/* c124 */ {{3,0,8},  {2,4,0},  {3,-2,0},  {2,0,-6},  {3,4,-2}},
/* c125 */ {{3,0,3},  {2,0,5},  {3,4,0},  {2,0,-5},  {2,-1,-1},  {2,-2,0},
		{2,-1,1},  {3,6,-3}},
/* c126 */ {{3,0,8},  {2,0,-3},  {2,2,-3},  {2,2,3},  {2,0,3},  {3,2,-8}},
/* c127 */ {{3,0,2},  {2,0,6},  {3,4,0},  {2,0,-6},  {2,-2,2},  {2,-2,-2},  {3,6,-2}},
/* c130 */ {{3,0,2},  {2,4,6},  {3,-4,0},  {2,4,-6},  {3,2,-2}},
/* c131 */ {{3,2,2},  {2,0,3},  {2,-2,3},  {3,4,0},  {2,-2,-3},  {3,4,-5}},
/* c132 */ {{3,0,8},  {2,4,0},  {2,-4,-6},  {2,4,0},  {3,2,-2}},
/* c133 */ {{3,3,1},  {2,-2,0},  {2,0,8},  {2,2,0},  {3,3,-9}},
/* c134 */ {{3,0,7},  {2,4,-4},  {3,2,-3}},
/* c135 */ {{3,1,9},  {2,2,0},  {2,0,-8},  {2,-2,0},  {3,5,-1}},
/* c136 */ {{3,2,2},  {2,0,6},  {3,-2,-2},  {2,2,2},  {2,2,-2},  {3,2,-6}},
/* c137 */ {{3,2,3},  {2,-2,2},  {2,2,2},  {3,-2,-2},  {2,4,0},  {3,2,-5}},
/* c140 */ {{3,3,8},  {2,-1,0},  {2,0,1},  {2,1,0},  {2,0,-1},  {2,1,-1},  {3,2,-7}},
/* c141 */ {{3,1,6},  {2,2,0},  {2,1,-1},  {2,0,-3},  {2,-3,0},  {2,-1,1},  {2,1,1},
		{2,3,0},  {3,2,-4}},
/* c142 */ {{3,0,8},  {2,0,-6},  {2,3,0},  {2,1,1},  {2,0,2},  {2,-1,1},
		{2,-3,0},  {3,6,-6}},
/* c143 */ {{3,4,5},  {2,-1,1},  {2,-2,0},  {2,-1,-1},  {2,0,-2},  {2,1,-1},
		{2,3,0},  {3,2,-2}},
/* c144 */ {{3,4,8},  {2,0,-6},  {2,-3,0},  {2,-1,1},  {2,0,2},  {2,1,1},
		{2,3,0},  {3,2,-6}},
/* c145 */ {{3,3,2},  {2,-2,0},  {2,-1,1},  {2,0,2},  {2,1,1},  {2,2,0},  {2,1,-1},
		{2,-1,-1},  {2,-3,0},  {3,6,-4}},
/* c146 */ {{3,1,2},  {2,0,5},  {2,1,1},  {2,1,0},  {2,1,-1},  {3,-2,-2},
		{2,-2,0},  {3,6,-5}},
/* c147 */ {{3,1,0},  {2,2,0},  {2,1,1},  {2,0,4},  {2,-1,1},  {2,-2,0},  {2,-1,-1},
		{2,0,-2},  {2,1,-1},  {2,3,0},  {3,2,-2}},
/* c150 */ {{3,0,2},  {2,0,6},  {3,0,-2},  {2,3,0},  {2,1,-1},  {2,0,-3},  {3,2,-2}},
/* c151 */ {{3,2,2},  {2,0,3},  {3,0,1},  {2,0,1},  {3,4,-7}},
/* c152 */ {{3,0,1},  {2,1,-1},  {2,2,0},  {2,1,1},  {2,0,4},  {3,0,1},
		{2,0,1},  {3,2,-7}},
/* c153 */ {{3,0,2},  {2,0,6},  {3,4,-2},  {2,-2,-2},  {2,-2,0},  {3,2,0},
		{2,2,-2},  {3,2,-2}},
/* c154 */ {{3,1,2},  {2,0,6},  {3,5,-8}},
/* c155 */ {{3,0,2},  {2,0,4},  {2,1,0},  {2,1,-1},  {2,1,1},  {2,1,-1},
		{2,0,-3},  {3,-2,0},  {2,0,3},  {3,4,-5}},
/* c156 */ {{3,0,2},  {2,0,4},  {2,1,-1},  {2,1,1},  {2,1,0},  {2,1,-1},
		{2,0,-3},  {3,2,-2}},
/* c157 */ {{3,0,3},  {2,0,2},  {2,1,1},  {2,2,0},  {2,1,-1},  {2,0,-2},
		{2,-1,-1},  {2,-2,0},  {2,-1,1},  {3,6,-3}},
/* c160 */ {{3,0,0},  {2,0,6},  {2,3,0},  {2,1,-1},  {2,0,-2},  {2,-1,-1},  {2,-3,0},  {3,6,-2}},
/* c161 */ {{3,4,2},  {2,-3,0},  {2,-1,1},  {2,0,2},  {2,1,1},  {2,2,0},
		{2,1,-1},  {2,0,-5},  {3,2,0}},
/* c162 */ {{3,0,2},  {2,0,4},  {3,0,-2},  {2,2,2},  {2,1,0},  {2,1,-1},  {3,2,-5}},
/* c163 */ {{3,0,2},  {2,3,0},  {2,1,1},  {2,-1,1},  {2,-2,0},  {2,-1,1},
		{2,1,1},  {2,3,0},  {3,2,-6}},
/* c164 */ {{3,0,6},  {2,4,0},  {3,-2,2},  {2,0,-5},  {2,1,-1},  {2,1,0},  {3,2,-2}},
/* c165 */ {{3,0,6},  {2,0,-3},  {2,1,-1},  {2,2,0},  {2,1,1},  {2,0,3},  {3,2,-6}},
/* c166 */ {{3,0,6},  {2,0,-2},  {2,2,-2},  {2,2,2},  {2,0,2},  {3,2,-6}},
/* c167 */ {{3,0,6},  {2,0,-3},  {2,1,-1},  {2,1,1},  {2,1,-1},  {2,1,1},
		{2,0,3},  {3,2,-6}},
/* c170 */ {{3,0,2},  {2,4,4},  {3,-4,0},  {2,4,-4},  {3,2,-2}},
/* c171 */ {{3,0,0},  {2,4,4},  {2,0,2},  {3,-4,0},  {2,0,-2},  {2,2,-2},  {3,4,-2}},
/* c172 */ {{3,0,6},  {2,4,0},  {2,-4,-4},  {2,4,0},  {3,2,-2}},
/* c173 */ {{3,4,9},  {2,-1,-1},  {2,0,-2},  {2,-1,-1},  {2,1,-1},
		{2,0,-2},  {2,1,-1},  {3,2,-1}},
/* c174 */ {{3,2,9},  {2,0,-9},  {3,4,0}},
/* c175 */ {{3,2,2},  {2,0,1},  {2,-2,2},  {2,2,2},  {2,0,1},  {3,0,-1},  {2,2,-2},
		{2,-2,-2},  {3,4,-3}},
/* c176 */ {{3,0,9},  {2,1,-1},  {2,0,-2},  {2,1,-1},  {2,-1,-1},
		{2,0,-2},  {2,-1,-1},  {3,6,-1}},
/* c177 */ {{0}},
	};	/* End of chrtbl */
