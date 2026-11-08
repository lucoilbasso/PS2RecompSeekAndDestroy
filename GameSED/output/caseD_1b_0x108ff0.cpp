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

// Function: caseD_1b
// Address: 0x108ff0 - 0x109018
void caseD_1b_0x108ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1b_0x108ff0");
#endif

    switch (ctx->pc) {
        case 0x10900cu: goto label_10900c;
        default: break;
    }

    ctx->pc = 0x108ff0u;

    // 0x108ff0: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x108ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x108ff4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108FF4u;
    {
        const bool branch_taken_0x108ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FF4u;
        // 0x108ff8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ff4) {
            ctx->pc = 0x109018u;
            return;
        }
    }
    ctx->pc = 0x108FFCu;
    // 0x108ffc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109000: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x109000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x109004: 0xc042170  jal         func_1085C0
    ctx->pc = 0x109004u;
    SET_GPR_U32(ctx, 31, 0x10900Cu);
    ctx->pc = 0x109008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109004u;
    // 0x109008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x109004u, 0x10900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10900Cu;
label_10900c:
    // 0x10900c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10900Cu;
    {
        const bool branch_taken_0x10900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10900c) {
            ctx->pc = 0x109030u;
            return;
        }
    }
    ctx->pc = 0x109014u;
    // 0x109014: 0x0  nop
    ctx->pc = 0x109014u;
    // NOP
    ctx->pc = 0x109018u;
}
