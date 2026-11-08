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

// Function: entry_00183558
// Address: 0x183558 - 0x183590
void entry_00183558_0x183558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183558_0x183558");
#endif

    switch (ctx->pc) {
        case 0x183574u: goto label_183574;
        default: break;
    }

    ctx->pc = 0x183558u;

label_183558:
    // 0x183558: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x183558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18355c: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x18355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x183560: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x183560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x183564: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x183564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183568: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x183568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18356c: 0xc060e0c  jal         func_183830
    ctx->pc = 0x18356Cu;
    SET_GPR_U32(ctx, 31, 0x183574u);
    ctx->pc = 0x183570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18356Cu;
    // 0x183570: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183830u, 0x18356Cu, 0x183574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183574u;
label_183574:
    // 0x183574: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x183574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x183578: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x183578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18357c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18357Cu;
    {
        const bool branch_taken_0x18357c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18357Cu;
        // 0x183580: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18357c) {
            ctx->pc = 0x183558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183558;
        }
    }
    ctx->pc = 0x183584u;
    // 0x183584: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x183584u;
    {
        const bool branch_taken_0x183584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183584u;
        // 0x183588: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183584) {
            ctx->pc = 0x18359Cu;
            return;
        }
    }
    ctx->pc = 0x18358Cu;
    // 0x18358c: 0x0  nop
    ctx->pc = 0x18358cu;
    // NOP
    ctx->pc = 0x183590u;
}
