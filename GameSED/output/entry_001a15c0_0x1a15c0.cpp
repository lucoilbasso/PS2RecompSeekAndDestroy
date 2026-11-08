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

// Function: entry_001a15c0
// Address: 0x1a15c0 - 0x1a15e8
void entry_001a15c0_0x1a15c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a15c0_0x1a15c0");
#endif

    switch (ctx->pc) {
        case 0x1a15c8u: goto label_1a15c8;
        case 0x1a15e4u: goto label_1a15e4;
        default: break;
    }

    ctx->pc = 0x1a15c0u;

    // 0x1a15c0: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x1A15C0u;
    SET_GPR_U32(ctx, 31, 0x1A15C8u);
    ctx->pc = 0x1A15C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15C0u;
    // 0x1a15c4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1A15C0u, 0x1A15C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15C8u;
label_1a15c8:
    // 0x1a15c8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A15C8u;
    {
        const bool branch_taken_0x1a15c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a15c8) {
            ctx->pc = 0x1A15CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A15C8u;
            // 0x1a15cc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A15E8u;
            return;
        }
    }
    ctx->pc = 0x1A15D0u;
    // 0x1a15d0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a15d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a15d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a15d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a15d8: 0x24a590d0  addiu       $a1, $a1, -0x6F30
    ctx->pc = 0x1a15d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938832));
    // 0x1a15dc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A15DCu;
    SET_GPR_U32(ctx, 31, 0x1A15E4u);
    ctx->pc = 0x1A15E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A15DCu;
    // 0x1a15e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A15DCu, 0x1A15E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A15E4u;
label_1a15e4:
    // 0x1a15e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1a15e8u;
}
