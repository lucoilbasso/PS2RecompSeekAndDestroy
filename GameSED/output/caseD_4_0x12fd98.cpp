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

// Function: caseD_4
// Address: 0x12fd98 - 0x12fdb0
void caseD_4_0x12fd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x12fd98");
#endif

    switch (ctx->pc) {
        case 0x12fda8u: goto label_12fda8;
        default: break;
    }

    ctx->pc = 0x12fd98u;

    // 0x12fd98: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fd9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fda0: 0xc047e50  jal         func_11F940
    ctx->pc = 0x12FDA0u;
    SET_GPR_U32(ctx, 31, 0x12FDA8u);
    ctx->pc = 0x12FDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDA0u;
    // 0x12fda4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F940u, 0x12FDA0u, 0x12FDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDA8u;
label_12fda8:
    // 0x12fda8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x12FDA8u;
    {
        const bool branch_taken_0x12fda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDA8u;
        // 0x12fdac: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fda8) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FDB0u;
}
