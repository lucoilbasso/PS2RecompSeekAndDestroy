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

// Function: entry_001ac068
// Address: 0x1ac068 - 0x1ac07c
void entry_001ac068_0x1ac068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac068_0x1ac068");
#endif

    switch (ctx->pc) {
        case 0x1ac074u: goto label_1ac074;
        default: break;
    }

    ctx->pc = 0x1ac068u;

    // 0x1ac068: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ac068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ac06c: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AC06Cu;
    SET_GPR_U32(ctx, 31, 0x1AC074u);
    ctx->pc = 0x1AC070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC06Cu;
    // 0x1ac070: 0x24849980  addiu       $a0, $a0, -0x6680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AC06Cu, 0x1AC074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC074u;
label_1ac074:
    // 0x1ac074: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AC074u;
    {
        const bool branch_taken_0x1ac074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC074u;
        // 0x1ac078: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac074) {
            ctx->pc = 0x1AC0A4u;
            return;
        }
    }
    ctx->pc = 0x1AC07Cu;
}
