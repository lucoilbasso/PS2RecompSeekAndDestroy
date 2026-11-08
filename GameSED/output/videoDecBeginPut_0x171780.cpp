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

// Function: videoDecBeginPut
// Address: 0x171780 - 0x171798
void videoDecBeginPut_0x171780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecBeginPut_0x171780");
#endif

    ctx->pc = 0x171780u;

    // 0x171780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171784: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x171784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x171788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
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
