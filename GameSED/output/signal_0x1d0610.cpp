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

// Function: signal
// Address: 0x1d0610 - 0x1d0634
void signal_0x1d0610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signal_0x1d0610");
#endif

    ctx->pc = 0x1d0610u;

    // 0x1d0610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0614: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d0614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d0618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d061c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d061cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0620: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d0620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0624: 0x8c44e1b0  lw          $a0, -0x1E50($v0)
    ctx->pc = 0x1d0624u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24E1B0u));
    // 0x1d0628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d062c: 0x8074100  j           func_1D0400
    ctx->pc = 0x1D062Cu;
    ctx->pc = 0x1D0630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D062Cu;
    // 0x1d0630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0400u;
    _signal_r_0x1d0400(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0634u;
}
