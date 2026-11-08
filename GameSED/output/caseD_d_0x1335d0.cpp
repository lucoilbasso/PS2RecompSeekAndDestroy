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

// Function: caseD_d
// Address: 0x1335d0 - 0x1335f4
void caseD_d_0x1335d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x1335d0");
#endif

    switch (ctx->pc) {
        case 0x1335f0u: goto label_1335f0;
        default: break;
    }

    ctx->pc = 0x1335d0u;

    // 0x1335d0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1335d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1335d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1335d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1335d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1335d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1335dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1335dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1335e0: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1335E0u;
    {
        const bool branch_taken_0x1335e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1335E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335E0u;
        // 0x1335e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335e0) {
            ctx->pc = 0x1335F4u;
            return;
        }
    }
    ctx->pc = 0x1335E8u;
    // 0x1335e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1335E8u;
    SET_GPR_U32(ctx, 31, 0x1335F0u);
    ctx->pc = 0x1335ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1335E8u;
    // 0x1335ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1335E8u, 0x1335F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335F0u;
label_1335f0:
    // 0x1335f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1335f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1335f4u;
}
