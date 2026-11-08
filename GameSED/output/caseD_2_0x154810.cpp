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

// Function: caseD_2
// Address: 0x154810 - 0x154848
void caseD_2_0x154810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x154810");
#endif

    switch (ctx->pc) {
        case 0x154818u: goto label_154818;
        default: break;
    }

    ctx->pc = 0x154810u;

    // 0x154810: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154810u;
    SET_GPR_U32(ctx, 31, 0x154818u);
    ctx->pc = 0x154814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154810u;
    // 0x154814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154810u, 0x154818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154818u;
label_154818:
    // 0x154818: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x154818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x15481c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15481cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154820: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x154820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154824: 0x24651180  addiu       $a1, $v1, 0x1180
    ctx->pc = 0x154824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4480));
    // 0x154828: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x154828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15482c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x154830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x154830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154834: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x154834u;
    {
        const bool branch_taken_0x154834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x154838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154834u;
        // 0x154838: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154834) {
            ctx->pc = 0x154848u;
            return;
        }
    }
    ctx->pc = 0x15483Cu;
    // 0x15483c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15483Cu;
    {
        const bool branch_taken_0x15483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15483Cu;
        // 0x154840: 0xacb10028  sw          $s1, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15483c) {
            ctx->pc = 0x15484Cu;
            return;
        }
    }
    ctx->pc = 0x154844u;
    // 0x154844: 0x0  nop
    ctx->pc = 0x154844u;
    // NOP
    ctx->pc = 0x154848u;
}
