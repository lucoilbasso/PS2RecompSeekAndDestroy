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

// Function: Val_Time2Str__FP7TimeStr
// Address: 0x19cae0 - 0x19cb78
void Val_Time2Str__FP7TimeStr_0x19cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Val_Time2Str__FP7TimeStr_0x19cae0");
#endif

    switch (ctx->pc) {
        case 0x19cb08u: goto label_19cb08;
        default: break;
    }

    ctx->pc = 0x19cae0u;

    // 0x19cae0: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19cae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19cae4: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x19cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x19cae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19caec: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x19caecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19caf0: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x19caf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19caf4: 0x2408003a  addiu       $t0, $zero, 0x3A
    ctx->pc = 0x19caf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x19caf8: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x19caf8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19cafc: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x19cafcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19cb00: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19cb00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb04: 0x0  nop
    ctx->pc = 0x19cb04u;
    // NOP
label_19cb08:
    // 0x19cb08: 0x10c90003  beq         $a2, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CB08u;
    {
        const bool branch_taken_0x19cb08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x19CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB08u;
        // 0x19cb0c: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb08) {
            ctx->pc = 0x19CB18u;
            goto label_19cb18;
        }
    }
    ctx->pc = 0x19CB10u;
    // 0x19cb10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CB10u;
    {
        const bool branch_taken_0x19cb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB10u;
        // 0x19cb14: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb10) {
            ctx->pc = 0x19CB20u;
            goto label_19cb20;
        }
    }
    ctx->pc = 0x19CB18u;
label_19cb18:
    // 0x19cb18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19cb18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb1c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19cb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19cb20:
    // 0x19cb20: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19CB20u;
    {
        const bool branch_taken_0x19cb20 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB20u;
        // 0x19cb24: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb20) {
            ctx->pc = 0x19CB38u;
            goto label_19cb38;
        }
    }
    ctx->pc = 0x19CB28u;
    // 0x19cb28: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19cb2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19CB2Cu;
    {
        const bool branch_taken_0x19cb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB2Cu;
        // 0x19cb30: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb2c) {
            ctx->pc = 0x19CB3Cu;
            goto label_19cb3c;
        }
    }
    ctx->pc = 0x19CB34u;
    // 0x19cb34: 0x0  nop
    ctx->pc = 0x19cb34u;
    // NOP
label_19cb38:
    // 0x19cb38: 0xa0ad0000  sb          $t5, 0x0($a1)
    ctx->pc = 0x19cb38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 13));
label_19cb3c:
    // 0x19cb3c: 0x50c90006  beql        $a2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CB3Cu;
    {
        const bool branch_taken_0x19cb3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x19cb3c) {
            ctx->pc = 0x19CB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CB3Cu;
            // 0x19cb40: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CB58u;
            goto label_19cb58;
        }
    }
    ctx->pc = 0x19CB44u;
    // 0x19cb44: 0x50cc0004  beql        $a2, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CB44u;
    {
        const bool branch_taken_0x19cb44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 12));
        if (branch_taken_0x19cb44) {
            ctx->pc = 0x19CB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CB44u;
            // 0x19cb48: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CB58u;
            goto label_19cb58;
        }
    }
    ctx->pc = 0x19CB4Cu;
    // 0x19cb4c: 0x54cb0004  bnel        $a2, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19CB4Cu;
    {
        const bool branch_taken_0x19cb4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        if (branch_taken_0x19cb4c) {
            ctx->pc = 0x19CB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CB4Cu;
            // 0x19cb50: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CB60u;
            goto label_19cb60;
        }
    }
    ctx->pc = 0x19CB54u;
    // 0x19cb54: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x19cb54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
label_19cb58:
    // 0x19cb58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19cb5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19cb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19cb60:
    // 0x19cb60: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x19cb60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x19cb64: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x19CB64u;
    {
        const bool branch_taken_0x19cb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB64u;
        // 0x19cb68: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb64) {
            ctx->pc = 0x19CB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cb08;
        }
    }
    ctx->pc = 0x19CB6Cu;
    // 0x19cb6c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19cb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19cb70: 0x3e00008  jr          $ra
    ctx->pc = 0x19CB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB70u;
        // 0x19cb74: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CB78u;
}
