module clk_div2(
    input clk,
    input rst_n,
    output reg clk_out
);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) 
            clk_out <= 1'b0;
        else 
            clk_out <= ~clk_out; // 每个时钟周期翻转一次
    end
endmodule

/*
======================= n分频时钟生成结构=============================
module clk_div_even (
    input clk,
    input rst_n,
    output reg clk_out
);
    parameter DIV = 4;  // 必须是偶数
    reg [$clog2(DIV/2)-1:0] cnt;
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) 
            cnt <= 0;
        else if (cnt == DIV/2 - 1) 
            cnt <= 0;
        else 
            cnt <= cnt + 1;
    end
    
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) 
            clk_out <= 1'b0;
        else if (cnt == DIV/2 - 1) 
            clk_out <= ~clk_out;
    end
endmodule

*/