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

// Function: caseD_0
// Address: 0x1115a0 - 0x1115c0
void caseD_0_0x1115a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1115a0");
#endif

    switch (ctx->pc) {
        case 0x1115b4u: goto label_1115b4;
        default: break;
    }

    ctx->pc = 0x1115a0u;

    // 0x1115a0: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1115A0u;
    {
        const bool branch_taken_0x1115a0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1115A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115A0u;
        // 0x1115a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115a0) {
            ctx->pc = 0x1115C0u;
            return;
        }
    }
    ctx->pc = 0x1115A8u;
    // 0x1115a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1115a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115ac: 0xc0442de  jal         func_110B78
    ctx->pc = 0x1115ACu;
    SET_GPR_U32(ctx, 31, 0x1115B4u);
    ctx->pc = 0x1115B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115ACu;
    // 0x1115b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B78u, 0x1115ACu, 0x1115B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115B4u;
label_1115b4:
    // 0x1115b4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1115B4u;
    {
        const bool branch_taken_0x1115b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115B4u;
        // 0x1115b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115b4) {
            ctx->pc = 0x1117A8u;
            return;
        }
    }
    ctx->pc = 0x1115BCu;
    // 0x1115bc: 0x0  nop
    ctx->pc = 0x1115bcu;
    // NOP
    ctx->pc = 0x1115c0u;
}
