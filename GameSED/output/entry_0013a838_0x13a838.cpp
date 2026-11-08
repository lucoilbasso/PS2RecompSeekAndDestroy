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

// Function: entry_0013a838
// Address: 0x13a838 - 0x13a86c
void entry_0013a838_0x13a838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a838_0x13a838");
#endif

    switch (ctx->pc) {
        case 0x13a85cu: goto label_13a85c;
        default: break;
    }

    ctx->pc = 0x13a838u;

label_13a838:
    // 0x13a838: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x13a838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x13a83c: 0x8ea201b4  lw          $v0, 0x1B4($s5)
    ctx->pc = 0x13a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
    // 0x13a840: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a844: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a848: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13a848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13a84c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13a850: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13a850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a854: 0xc04e9f2  jal         func_13A7C8
    ctx->pc = 0x13A854u;
    SET_GPR_U32(ctx, 31, 0x13A85Cu);
    ctx->pc = 0x13A858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A854u;
    // 0x13a858: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7C8u, 0x13A854u, 0x13A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A85Cu;
label_13a85c:
    // 0x13a85c: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x13a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x13a860: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13a860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13a864: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x13A864u;
    {
        const bool branch_taken_0x13a864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a864) {
            ctx->pc = 0x13A868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A864u;
            // 0x13a868: 0x8e2301b4  lw          $v1, 0x1B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a838;
        }
    }
    ctx->pc = 0x13A86Cu;
}
