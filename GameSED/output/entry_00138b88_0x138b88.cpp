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

// Function: entry_00138b88
// Address: 0x138b88 - 0x138bb0
void entry_00138b88_0x138b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b88_0x138b88");
#endif

    switch (ctx->pc) {
        case 0x138bacu: goto label_138bac;
        default: break;
    }

    ctx->pc = 0x138b88u;

    // 0x138b88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x138b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x138b8c: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x138b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x138b90: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x138b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x138b94: 0x8cb00040  lw          $s0, 0x40($a1)
    ctx->pc = 0x138b94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x138b98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x138b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138b9c: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x138B9Cu;
    {
        const bool branch_taken_0x138b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x138BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B9Cu;
        // 0x138ba0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b9c) {
            ctx->pc = 0x138BB0u;
            return;
        }
    }
    ctx->pc = 0x138BA4u;
    // 0x138ba4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x138BA4u;
    SET_GPR_U32(ctx, 31, 0x138BACu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x138BA4u, 0x138BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BACu;
label_138bac:
    // 0x138bac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x138bacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138bb0u;
}
