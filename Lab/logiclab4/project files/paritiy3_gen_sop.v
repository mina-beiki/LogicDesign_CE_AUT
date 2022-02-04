/*--  *******************************************************
--  Computer Architecture Course, Laboratory Sources 
--  Amirkabir University of Technology (Tehran Polytechnic)
--  Department of Computer Engineering (CE-AUT)
--  https://ce[dot]aut[dot]ac[dot]ir
--  *******************************************************
--  All Rights reserved (C) 2019-2020
--  *******************************************************
--  Student ID  : 9831075
--  Student Name: Mina Beiki
--  Student Mail: 
--  *******************************************************
--  Additional Comments:
--
--*/

/*-----------------------------------------------------------
---  Module Name: Paritiy Generator Sum of Products
---  Description: Lab 04 Part 4
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module paritiy3_gen_sop (
	input a,
	input b,
	input c,
	output f	
);
	wire e,m,s,x,y,z,k;
	not g1(e,a);
	not g2(m,b);
	not g3(s,c);
	and g4(x,e,m,s);
	and g5(y,m,a,c);
	and g6(z,e,b,c);
	and g7(k,s,a,b);
	or g8(f,x,y,z,k);

endmodule