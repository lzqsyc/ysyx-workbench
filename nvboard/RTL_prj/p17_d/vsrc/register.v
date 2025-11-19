module register #(
    parameter WIDTH = 8
)(
     clk
    ,rstn
    ,set
    ,en
    ,d
    ,q
);
    input        clk,rstn,set,en;
    input   wire [WIDTH-1:0]   d;
    output  reg  [WIDTH-1:0]   q;

    // 异步复位，使能控制的寄存器
    
    always @(posedge clk or posedge rstn or posedge set) begin
        if (rstn) begin
            q <= {WIDTH{1'b0}};
        end else if (set) begin
            q <= {WIDTH{1'b1}};
        end else if (en) begin
            q <= d;
        end
    end
endmodule 
