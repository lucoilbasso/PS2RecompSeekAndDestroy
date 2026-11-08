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

// Function: caseD_8
// Address: 0x1116a0 - 0x1116d0
void caseD_8_0x1116a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1116a0");
#endif

    switch (ctx->pc) {
        case 0x1116a8u: goto label_1116a8;
        case 0x1116ccu: goto label_1116cc;
        default: break;
    }

    ctx->pc = 0x1116a0u;

    // 0x1116a0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1116A0u;
    SET_GPR_U32(ctx, 31, 0x1116A8u);
    ctx->pc = 0x1116A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116A0u;
    // 0x1116a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1116A0u, 0x1116A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1116A8u;
label_1116a8:
    // 0x1116a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1116a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116ac: 0x2a020080  slti        $v0, $s0, 0x80
    ctx->pc = 0x1116acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1116b0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1116B0u;
    {
        const bool branch_taken_0x1116b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1116b0) {
            ctx->pc = 0x1116B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1116B0u;
            // 0x1116b4: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1116D0u;
            return;
        }
    }
    ctx->pc = 0x1116B8u;
    // 0x1116b8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1116b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1116bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1116bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116c0: 0x24a53e50  addiu       $a1, $a1, 0x3E50
    ctx->pc = 0x1116c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15952));
    // 0x1116c4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1116C4u;
    SET_GPR_U32(ctx, 31, 0x1116CCu);
    ctx->pc = 0x1116C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116C4u;
    // 0x1116c8: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1116C4u, 0x1116CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1116CCu;
label_1116cc:
    // 0x1116cc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1116ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x1116d0u;
}
