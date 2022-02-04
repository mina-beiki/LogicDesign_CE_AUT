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
---  Module Name: Arithmetic and Logic Unit
---  Description: Lab 08
-----------------------------------------------------------*/
`timescale 1 ns/1 ns

module alu (
	input [1:0] A ,
	input [1:0] B ,
	input [1:0]	sel ,
	output [3:0] Y
);
	 wire [3:0] addw ;
    wire [3:0] multw ;
	 wire [3:0] nandw ;
	 wire [3:0] notw ;
    wire [1:0] w0 ; 
	 wire [1:0] w1 ; 
	 wire cout ; 
	 wire [1:0] plus ; 
	 
	 assign w0[0] = 0 ;
	 assign w0[1] = 0 ;
	 
	 
	assign {cout , plus } = A+B ; 
	assign w1[1] = 0 ; 
	assign w1[0] = cout ; 
	assign addw = {w1 , plus } ;
	assign nandw = {w0 , ~(A&B) } ; 
	assign notw = {A,~A}; 
	multiplier2x2 multg(A , B , multw) ;

	multiplexer4x4 muxg(multw , addw , nandw , notw , sel , Y ); 

endmodule