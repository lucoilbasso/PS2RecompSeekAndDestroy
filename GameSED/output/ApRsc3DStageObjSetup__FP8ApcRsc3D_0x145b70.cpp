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

// Function: ApRsc3DStageObjSetup__FP8ApcRsc3D
// Address: 0x145b70 - 0x145ba0
void ApRsc3DStageObjSetup__FP8ApcRsc3D_0x145b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DStageObjSetup__FP8ApcRsc3D_0x145b70");
#endif

    switch (ctx->pc) {
        case 0x145b94u: goto label_145b94;
        default: break;
    }

    ctx->pc = 0x145b70u;

    // 0x145b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145b74: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x145b74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145b7c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x145b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x145b80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145B80u;
    {
        const bool branch_taken_0x145b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B80u;
        // 0x145b84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b80) {
            ctx->pc = 0x145B94u;
            goto label_145b94;
        }
    }
    ctx->pc = 0x145B88u;
    // 0x145b88: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x145b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x145b8c: 0xc05fe36  jal         func_17F8D8
    ctx->pc = 0x145B8Cu;
    SET_GPR_U32(ctx, 31, 0x145B94u);
    ctx->pc = 0x145B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B8Cu;
    // 0x145b90: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F8D8u, 0x145B8Cu, 0x145B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B94u;
label_145b94:
    // 0x145b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145b98: 0x3e00008  jr          $ra
    ctx->pc = 0x145B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B98u;
        // 0x145b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145BA0u;
}
