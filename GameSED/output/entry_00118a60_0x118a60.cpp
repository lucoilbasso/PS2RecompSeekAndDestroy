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

// Function: entry_00118a60
// Address: 0x118a60 - 0x118a88
void entry_00118a60_0x118a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118a60_0x118a60");
#endif

    switch (ctx->pc) {
        case 0x118a6cu: goto label_118a6c;
        default: break;
    }

    ctx->pc = 0x118a60u;

label_118a60:
    // 0x118a60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x118a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a64: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x118A64u;
    SET_GPR_U32(ctx, 31, 0x118A6Cu);
    ctx->pc = 0x118A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A64u;
    // 0x118a68: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x118A64u, 0x118A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A6Cu;
label_118a6c:
    // 0x118a6c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x118a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x118a70: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x118a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x118a74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x118a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x118a78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118a7c: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x118a7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x118a80: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x118A80u;
    {
        const bool branch_taken_0x118a80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x118A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A80u;
        // 0x118a84: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a80) {
            ctx->pc = 0x118A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118a60;
        }
    }
    ctx->pc = 0x118A88u;
}
