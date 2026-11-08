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

// Function: WModelAddPresetPacketTagY__FP13WModelPackageUi
// Address: 0x17fb48 - 0x17fb88
void WModelAddPresetPacketTagY__FP13WModelPackageUi_0x17fb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelAddPresetPacketTagY__FP13WModelPackageUi_0x17fb48");
#endif

    switch (ctx->pc) {
        case 0x17fb60u: goto label_17fb60;
        default: break;
    }

    ctx->pc = 0x17fb48u;

    // 0x17fb48: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x17fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17fb4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17fb4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb50: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17FB50u;
    {
        const bool branch_taken_0x17fb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB50u;
        // 0x17fb54: 0x8c83002c  lw          $v1, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb50) {
            ctx->pc = 0x17FB80u;
            goto label_17fb80;
        }
    }
    ctx->pc = 0x17FB58u;
    // 0x17fb58: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x17fb58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x17fb5c: 0x0  nop
    ctx->pc = 0x17fb5cu;
    // NOP
label_17fb60:
    // 0x17fb60: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x17fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17fb64: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17fb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17fb68: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x17fb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x17fb6c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x17fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x17fb70: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x17fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17fb74: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x17fb74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17fb78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17FB78u;
    {
        const bool branch_taken_0x17fb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB78u;
        // 0x17fb7c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fb78) {
            ctx->pc = 0x17FB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fb60;
        }
    }
    ctx->pc = 0x17FB80u;
label_17fb80:
    // 0x17fb80: 0x3e00008  jr          $ra
    ctx->pc = 0x17FB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FB88u;
}
