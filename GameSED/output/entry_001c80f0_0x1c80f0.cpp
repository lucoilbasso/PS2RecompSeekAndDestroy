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

// Function: entry_001c80f0
// Address: 0x1c80f0 - 0x1c8118
void entry_001c80f0_0x1c80f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c80f0_0x1c80f0");
#endif

    switch (ctx->pc) {
        case 0x1c80fcu: goto label_1c80fc;
        case 0x1c810cu: goto label_1c810c;
        default: break;
    }

    ctx->pc = 0x1c80f0u;

    // 0x1c80f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c80f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80f4: 0xc07205c  jal         func_1C8170
    ctx->pc = 0x1C80F4u;
    SET_GPR_U32(ctx, 31, 0x1C80FCu);
    ctx->pc = 0x1C8170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8170u, 0x1C80F4u, 0x1C80FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80FCu;
label_1c80fc:
    // 0x1c80fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c80fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8104: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C8104u;
    SET_GPR_U32(ctx, 31, 0x1C810Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C8104u, 0x1C810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C810Cu;
label_1c810c:
    // 0x1c810c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C810Cu;
    {
        const bool branch_taken_0x1c810c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C810Cu;
        // 0x1c8110: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c810c) {
            ctx->pc = 0x1C815Cu;
            return;
        }
    }
    ctx->pc = 0x1C8114u;
    // 0x1c8114: 0x0  nop
    ctx->pc = 0x1c8114u;
    // NOP
    ctx->pc = 0x1c8118u;
}
