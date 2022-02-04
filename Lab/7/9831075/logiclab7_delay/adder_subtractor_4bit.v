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
---  Module Name: 4 Bits Adder/Subtractor
---  Description: Lab 07 Part 2
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module adder_subtractor_4bit (
	input [3:0] A ,
	input [3:0] B ,
	input 		sel , // 0: add, 1: subtract
	output [3:0] S ,
	output 		cout
);
	wire [2:0] w ; 
	add_sub g1(A[0],B[0],sel,sel,S[0],w[0]);
	add_sub g2(A[1],B[1],w[0],sel,S[1],w[1]);
	add_sub g3(A[2],B[2],w[1],sel,S[2],w[2]);
	add_sub g4(A[3],B[3],w[2],sel,S[3],cout);
	
endmodule