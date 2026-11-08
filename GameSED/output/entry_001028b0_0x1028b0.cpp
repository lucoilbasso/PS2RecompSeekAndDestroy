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

// Function: entry_001028b0
// Address: 0x1028b0 - 0x1028cc
void entry_001028b0_0x1028b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001028b0_0x1028b0");
#endif

    switch (ctx->pc) {
        case 0x1028b8u: goto label_1028b8;
        default: break;
    }

    ctx->pc = 0x1028b0u;

    // 0x1028b0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1028B0u;
    SET_GPR_U32(ctx, 31, 0x1028B8u);
    ctx->pc = 0x1028B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028B0u;
    // 0x1028b4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1028B0u, 0x1028B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028B8u;
label_1028b8:
    // 0x1028b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1028b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1028bc: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x1028bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x1028c0: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1028C0u;
    {
        const bool branch_taken_0x1028c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1028C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1028C0u;
        // 0x1028c4: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028c0) {
            ctx->pc = 0x1028CCu;
            return;
        }
    }
    ctx->pc = 0x1028C8u;
    // 0x1028c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1028c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1028ccu;
}
