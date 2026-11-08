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

// Function: entry_001b08b4
// Address: 0x1b08b4 - 0x1b08d4
void entry_001b08b4_0x1b08b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b08b4_0x1b08b4");
#endif

    switch (ctx->pc) {
        case 0x1b08c4u: goto label_1b08c4;
        default: break;
    }

    ctx->pc = 0x1b08b4u;

    // 0x1b08b4: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1b08b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1b08b8: 0xdc25aae0  ld          $a1, -0x5520($at)
    ctx->pc = 0x1b08b8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25AAE0u));
    // 0x1b08bc: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1B08BCu;
    SET_GPR_U32(ctx, 31, 0x1B08C4u);
    ctx->pc = 0x1B08C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08BCu;
    // 0x1b08c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1B08BCu, 0x1B08C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B08C4u;
label_1b08c4:
    // 0x1b08c4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B08C4u;
    {
        const bool branch_taken_0x1b08c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08C4u;
        // 0x1b08c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b08c4) {
            ctx->pc = 0x1B08A0u;
            return;
        }
    }
    ctx->pc = 0x1B08CCu;
    // 0x1b08cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B08CCu;
    {
        const bool branch_taken_0x1b08cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b08cc) {
            ctx->pc = 0x1B0924u;
            return;
        }
    }
    ctx->pc = 0x1B08D4u;
}
