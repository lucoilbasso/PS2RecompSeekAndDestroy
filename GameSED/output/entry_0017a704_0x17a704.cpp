#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0017a704
// Address: 0x17a704 - 0x17a710
void entry_0017a704_0x17a704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a704_0x17a704");
#endif

    ctx->pc = 0x17a704u;

    // 0x17a704: 0x38c33fff  xori        $v1, $a2, 0x3FFF
    ctx->pc = 0x17a704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)16383);
    // 0x17a708: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x17a708u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17a70c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x17a70cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    ctx->pc = 0x17a710u;
}
