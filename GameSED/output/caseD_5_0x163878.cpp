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

// Function: caseD_5
// Address: 0x163878 - 0x163894
void caseD_5_0x163878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x163878");
#endif

    switch (ctx->pc) {
        case 0x163890u: goto label_163890;
        default: break;
    }

    ctx->pc = 0x163878u;

    // 0x163878: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x163878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16387c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x16387cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x163880: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163880u;
    {
        const bool branch_taken_0x163880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163880u;
        // 0x163884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163880) {
            ctx->pc = 0x163894u;
            return;
        }
    }
    ctx->pc = 0x163888u;
    // 0x163888: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x163888u;
    SET_GPR_U32(ctx, 31, 0x163890u);
    ctx->pc = 0x16388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163888u;
    // 0x16388c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x163888u, 0x163890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163890u;
label_163890:
    // 0x163890: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x163890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163894u;
}
