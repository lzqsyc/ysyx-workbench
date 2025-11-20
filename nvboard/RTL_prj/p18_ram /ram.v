module ram #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 4
)(
    clk             // << i
    ,we             // << i
    ,w_addr         // << i
    ,r_addr         // << i
    ,w_date         // << i
    ,r_date         // >> o
);
    input clk,we,w_addr,r_addr,w_date;
    output                     r_date;
    wire                       clk,we;
    wire    [ADDR_WIDTH-1:0]             w_addr;
    wire    [DATA_WIDTH-1:0]             w_date;
    wire    [ADDR_WIDTH-1:0]             r_addr;
    reg     [DATA_WIDTH-1:0]             r_date;    
    // 定义寄存器堆 
    reg [DATA_WIDTH-1:0] ram [(2**ADDR_WIDTH-1):0];
    always @(posedge clk ) begin
        if (we) begin
            ram[w_addr] <= w_date;
        end 
    end
    assign r_date = ram[r_addr]; 
endmodule
