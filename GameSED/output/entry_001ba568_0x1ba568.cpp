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

// Function: entry_001ba568
// Address: 0x1ba568 - 0x1ba584
void entry_001ba568_0x1ba568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba568_0x1ba568");
#endif

    switch (ctx->pc) {
        case 0x1ba580u: goto label_1ba580;
        default: break;
    }

    ctx->pc = 0x1ba568u;

    // 0x1ba568: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ba568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ba56c: 0x27c2d840  addiu       $v0, $fp, -0x27C0
    ctx->pc = 0x1ba56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957120));
    // 0x1ba570: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ba574: 0x8ec4c0a8  lw          $a0, -0x3F58($s6)
    ctx->pc = 0x1ba574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951080)));
    // 0x1ba578: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BA578u;
    SET_GPR_U32(ctx, 31, 0x1BA580u);
    ctx->pc = 0x1BA57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA578u;
    // 0x1ba57c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BA578u, 0x1BA580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA580u;
label_1ba580:
    // 0x1ba580: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ba584u;
}
