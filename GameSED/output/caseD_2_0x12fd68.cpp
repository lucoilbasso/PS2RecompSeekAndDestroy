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

// Function: caseD_2
// Address: 0x12fd68 - 0x12fd80
void caseD_2_0x12fd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x12fd68");
#endif

    switch (ctx->pc) {
        case 0x12fd78u: goto label_12fd78;
        default: break;
    }

    ctx->pc = 0x12fd68u;

    // 0x12fd68: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fd6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fd6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd70: 0xc047cf4  jal         func_11F3D0
    ctx->pc = 0x12FD70u;
    SET_GPR_U32(ctx, 31, 0x12FD78u);
    ctx->pc = 0x12FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD70u;
    // 0x12fd74: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3D0u, 0x12FD70u, 0x12FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD78u;
label_12fd78:
    // 0x12fd78: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x12FD78u;
    {
        const bool branch_taken_0x12fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD78u;
        // 0x12fd7c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd78) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FD80u;
}
