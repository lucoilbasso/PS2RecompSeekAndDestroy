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

// Function: BSCDEntGet1Name__FP15BsSCDEntControlPc
// Address: 0x1a8e58 - 0x1a8eac
void BSCDEntGet1Name__FP15BsSCDEntControlPc_0x1a8e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGet1Name__FP15BsSCDEntControlPc_0x1a8e58");
#endif

    switch (ctx->pc) {
        case 0x1a8e70u: goto label_1a8e70;
        default: break;
    }

    ctx->pc = 0x1a8e58u;

    // 0x1a8e58: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1a8e58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a8e5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e60: 0x8d27001c  lw          $a3, 0x1C($t1)
    ctx->pc = 0x1a8e60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x1a8e64: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x1a8e64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a8e68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A8E68u;
    {
        const bool branch_taken_0x1a8e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E68u;
        // 0x1a8e6c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e68) {
            ctx->pc = 0x1A8E98u;
            goto label_1a8e98;
        }
    }
    ctx->pc = 0x1A8E70u;
label_1a8e70:
    // 0x1a8e70: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1a8e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a8e74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a8e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a8e78: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x1a8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a8e7c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1a8e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a8e80: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1a8e80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a8e84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a8e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a8e88: 0x48380a  movz        $a3, $v0, $t0
    ctx->pc = 0x1a8e88u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1a8e8c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1a8e8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a8e90: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A8E90u;
    {
        const bool branch_taken_0x1a8e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E90u;
        // 0x1a8e94: 0x30880003  andi        $t0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e90) {
            ctx->pc = 0x1A8E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8e70;
        }
    }
    ctx->pc = 0x1A8E98u;
label_1a8e98:
    // 0x1a8e98: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x1a8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a8e9c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1a8e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8ea0: 0x48380a  movz        $a3, $v0, $t0
    ctx->pc = 0x1a8ea0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1a8ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EA4u;
        // 0x1a8ea8: 0xad27001c  sw          $a3, 0x1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8EACu;
}
