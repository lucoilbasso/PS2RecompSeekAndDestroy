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

// Function: caseD_8
// Address: 0x12fdf8 - 0x12fe10
void caseD_8_0x12fdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x12fdf8");
#endif

    switch (ctx->pc) {
        case 0x12fe08u: goto label_12fe08;
        default: break;
    }

    ctx->pc = 0x12fdf8u;

    // 0x12fdf8: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fdfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fdfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe00: 0xc04813e  jal         func_1204F8
    ctx->pc = 0x12FE00u;
    SET_GPR_U32(ctx, 31, 0x12FE08u);
    ctx->pc = 0x12FE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE00u;
    // 0x12fe04: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1204F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1204F8u, 0x12FE00u, 0x12FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE08u;
label_12fe08:
    // 0x12fe08: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x12FE08u;
    {
        const bool branch_taken_0x12fe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE08u;
        // 0x12fe0c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe08) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FE10u;
}
