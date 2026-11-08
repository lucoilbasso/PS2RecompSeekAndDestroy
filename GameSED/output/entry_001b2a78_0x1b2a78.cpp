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

// Function: entry_001b2a78
// Address: 0x1b2a78 - 0x1b2ab0
void entry_001b2a78_0x1b2a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2a78_0x1b2a78");
#endif

    switch (ctx->pc) {
        case 0x1b2a80u: goto label_1b2a80;
        case 0x1b2a88u: goto label_1b2a88;
        case 0x1b2a9cu: goto label_1b2a9c;
        case 0x1b2aa8u: goto label_1b2aa8;
        default: break;
    }

    ctx->pc = 0x1b2a78u;

    // 0x1b2a78: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B2A78u;
    SET_GPR_U32(ctx, 31, 0x1B2A80u);
    ctx->pc = 0x1B2A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A78u;
    // 0x1b2a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B2A78u, 0x1B2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A80u;
label_1b2a80:
    // 0x1b2a80: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B2A80u;
    SET_GPR_U32(ctx, 31, 0x1B2A88u);
    ctx->pc = 0x1B2A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A80u;
    // 0x1b2a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B2A80u, 0x1B2A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A88u;
label_1b2a88:
    // 0x1b2a88: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2a8c: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2A8Cu;
    {
        const bool branch_taken_0x1b2a8c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A8Cu;
        // 0x1b2a90: 0x3c100025  lui         $s0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a8c) {
            ctx->pc = 0x1B2AB0u;
            return;
        }
    }
    ctx->pc = 0x1B2A94u;
    // 0x1b2a94: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B2A94u;
    SET_GPR_U32(ctx, 31, 0x1B2A9Cu);
    ctx->pc = 0x1B2A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A94u;
    // 0x1b2a98: 0x8e04aa10  lw          $a0, -0x55F0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B2A94u, 0x1B2A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A9Cu;
label_1b2a9c:
    // 0x1b2a9c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1b2a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1b2aa0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B2AA0u;
    SET_GPR_U32(ctx, 31, 0x1B2AA8u);
    ctx->pc = 0x1B2AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AA0u;
    // 0x1b2aa4: 0x8e04aa10  lw          $a0, -0x55F0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B2AA0u, 0x1B2AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2AA8u;
label_1b2aa8:
    // 0x1b2aa8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B2AA8u;
    {
        const bool branch_taken_0x1b2aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2AA8u;
        // 0x1b2aac: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2aa8) {
            ctx->pc = 0x1B2ADCu;
            return;
        }
    }
    ctx->pc = 0x1B2AB0u;
}
