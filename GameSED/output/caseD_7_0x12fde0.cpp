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

// Function: caseD_7
// Address: 0x12fde0 - 0x12fdf8
void caseD_7_0x12fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x12fde0");
#endif

    switch (ctx->pc) {
        case 0x12fdf0u: goto label_12fdf0;
        default: break;
    }

    ctx->pc = 0x12fde0u;

    // 0x12fde0: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fde4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fde4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fde8: 0xc04804c  jal         func_120130
    ctx->pc = 0x12FDE8u;
    SET_GPR_U32(ctx, 31, 0x12FDF0u);
    ctx->pc = 0x12FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDE8u;
    // 0x12fdec: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120130u, 0x12FDE8u, 0x12FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDF0u;
label_12fdf0:
    // 0x12fdf0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x12FDF0u;
    {
        const bool branch_taken_0x12fdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDF0u;
        // 0x12fdf4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdf0) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FDF8u;
}
