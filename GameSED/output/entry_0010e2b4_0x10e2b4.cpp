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

// Function: entry_0010e2b4
// Address: 0x10e2b4 - 0x10e2d8
void entry_0010e2b4_0x10e2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e2b4_0x10e2b4");
#endif

    ctx->pc = 0x10e2b4u;

label_10e2b4:
    // 0x10e2b4: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x10e2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_10e2b8:
    // 0x10e2b8: 0x5040008b  beql        $v0, $zero, . + 4 + (0x8B << 2)
label_10e2bc:
    if (ctx->pc == 0x10E2BCu) {
        ctx->pc = 0x10E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2B8u;
        // 0x10e2bc: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2C0u;
        goto label_10e2c0;
    }
    ctx->pc = 0x10E2B8u;
    {
        const bool branch_taken_0x10e2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e2b8) {
            ctx->pc = 0x10E2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E2B8u;
            // 0x10e2bc: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E4E8u;
            return;
        }
    }
    ctx->pc = 0x10E2C0u;
label_10e2c0:
    // 0x10e2c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10e2c4:
    // 0x10e2c4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x10e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_10e2c8:
    // 0x10e2c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e2cc:
    // 0x10e2cc: 0x8c633d20  lw          $v1, 0x3D20($v1)
    ctx->pc = 0x10e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15648)));
label_10e2d0:
    // 0x10e2d0: 0x600008  jr          $v1
label_10e2d4:
    if (ctx->pc == 0x10E2D4u) {
        ctx->pc = 0x10E2D8u;
        goto label_fallthrough_0x10e2d0;
    }
    ctx->pc = 0x10E2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E2D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x10e2d0:
    ctx->pc = 0x10E2D8u;
}
