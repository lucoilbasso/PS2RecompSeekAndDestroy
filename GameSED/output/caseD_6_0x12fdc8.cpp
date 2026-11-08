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

// Function: caseD_6
// Address: 0x12fdc8 - 0x12fde0
void caseD_6_0x12fdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x12fdc8");
#endif

    switch (ctx->pc) {
        case 0x12fdd8u: goto label_12fdd8;
        default: break;
    }

    ctx->pc = 0x12fdc8u;

    // 0x12fdc8: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fdcc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fdccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdd0: 0xc047f6a  jal         func_11FDA8
    ctx->pc = 0x12FDD0u;
    SET_GPR_U32(ctx, 31, 0x12FDD8u);
    ctx->pc = 0x12FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDD0u;
    // 0x12fdd4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDA8u, 0x12FDD0u, 0x12FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDD8u;
label_12fdd8:
    // 0x12fdd8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x12FDD8u;
    {
        const bool branch_taken_0x12fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FDD8u;
        // 0x12fddc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdd8) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FDE0u;
}
