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

// Function: entry_0017178c
// Address: 0x17178c - 0x171798
void entry_0017178c_0x17178c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017178c_0x17178c");
#endif

    ctx->pc = 0x17178cu;

    // 0x17178c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17178cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171790: 0x805d4c0  j           func_175300
    ctx->pc = 0x171790u;
    ctx->pc = 0x171794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171790u;
    // 0x171794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175300u;
    viBufBeginPut_0x175300(rdram, ctx, runtime); return;
    ctx->pc = 0x171798u;
}
