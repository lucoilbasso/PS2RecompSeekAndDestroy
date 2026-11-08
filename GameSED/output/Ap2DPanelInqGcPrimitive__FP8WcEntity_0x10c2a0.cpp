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

// Function: Ap2DPanelInqGcPrimitive__FP8WcEntity
// Address: 0x10c2a0 - 0x10c2d8
void Ap2DPanelInqGcPrimitive__FP8WcEntity_0x10c2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ap2DPanelInqGcPrimitive__FP8WcEntity_0x10c2a0");
#endif

    ctx->pc = 0x10c2a0u;

    // 0x10c2a0: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x10c2a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10c2a4: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x10c2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x10c2a8: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C2A8u;
    {
        const bool branch_taken_0x10c2a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2A8u;
        // 0x10c2ac: 0x24820150  addiu       $v0, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2a8) {
            ctx->pc = 0x10C2D0u;
            goto label_10c2d0;
        }
    }
    ctx->pc = 0x10C2B0u;
    // 0x10c2b0: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x10c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x10c2b4: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C2B4u;
    {
        const bool branch_taken_0x10c2b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2B4u;
        // 0x10c2b8: 0x24030086  addiu       $v1, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2b4) {
            ctx->pc = 0x10C2D0u;
            goto label_10c2d0;
        }
    }
    ctx->pc = 0x10C2BCu;
    // 0x10c2bc: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C2BCu;
    {
        const bool branch_taken_0x10c2bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2BCu;
        // 0x10c2c0: 0x24030046  addiu       $v1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2bc) {
            ctx->pc = 0x10C2D0u;
            goto label_10c2d0;
        }
    }
    ctx->pc = 0x10C2C4u;
    // 0x10c2c4: 0x24820150  addiu       $v0, $a0, 0x150
    ctx->pc = 0x10c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x10c2c8: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x10c2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x10c2cc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x10c2ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_10c2d0:
    // 0x10c2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10C2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C2D8u;
}
