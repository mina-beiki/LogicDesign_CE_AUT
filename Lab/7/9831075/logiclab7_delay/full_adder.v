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
---  Module Name: Full Adder Gate Level
---  Description: Lab 07 Part 1
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module full_adder (
	input a ,
	input b ,
	input ci ,
	output s ,
	output co
);
	wire [2:0] w ;
	and
		g1(w[0],a,b),
		g2(w[1],b,ci),
		g3(w[2],a,ci);
	xor
		g4(s,a,b,ci);
	or
		g5(co,w[0],w[1],w[2]);
endmodule