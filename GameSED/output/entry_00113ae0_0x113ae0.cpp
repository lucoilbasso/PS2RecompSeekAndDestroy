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

// Function: entry_00113ae0
// Address: 0x113ae0 - 0x113b30
void entry_00113ae0_0x113ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113ae0_0x113ae0");
#endif

    switch (ctx->pc) {
        case 0x113ae8u: goto label_113ae8;
        case 0x113afcu: goto label_113afc;
        case 0x113b10u: goto label_113b10;
        default: break;
    }

    ctx->pc = 0x113ae0u;

    // 0x113ae0: 0xc066666  jal         func_199998
    ctx->pc = 0x113AE0u;
    SET_GPR_U32(ctx, 31, 0x113AE8u);
    ctx->pc = 0x199998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199998u, 0x113AE0u, 0x113AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AE8u;
label_113ae8:
    // 0x113ae8: 0x264300f0  addiu       $v1, $s2, 0xF0
    ctx->pc = 0x113ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x113aec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x113aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113af0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113af4: 0xc06222a  jal         func_1888A8
    ctx->pc = 0x113AF4u;
    SET_GPR_U32(ctx, 31, 0x113AFCu);
    ctx->pc = 0x113AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113AF4u;
    // 0x113af8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888A8u, 0x113AF4u, 0x113AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AFCu;
label_113afc:
    // 0x113afc: 0x264300f8  addiu       $v1, $s2, 0xF8
    ctx->pc = 0x113afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 248));
    // 0x113b00: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x113b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113b04: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x113b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x113b08: 0xc061984  jal         func_186610
    ctx->pc = 0x113B08u;
    SET_GPR_U32(ctx, 31, 0x113B10u);
    ctx->pc = 0x113B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B08u;
    // 0x113b0c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186610u, 0x113B08u, 0x113B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B10u;
label_113b10:
    // 0x113b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113b14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113b18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x113b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113b1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x113b1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113b20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x113b20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113b24: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x113b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x113b28: 0x3e00008  jr          $ra
    ctx->pc = 0x113B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B28u;
        // 0x113b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113B30u;
}
