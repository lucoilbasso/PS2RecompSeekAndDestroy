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

// Function: entry_0011c170
// Address: 0x11c170 - 0x11c1b4
void entry_0011c170_0x11c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c170_0x11c170");
#endif

    switch (ctx->pc) {
        case 0x11c17cu: goto label_11c17c;
        case 0x11c190u: goto label_11c190;
        default: break;
    }

    ctx->pc = 0x11c170u;

label_11c170:
    // 0x11c170: 0x26840c50  addiu       $a0, $s4, 0xC50
    ctx->pc = 0x11c170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3152));
    // 0x11c174: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x11C174u;
    SET_GPR_U32(ctx, 31, 0x11C17Cu);
    ctx->pc = 0x11C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C174u;
    // 0x11c178: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x11C174u, 0x11C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C17Cu;
label_11c17c:
    // 0x11c17c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11c17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c184: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11c184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c188: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x11C188u;
    SET_GPR_U32(ctx, 31, 0x11C190u);
    ctx->pc = 0x11C18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C188u;
    // 0x11c18c: 0x244401d0  addiu       $a0, $v0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x11C188u, 0x11C190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C190u;
label_11c190:
    // 0x11c190: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x11c190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11c194: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11c194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11c198: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11c198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11c19c: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x11c19cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11c1a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11c1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11c1a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c1a8: 0x244202a  slt         $a0, $s2, $a0
    ctx->pc = 0x11c1a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11c1ac: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11C1ACu;
    {
        const bool branch_taken_0x11c1ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1ACu;
        // 0x11c1b0: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1ac) {
            ctx->pc = 0x11C170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c170;
        }
    }
    ctx->pc = 0x11C1B4u;
}
