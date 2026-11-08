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

// Function: WModelMakePresetPacket__FP13WModelPackage
// Address: 0x17fb08 - 0x17fb48
void WModelMakePresetPacket__FP13WModelPackage_0x17fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelMakePresetPacket__FP13WModelPackage_0x17fb08");
#endif

    switch (ctx->pc) {
        case 0x17fb30u: goto label_17fb30;
        default: break;
    }

    ctx->pc = 0x17fb08u;

    // 0x17fb08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17fb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17fb0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17fb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fb10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17fb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17fb18: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x17fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17fb1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17fb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17fb20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FB20u;
    {
        const bool branch_taken_0x17fb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB20u;
        // 0x17fb24: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb20) {
            ctx->pc = 0x17FB38u;
            goto label_17fb38;
        }
    }
    ctx->pc = 0x17FB28u;
    // 0x17fb28: 0xc05fc52  jal         func_17F148
    ctx->pc = 0x17FB28u;
    SET_GPR_U32(ctx, 31, 0x17FB30u);
    ctx->pc = 0x17FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB28u;
    // 0x17fb2c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F148u, 0x17FB28u, 0x17FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB30u;
label_17fb30:
    // 0x17fb30: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x17fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x17fb34: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x17fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17fb38:
    // 0x17fb38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17fb38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fb3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17fb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17fb40: 0x3e00008  jr          $ra
    ctx->pc = 0x17FB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB40u;
        // 0x17fb44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FB48u;
}
