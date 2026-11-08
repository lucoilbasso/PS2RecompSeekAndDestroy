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
// Address: 0x12fdb0 - 0x12fdc8
void caseD_5_0x12fdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x12fdb0");
#endif

    switch (ctx->pc) {
        case 0x12fdc0u: goto label_12fdc0;
        default: break;
    }

    ctx->pc = 0x12fdb0u;

    // 0x12fdb0: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fdb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fdb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdb8: 0xc047f0e  jal         func_11FC38
    ctx->pc = 0x12FDB8u;
    SET_GPR_U32(ctx, 31, 0x12FDC0u);
    ctx->pc = 0x12FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDB8u;
    // 0x12fdbc: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FC38u, 0x12FDB8u, 0x12FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDC0u;
label_12fdc0:
    // 0x12fdc0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x12FDC0u;
    {
        const bool branch_taken_0x12fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDC0u;
        // 0x12fdc4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdc0) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FDC8u;
}
