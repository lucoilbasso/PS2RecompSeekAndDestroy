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

// Function: entry_001012f8
// Address: 0x1012f8 - 0x101314
void entry_001012f8_0x1012f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001012f8_0x1012f8");
#endif

    switch (ctx->pc) {
        case 0x101300u: goto label_101300;
        default: break;
    }

    ctx->pc = 0x1012f8u;

    // 0x1012f8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1012F8u;
    SET_GPR_U32(ctx, 31, 0x101300u);
    ctx->pc = 0x1012FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012F8u;
    // 0x1012fc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1012F8u, 0x101300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101300u;
label_101300:
    // 0x101300: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x101300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101304: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x101304u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
    // 0x101308: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x101308u;
    {
        const bool branch_taken_0x101308 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101308u;
        // 0x10130c: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101308) {
            ctx->pc = 0x101314u;
            return;
        }
    }
    ctx->pc = 0x101310u;
    // 0x101310: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x101310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->pc = 0x101314u;
}
