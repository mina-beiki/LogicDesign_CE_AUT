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

module add_sub_delay (
	input a ,
	input b ,
	input cin ,
	input sel ,
	output sum ,
	output cout
);
	wire w ; 
	xor #(10) g(w,b,sel);
	full_adder_delay fa(a,w,cin,sum,cout);
	
endmodule 
	
