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

// Function: entry_001a82d8
// Address: 0x1a82d8 - 0x1a8300
void entry_001a82d8_0x1a82d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a82d8_0x1a82d8");
#endif

    switch (ctx->pc) {
        case 0x1a82fcu: goto label_1a82fc;
        default: break;
    }

    ctx->pc = 0x1a82d8u;

    // 0x1a82d8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a82dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a82dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a82e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a82e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a82e4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a82e8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a82e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a82ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A82ECu;
    {
        const bool branch_taken_0x1a82ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82ECu;
        // 0x1a82f0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82ec) {
            ctx->pc = 0x1A8300u;
            return;
        }
    }
    ctx->pc = 0x1A82F4u;
    // 0x1a82f4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A82F4u;
    SET_GPR_U32(ctx, 31, 0x1A82FCu);
    ctx->pc = 0x1A82F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A82F4u;
    // 0x1a82f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A82F4u, 0x1A82FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A82FCu;
label_1a82fc:
    // 0x1a82fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a82fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a8300u;
}
