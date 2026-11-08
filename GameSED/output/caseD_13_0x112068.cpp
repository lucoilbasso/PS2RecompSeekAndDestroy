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

// Function: caseD_13
// Address: 0x112068 - 0x1120a0
void caseD_13_0x112068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x112068");
#endif

    switch (ctx->pc) {
        case 0x112070u: goto label_112070;
        default: break;
    }

    ctx->pc = 0x112068u;

    // 0x112068: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x112068u;
    SET_GPR_U32(ctx, 31, 0x112070u);
    ctx->pc = 0x11206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112068u;
    // 0x11206c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x112068u, 0x112070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112070u;
label_112070:
    // 0x112070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112074: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x112074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x112078: 0x8c503630  lw          $s0, 0x3630($v0)
    ctx->pc = 0x112078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x11207c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11207Cu;
    {
        const bool branch_taken_0x11207c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x112080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11207Cu;
        // 0x112080: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11207c) {
            ctx->pc = 0x1120A0u;
            return;
        }
    }
    ctx->pc = 0x112084u;
    // 0x112084: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x112084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x112088: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x112088u;
    {
        const bool branch_taken_0x112088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112088) {
            ctx->pc = 0x11208Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112088u;
            // 0x11208c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1120A4u;
            return;
        }
    }
    ctx->pc = 0x112090u;
    // 0x112090: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x112090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x112094: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x112094u;
    {
        const bool branch_taken_0x112094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112094) {
            ctx->pc = 0x112098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112094u;
            // 0x112098: 0x8e0201ac  lw          $v0, 0x1AC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1120B4u;
            return;
        }
    }
    ctx->pc = 0x11209Cu;
    // 0x11209c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11209cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1120a0u;
}
