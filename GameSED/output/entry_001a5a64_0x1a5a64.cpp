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

// Function: entry_001a5a64
// Address: 0x1a5a64 - 0x1a5aa0
void entry_001a5a64_0x1a5a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5a64_0x1a5a64");
#endif

    switch (ctx->pc) {
        case 0x1a5a8cu: goto label_1a5a8c;
        default: break;
    }

    ctx->pc = 0x1a5a64u;

    // 0x1a5a64: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A5A64u;
    {
        const bool branch_taken_0x1a5a64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A64u;
        // 0x1a5a68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a64) {
            ctx->pc = 0x1A5AA4u;
            return;
        }
    }
    ctx->pc = 0x1A5A6Cu;
    // 0x1a5a6c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1a5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5a70: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1a5a70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1a5a74: 0x34c6fe00  ori         $a2, $a2, 0xFE00
    ctx->pc = 0x1a5a74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65024);
    // 0x1a5a78: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a5a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a5a7c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1a5a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5a80: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1a5a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a5a84: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A5A84u;
    SET_GPR_U32(ctx, 31, 0x1A5A8Cu);
    ctx->pc = 0x1A5A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A84u;
    // 0x1a5a88: 0x248493f0  addiu       $a0, $a0, -0x6C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A5A84u, 0x1A5A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A8Cu;
label_1a5a8c:
    // 0x1a5a8c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a5a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a5a90: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1a5a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1a5a94: 0x24a59410  addiu       $a1, $a1, -0x6BF0
    ctx->pc = 0x1a5a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939664));
    // 0x1a5a98: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A5A98u;
    SET_GPR_U32(ctx, 31, 0x1A5AA0u);
    ctx->pc = 0x1A5A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A98u;
    // 0x1a5a9c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A5A98u, 0x1A5AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5AA0u;
}
