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

// Function: __9ApcPtcSpl
// Address: 0x123c38 - 0x123ca4
void ps2___9ApcPtcSpl_0x123c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___9ApcPtcSpl_0x123c38");
#endif

    switch (ctx->pc) {
        case 0x123c60u: goto label_123c60;
        case 0x123c70u: goto label_123c70;
        default: break;
    }

    ctx->pc = 0x123c38u;

    // 0x123c38: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x123c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x123c3c: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x123c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    // 0x123c40: 0x2442ea30  addiu       $v0, $v0, -0x15D0
    ctx->pc = 0x123c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961712));
    // 0x123c44: 0xac80015c  sw          $zero, 0x15C($a0)
    ctx->pc = 0x123c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 0));
    // 0x123c48: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x123c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x123c4c: 0x24850170  addiu       $a1, $a0, 0x170
    ctx->pc = 0x123c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x123c50: 0xac800160  sw          $zero, 0x160($a0)
    ctx->pc = 0x123c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 0));
    // 0x123c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c58: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x123c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x123c5c: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x123c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
label_123c60:
    // 0x123c60: 0xaca00480  sw          $zero, 0x480($a1)
    ctx->pc = 0x123c60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1152), GPR_U32(ctx, 0));
    // 0x123c64: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x123c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c68: 0xaca00484  sw          $zero, 0x484($a1)
    ctx->pc = 0x123c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1156), GPR_U32(ctx, 0));
    // 0x123c6c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x123c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_123c70:
    // 0x123c70: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x123c70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x123c74: 0x24620240  addiu       $v0, $v1, 0x240
    ctx->pc = 0x123c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x123c78: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x123c78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x123c7c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x123c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x123c80: 0x0  nop
    ctx->pc = 0x123c80u;
    // NOP
    // 0x123c84: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x123C84u;
    {
        const bool branch_taken_0x123c84 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x123C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C84u;
        // 0x123c88: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c84) {
            ctx->pc = 0x123C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123c70;
        }
    }
    ctx->pc = 0x123C8Cu;
    // 0x123c8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x123c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x123c90: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x123c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x123c94: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x123C94u;
    {
        const bool branch_taken_0x123c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C94u;
        // 0x123c98: 0x24a50490  addiu       $a1, $a1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c94) {
            ctx->pc = 0x123C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123c60;
        }
    }
    ctx->pc = 0x123C9Cu;
    // 0x123c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x123C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123CA4u;
}
