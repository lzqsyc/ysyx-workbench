#	 ===============================================
#	 verilator simulation makefile
#	RTL_prj/
#	├─ prj_1/
#	│  ├─ vsrc/    # *.v
#	│  ├─ csrc/    # *.cpp（tb_main）
#	│  └─ constr/  # <TOP>.nxdc
#	├─ prj_2/
#	└─ Makefile
#	 交互 + 写波形（默认 vcd）
#	make PROJ=prj_2 TOP_MODULE=test MODE=nv/sim run-nv/sim


# -Mdir $(OBJ_DIR) 用于指定verilator --build 创建obj_dir的路径 从而-o接生成文件 不接路径 
# 不要同时在 Make(目标路径) 和 verilator -o(目标路径) 两处加路径，避免“路径叠加”
# +=：追加赋值
# $(abspath name) abspath等于当前目录的绝对路径
# -I$(name) 增加路径
# 把后面的每一段参数原封不动转发给底层的编译器或链接器。
# -CFLAGS ... → 传给 g++/clang++（编译阶段用）
# -LDFLAGS ... → 传给链接器（链接阶段用）
# Verilator 在 --build 阶段会把这些转为实际的编译/链接命令
# ===============================================

PROJ        ?= prj_2         
TOP_MODULE  ?= test
MODE		?= nv                  

# ================= 目录布局 =================#
PROJ_DIR    := $(PROJ)
VSRC_DIR    := $(PROJ_DIR)/vsrc
CSRC_DIR    := $(PROJ_DIR)/csrc
OBJ_DIR     := $(PROJ_DIR)/$(MODE)_obj

# 源文件收集
VSRC_FILE   := $(wildcard $(VSRC_DIR)/*.v)
CSRC_FILE   := $(wildcard $(CSRC_DIR)/$(MODE)_*.cpp)

# 绑定约束文件
NXDC_FILES  := $(PROJ_DIR)/constr/$(TOP_MODULE).nxdc
SRC_AUTO_BIND := $(OBJ_DIR)/auto_bind.cpp

# 目标文件
NV_TARGET   := $(OBJ_DIR)/nv_$(TOP_MODULE)
SIM_TARGET	:= $(OBJ_DIR)/sim_$(TOP_MODULE)
WAVE_FILE   := $(OBJ_DIR)/$(TOP_MODULE).vcd

# ================= 工具与 Verilator 开关 =========================#
VERILATOR       := verilator
GTKWAVE         := gtkwave
VERILATED_FLAGS := --cc --exe --build --trace --Wall --top-module $(TOP_MODULE) -Mdir $(OBJ_DIR)

# ======================= nvbvoard 仿真 ==========================#
ifeq ($(MODE),nv)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	@mkdir -p $(OBJ_DIR)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
# 添加 nvboard依赖文件
CSRC_FILE += $(SRC_AUTO_BIND)
include $(NVBOARD_HOME)/scripts/nvboard.mk
NV_CXXFLAGS  += -I$(NVBOARD_HOME)/usr/include -DTOP_NAME="\"V$(TOP_MODULE)\""
NV_LDFLAGS	  = $(LDFLAGS)
# nvboard 仿真规则
$(NV_TARGET): $(VSRC_FILE) $(CSRC_FILE) $(NVBOARD_ARCHIVE)
	@mkdir -p $(OBJ_DIR)
	$(VERILATOR) $(VERILATED_FLAGS) \
		-o nv_$(TOP_MODULE) $^ \
		$(addprefix -CFLAGS , $(NV_CXXFLAGS)) \
		$(addprefix -LDFLAGS , $(NV_LDFLAGS))
run-nv:$(NV_TARGET)
	cd $(OBJ_DIR) && ./nv_$(TOP_MODULE)
endif

# ======================= gtkwave 仿真 ==========================#
ifeq ($(MODE),sim)
$(SIM_TARGET): $(VSRC_FILE) $(CSRC_FILE)
	@mkdir -p $(OBJ_DIR)
	$(VERILATOR) $(VERILATED_FLAGS) -o sim_$(TOP_MODULE) $(VSRC_FILE) $(CSRC_FILE)
run-sim: $(SIM_TARGET)
	cd $(OBJ_DIR) && ./sim_$(TOP_MODULE) && $(GTKWAVE) $(TOP_MODULE).vcd 
endif
clean:
	rm -rf $(OBJ_DIR)

.PHONY: run-nv run-sim clean 

#	
#	CFLAGS（给 C 编译器）
#	    用途：只作用于 C 源文件（.c） 的编译阶段。
#	    常放：
#	        优化/调试：-O2 -g -Wall -Wextra -Werror
#	        语言标准：-std=c11
#	    只对 C 编译 生效；对 C++ 编译不会自动生效。
#	
#	CXXFLAGS（给 C++ 编译器）
#	    用途：只作用于 C++ 源文件（.cpp/.cc） 的编译阶段。
#	    常放：
#	        优化/警告：-O2 -g -Wall -Wextra -Werror
#	        语言标准：-std=c++17
#	    你工程里的：-I$(NVBOARD_HOME)/usr/include -DTOP_NAME="\"V$(TOP_MODULE)\""
#	
#	LDFLAGS（给链接器的“选项”）
#	    用途：链接阶段 使用的选项（不含具体库名）。
#	    常放：
#	        库目录：-L/path/to/lib
#	        传递细节给 ld：-Wl,--as-needed -Wl,-rpath,/path/to/lib
#	

