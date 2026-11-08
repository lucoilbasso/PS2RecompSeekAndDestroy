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

// Function: entry_001b090c
// Address: 0x1b090c - 0x1b0924
void entry_001b090c_0x1b090c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b090c_0x1b090c");
#endif

    switch (ctx->pc) {
        case 0x1b091cu: goto label_1b091c;
        default: break;
    }

    ctx->pc = 0x1b090cu;

    // 0x1b090c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1b090cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1b0910: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1b0910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1b0914: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1B0914u;
    SET_GPR_U32(ctx, 31, 0x1B091Cu);
    ctx->pc = 0x1B0918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0914u;
    // 0x1b0918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1B0914u, 0x1B091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B091Cu;
label_1b091c:
    // 0x1b091c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B091Cu;
    {
        const bool branch_taken_0x1b091c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B091Cu;
        // 0x1b0920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b091c) {
            ctx->pc = 0x1B08F8u;
            return;
        }
    }
    ctx->pc = 0x1B0924u;
}
