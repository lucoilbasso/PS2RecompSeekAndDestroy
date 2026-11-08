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

// Function: entry_00183404
// Address: 0x183404 - 0x18342c
void entry_00183404_0x183404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183404_0x183404");
#endif

    switch (ctx->pc) {
        case 0x18340cu: goto label_18340c;
        default: break;
    }

    ctx->pc = 0x183404u;

    // 0x183404: 0xc068086  jal         func_1A0218
    ctx->pc = 0x183404u;
    SET_GPR_U32(ctx, 31, 0x18340Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x183404u, 0x18340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18340Cu;
label_18340c:
    // 0x18340c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x18340cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x183410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183418: 0x24a57dd8  addiu       $a1, $a1, 0x7DD8
    ctx->pc = 0x183418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32216));
    // 0x18341c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18341Cu;
    {
        const bool branch_taken_0x18341c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x183420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18341Cu;
        // 0x183420: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18341c) {
            ctx->pc = 0x18342Cu;
            return;
        }
    }
    ctx->pc = 0x183424u;
    // 0x183424: 0xc068186  jal         func_1A0618
    ctx->pc = 0x183424u;
    SET_GPR_U32(ctx, 31, 0x18342Cu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x183424u, 0x18342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18342Cu;
}
