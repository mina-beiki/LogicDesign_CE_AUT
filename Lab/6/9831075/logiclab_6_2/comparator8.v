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
---  Module Name: 8 Bits Comparator
---  Description: Lab 06 Part 3
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module comparator8 (
	input [7:0] A ,
	input [7:0] B ,
	input 		l ,
	input 		e ,
	input 		g ,
	output 		lt ,
	output 		et ,
	output 		gt
);
	wire [5:0] w ; 
	wire [2:0] w2; 
	wire [2:0] w3; 

	assign w2[0] = A[6] ; 
	assign w2[1] = A[7] ; 
	assign w2[2] = 0 ; 
	assign w3[0] = B[6] ;
	assign w3[1] = B[7] ; 
	assign w3[2] = 0 ; 
	comparator3 cmp1(A[2:0],B[2:0],l,e,g,w[0],w[1],w[2]);
	comparator3 cmp2(A[5:3],B[5:3],w[0],w[1],w[2],w[3],w[4],w[5]);
	comparator3 cmp3(w2[2:0],w3[2:0],w[3],w[4],w[5],lt,et,gt);

endmodule