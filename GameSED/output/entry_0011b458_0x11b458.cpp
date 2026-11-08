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

// Function: entry_0011b458
// Address: 0x11b458 - 0x11b46c
void entry_0011b458_0x11b458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b458_0x11b458");
#endif

    ctx->pc = 0x11b458u;

    // 0x11b458: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11b45c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B45Cu;
    {
        const bool branch_taken_0x11b45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B45Cu;
        // 0x11b460: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b45c) {
            ctx->pc = 0x11B46Cu;
            return;
        }
    }
    ctx->pc = 0x11B464u;
    // 0x11b464: 0xc060e88  jal         func_183A20
    ctx->pc = 0x11B464u;
    SET_GPR_U32(ctx, 31, 0x11B46Cu);
    ctx->pc = 0x11B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B464u;
    // 0x11b468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x11B464u, 0x11B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B46Cu;
}
