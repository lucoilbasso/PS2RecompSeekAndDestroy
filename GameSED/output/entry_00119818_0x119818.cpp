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

// Function: entry_00119818
// Address: 0x119818 - 0x119838
void entry_00119818_0x119818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119818_0x119818");
#endif

    switch (ctx->pc) {
        case 0x119834u: goto label_119834;
        default: break;
    }

    ctx->pc = 0x119818u;

    // 0x119818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11981c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x11981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x119820: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119824: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119824u;
    {
        const bool branch_taken_0x119824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x119828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119824u;
        // 0x119828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119824) {
            ctx->pc = 0x119838u;
            return;
        }
    }
    ctx->pc = 0x11982Cu;
    // 0x11982c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11982Cu;
    SET_GPR_U32(ctx, 31, 0x119834u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11982Cu, 0x119834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119834u;
label_119834:
    // 0x119834: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x119834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119838u;
}
