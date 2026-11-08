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

// Function: entry_00177be0
// Address: 0x177be0 - 0x177c0c
void entry_00177be0_0x177be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177be0_0x177be0");
#endif

    switch (ctx->pc) {
        case 0x177be8u: goto label_177be8;
        case 0x177c08u: goto label_177c08;
        default: break;
    }

    ctx->pc = 0x177be0u;

    // 0x177be0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x177BE0u;
    SET_GPR_U32(ctx, 31, 0x177BE8u);
    ctx->pc = 0x177BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177BE0u;
    // 0x177be4: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x177BE0u, 0x177BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BE8u;
label_177be8:
    // 0x177be8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x177be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bf0: 0x2686e820  addiu       $a2, $s4, -0x17E0
    ctx->pc = 0x177bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961184));
    // 0x177bf4: 0xaf808cb0  sw          $zero, -0x7350($gp)
    ctx->pc = 0x177bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 0));
    // 0x177bf8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177BF8u;
    {
        const bool branch_taken_0x177bf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x177bf8) {
            ctx->pc = 0x177C0Cu;
            return;
        }
    }
    ctx->pc = 0x177C00u;
    // 0x177c00: 0xc05dd52  jal         func_177548
    ctx->pc = 0x177C00u;
    SET_GPR_U32(ctx, 31, 0x177C08u);
    ctx->pc = 0x177548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177548u, 0x177C00u, 0x177C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C08u;
label_177c08:
    // 0x177c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177c0cu;
}
