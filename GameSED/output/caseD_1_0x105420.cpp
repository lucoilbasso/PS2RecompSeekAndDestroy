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
// Address: 0x105420 - 0x105448
void caseD_1_0x105420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x105420");
#endif

    switch (ctx->pc) {
        case 0x10543cu: goto label_10543c;
        default: break;
    }

    ctx->pc = 0x105420u;

    // 0x105420: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x105420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x105424: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x105424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x105428: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10542c: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10542Cu;
    {
        const bool branch_taken_0x10542c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10542c) {
            ctx->pc = 0x105430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10542Cu;
            // 0x105430: 0x8f8288c8  lw          $v0, -0x7738($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105448u;
            return;
        }
    }
    ctx->pc = 0x105434u;
    // 0x105434: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x105434u;
    SET_GPR_U32(ctx, 31, 0x10543Cu);
    ctx->pc = 0x105438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105434u;
    // 0x105438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x105434u, 0x10543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10543Cu;
label_10543c:
    // 0x10543c: 0x8f8388c8  lw          $v1, -0x7738($gp)
    ctx->pc = 0x10543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936776)));
    // 0x105440: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x105440u;
    {
        const bool branch_taken_0x105440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105440u;
        // 0x105444: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105440) {
            ctx->pc = 0x10579Cu;
            return;
        }
    }
    ctx->pc = 0x105448u;
}
