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

// Function: ApCameraInqMotionWork__FP7WcActor
// Address: 0x141a60 - 0x141aa8
void ApCameraInqMotionWork__FP7WcActor_0x141a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCameraInqMotionWork__FP7WcActor_0x141a60");
#endif

    switch (ctx->pc) {
        case 0x141a7cu: goto label_141a7c;
        default: break;
    }

    ctx->pc = 0x141a60u;

    // 0x141a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141a64: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x141a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x141a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141a6c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x141a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x141a70: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x141a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x141a74: 0xc061a46  jal         func_186918
    ctx->pc = 0x141A74u;
    SET_GPR_U32(ctx, 31, 0x141A7Cu);
    ctx->pc = 0x141A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A74u;
    // 0x141a78: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x141A74u, 0x141A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A7Cu;
label_141a7c:
    // 0x141a7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x141a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141a80: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x141A80u;
    {
        const bool branch_taken_0x141a80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x141A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A80u;
        // 0x141a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141a80) {
            ctx->pc = 0x141A9Cu;
            goto label_141a9c;
        }
    }
    ctx->pc = 0x141A88u;
    // 0x141a88: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x141a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x141a8c: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x141a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x141a90: 0x2463ee48  addiu       $v1, $v1, -0x11B8
    ctx->pc = 0x141a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962760));
    // 0x141a94: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x141A94u;
    {
        const bool branch_taken_0x141a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x141a94) {
            ctx->pc = 0x141A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141A94u;
            // 0x141a98: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141A9Cu;
            goto label_141a9c;
        }
    }
    ctx->pc = 0x141A9Cu;
label_141a9c:
    // 0x141a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x141AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141AA0u;
        // 0x141aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141AA8u;
}
