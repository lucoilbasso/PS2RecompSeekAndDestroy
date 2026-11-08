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

// Function: entry_001473e0
// Address: 0x1473e0 - 0x147400
void entry_001473e0_0x1473e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001473e0_0x1473e0");
#endif

    switch (ctx->pc) {
        case 0x1473e8u: goto label_1473e8;
        default: break;
    }

    ctx->pc = 0x1473e0u;

    // 0x1473e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1473E0u;
    SET_GPR_U32(ctx, 31, 0x1473E8u);
    ctx->pc = 0x1473E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1473E0u;
    // 0x1473e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1473E0u, 0x1473E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473E8u;
label_1473e8:
    // 0x1473e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1473e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1473ec: 0x14730004  bne         $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1473ECu;
    {
        const bool branch_taken_0x1473ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1473F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473ECu;
        // 0x1473f0: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473ec) {
            ctx->pc = 0x147400u;
            return;
        }
    }
    ctx->pc = 0x1473F4u;
    // 0x1473f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1473F4u;
    {
        const bool branch_taken_0x1473f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1473F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1473F4u;
        // 0x1473f8: 0x34420300  ori         $v0, $v0, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1473f4) {
            ctx->pc = 0x147408u;
            return;
        }
    }
    ctx->pc = 0x1473FCu;
    // 0x1473fc: 0x0  nop
    ctx->pc = 0x1473fcu;
    // NOP
    ctx->pc = 0x147400u;
}
