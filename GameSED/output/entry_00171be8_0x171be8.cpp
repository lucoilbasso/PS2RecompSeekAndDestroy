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

// Function: entry_00171be8
// Address: 0x171be8 - 0x171c18
void entry_00171be8_0x171be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171be8_0x171be8");
#endif

    switch (ctx->pc) {
        case 0x171bf0u: goto label_171bf0;
        case 0x171c00u: goto label_171c00;
        default: break;
    }

    ctx->pc = 0x171be8u;

    // 0x171be8: 0xc06f648  jal         func_1BD920
    ctx->pc = 0x171BE8u;
    SET_GPR_U32(ctx, 31, 0x171BF0u);
    ctx->pc = 0x171BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BE8u;
    // 0x171bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD920u, 0x171BE8u, 0x171BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171BF0u;
label_171bf0:
    // 0x171bf0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x171BF0u;
    {
        const bool branch_taken_0x171bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171bf0) {
            ctx->pc = 0x171C18u;
            return;
        }
    }
    ctx->pc = 0x171BF8u;
    // 0x171bf8: 0xc05c5fe  jal         func_1717F8
    ctx->pc = 0x171BF8u;
    SET_GPR_U32(ctx, 31, 0x171C00u);
    ctx->pc = 0x171BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171BF8u;
    // 0x171bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717F8u, 0x171BF8u, 0x171C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C00u;
label_171c00:
    // 0x171c00: 0x5456ff99  bnel        $v0, $s6, . + 4 + (-0x67 << 2)
    ctx->pc = 0x171C00u;
    {
        const bool branch_taken_0x171c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x171c00) {
            ctx->pc = 0x171C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171C00u;
            // 0x171c04: 0x3c150041  lui         $s5, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171A68u;
            return;
        }
    }
    ctx->pc = 0x171C08u;
    // 0x171c08: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x171c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x171c0c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x171c0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x171c10: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x171C10u;
    SET_GPR_U32(ctx, 31, 0x171C18u);
    ctx->pc = 0x171C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C10u;
    // 0x171c14: 0x248476d8  addiu       $a0, $a0, 0x76D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x171C10u, 0x171C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C18u;
}
