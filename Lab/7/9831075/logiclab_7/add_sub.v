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
---  Module Name: Single Bit Adder/Subtractor
---  Description: Lab 07 Part 1
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module add_sub (
	input a ,
	input b ,
	input cin ,
	input sel ,
	output sum ,
	output cout
);
	wire [4:0] w ;
	xor 
	 g1(w[0] , b , sel ) ,
	 g2(w[1] , w[0] , a ) ,
	 g4(sum , w[1] , cin ) ;
	and 
	 g3(w[2],w[0],a) , 
	 g5(w[3],w[1],cin);
	or 
	 g6(cout , w[2] , w[3] ) ; 
	
endmodule 
	
