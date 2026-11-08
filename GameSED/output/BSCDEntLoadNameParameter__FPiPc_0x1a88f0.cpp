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

// Function: BSCDEntLoadNameParameter__FPiPc
// Address: 0x1a88f0 - 0x1a8940
void BSCDEntLoadNameParameter__FPiPc_0x1a88f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntLoadNameParameter__FPiPc_0x1a88f0");
#endif

    switch (ctx->pc) {
        case 0x1a8908u: goto label_1a8908;
        default: break;
    }

    ctx->pc = 0x1a88f0u;

    // 0x1a88f0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a88f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a88f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88f8: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x1a88f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a88fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A88FCu;
    {
        const bool branch_taken_0x1a88fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88FCu;
        // 0x1a8900: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88fc) {
            ctx->pc = 0x1A8930u;
            goto label_1a8930;
        }
    }
    ctx->pc = 0x1A8904u;
    // 0x1a8904: 0x0  nop
    ctx->pc = 0x1a8904u;
    // NOP
label_1a8908:
    // 0x1a8908: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1a8908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a890c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a890cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a8910: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x1a8910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a8914: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1a8914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a8918: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1a8918u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a891c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a891cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a8920: 0x48380a  movz        $a3, $v0, $t0
    ctx->pc = 0x1a8920u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1a8924: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1a8924u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a8928: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A8928u;
    {
        const bool branch_taken_0x1a8928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8928u;
        // 0x1a892c: 0x30880003  andi        $t0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8928) {
            ctx->pc = 0x1A8908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8908;
        }
    }
    ctx->pc = 0x1A8930u;
label_1a8930:
    // 0x1a8930: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x1a8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a8934: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1a8934u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8938: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8938u;
        // 0x1a893c: 0xe8100b  movn        $v0, $a3, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8940u;
}
