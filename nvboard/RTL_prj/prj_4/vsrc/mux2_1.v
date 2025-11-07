/********二选一多路选择器****************
    s=0,y=a;
    s=1,y=b;
法一：三目条件运算法：
**************************************/

module mux2_1 (
    input a,b,s,
    output y
);
    assign y= (s == 1'b0) ? a : b;
endmodule

/* 法二：数据流 assign  
module mux2_1 (
    input a,b,s,
    output y
);
    assign y = (~s&a) | (s&b);
endmodule
*/

/* 法三：always中使用：if -else 
module mux2_1 (
    input a,b,s,
    output reg y
);
    always(*)
            if(s == 1'b0)
                begin y = a;end
            else 
                begin y = b;end

endmodule
*/

/* 法四：always中使用：case-default
module mux2_1 (
    input a,b,s,
    output reg y
);
    always(*)
        begin
            case(s)
            1'b0 : y = a;
            1'b1 : y = b;
            default : y = 1'b0;
            endcase
        end
endmodule
*/
