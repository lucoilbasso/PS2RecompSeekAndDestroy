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

// Function: caseD_1
// Address: 0x1115e0 - 0x111600
void caseD_1_0x1115e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1115e0");
#endif

    switch (ctx->pc) {
        case 0x1115f4u: goto label_1115f4;
        default: break;
    }

    ctx->pc = 0x1115e0u;

    // 0x1115e0: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1115E0u;
    {
        const bool branch_taken_0x1115e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1115E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115E0u;
        // 0x1115e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115e0) {
            ctx->pc = 0x111600u;
            return;
        }
    }
    ctx->pc = 0x1115E8u;
    // 0x1115e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1115e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115ec: 0xc0442de  jal         func_110B78
    ctx->pc = 0x1115ECu;
    SET_GPR_U32(ctx, 31, 0x1115F4u);
    ctx->pc = 0x1115F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115ECu;
    // 0x1115f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B78u, 0x1115ECu, 0x1115F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115F4u;
label_1115f4:
    // 0x1115f4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1115F4u;
    {
        const bool branch_taken_0x1115f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115F4u;
        // 0x1115f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115f4) {
            ctx->pc = 0x1117A8u;
            return;
        }
    }
    ctx->pc = 0x1115FCu;
    // 0x1115fc: 0x0  nop
    ctx->pc = 0x1115fcu;
    // NOP
    ctx->pc = 0x111600u;
}
