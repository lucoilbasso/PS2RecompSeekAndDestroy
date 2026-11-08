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

// Function: line2bmp__FPUi
// Address: 0x106c70 - 0x106cf4
void line2bmp__FPUi_0x106c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("line2bmp__FPUi_0x106c70");
#endif

    switch (ctx->pc) {
        case 0x106c80u: goto label_106c80;
        default: break;
    }

    ctx->pc = 0x106c70u;

    // 0x106c70: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x106c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c74: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x106c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x106c78: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x106c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c7c: 0x240901ff  addiu       $t1, $zero, 0x1FF
    ctx->pc = 0x106c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_106c80:
    // 0x106c80: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x106c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x106c84: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x106c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x106c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x106c8c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x106c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x106c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106c94: 0x704810e8  pminw       $v0, $v0, $t0
    ctx->pc = 0x106c94u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x106c98: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x106c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x106c9c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x106c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x106ca0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x106ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ca4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x106ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x106ca8: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x106ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x106cac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x106cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x106cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106cb4: 0x704810e8  pminw       $v0, $v0, $t0
    ctx->pc = 0x106cb4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x106cb8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x106cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x106cbc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x106cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x106cc0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x106cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106cc4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x106cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x106cc8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x106cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x106ccc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x106cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x106cd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106cd4: 0x704810e8  pminw       $v0, $v0, $t0
    ctx->pc = 0x106cd4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x106cd8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x106cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x106cdc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x106cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x106ce0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x106ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x106ce4: 0x521ffe6  bgez        $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x106CE4u;
    {
        const bool branch_taken_0x106ce4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x106CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CE4u;
        // 0x106ce8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ce4) {
            ctx->pc = 0x106C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106c80;
        }
    }
    ctx->pc = 0x106CECu;
    // 0x106cec: 0x3e00008  jr          $ra
    ctx->pc = 0x106CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106CF4u;
}
