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

// Function: entry_001b08d4
// Address: 0x1b08d4 - 0x1b08f8
void entry_001b08d4_0x1b08d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b08d4_0x1b08d4");
#endif

    switch (ctx->pc) {
        case 0x1b08e4u: goto label_1b08e4;
        default: break;
    }

    ctx->pc = 0x1b08d4u;

    // 0x1b08d4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1b08d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1b08d8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1b08d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1b08dc: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1B08DCu;
    SET_GPR_U32(ctx, 31, 0x1B08E4u);
    ctx->pc = 0x1B08E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08DCu;
    // 0x1b08e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1B08DCu, 0x1B08E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B08E4u;
label_1b08e4:
    // 0x1b08e4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B08E4u;
    {
        const bool branch_taken_0x1b08e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08E4u;
        // 0x1b08e8: 0x3c120026  lui         $s2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08e4) {
            ctx->pc = 0x1B0924u;
            return;
        }
    }
    ctx->pc = 0x1B08ECu;
    // 0x1b08ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B08ECu;
    {
        const bool branch_taken_0x1b08ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b08ec) {
            ctx->pc = 0x1B090Cu;
            return;
        }
    }
    ctx->pc = 0x1B08F4u;
    // 0x1b08f4: 0x0  nop
    ctx->pc = 0x1b08f4u;
    // NOP
    ctx->pc = 0x1b08f8u;
}
