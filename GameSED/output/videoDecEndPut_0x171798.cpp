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

// Function: videoDecEndPut
// Address: 0x171798 - 0x1717b0
void videoDecEndPut_0x171798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecEndPut_0x171798");
#endif

    ctx->pc = 0x171798u;

    // 0x171798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17179c: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x17179cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x1717a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1717a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1717a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1717a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1717a8: 0x805d4fc  j           func_1753F0
    ctx->pc = 0x1717A8u;
    ctx->pc = 0x1717ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717A8u;
    // 0x1717ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753F0u;
    viBufEndPut_0x1753f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1717B0u;
}
