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

// Function: WModelPresetPacketChangeColor__FP18WModelPresetPacketP5PBHDRP7Color32
// Address: 0x17fa58 - 0x17fb08
void WModelPresetPacketChangeColor__FP18WModelPresetPacketP5PBHDRP7Color32_0x17fa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelPresetPacketChangeColor__FP18WModelPresetPacketP5PBHDRP7Color32_0x17fa58");
#endif

    switch (ctx->pc) {
        case 0x17fa78u: goto label_17fa78;
        case 0x17fa98u: goto label_17fa98;
        default: break;
    }

    ctx->pc = 0x17fa58u;

    // 0x17fa58: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x17fa58u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa5c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x17fa5cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa60: 0x8d830010  lw          $v1, 0x10($t4)
    ctx->pc = 0x17fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x17fa64: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17fa64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa68: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fa6c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x17FA6Cu;
    {
        const bool branch_taken_0x17fa6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA6Cu;
        // 0x17fa70: 0x1a23821  addu        $a3, $t5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa6c) {
            ctx->pc = 0x17FB00u;
            goto label_17fb00;
        }
    }
    ctx->pc = 0x17FA74u;
    // 0x17fa74: 0x8d82001c  lw          $v0, 0x1C($t4)
    ctx->pc = 0x17fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
label_17fa78:
    // 0x17fa78: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x17fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x17fa7c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17fa7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x17fa80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17fa80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17fa88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17fa8c: 0x8c8a000c  lw          $t2, 0xC($a0)
    ctx->pc = 0x17fa8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17fa90: 0x11400016  beqz        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x17FA90u;
    {
        const bool branch_taken_0x17fa90 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA90u;
        // 0x17fa94: 0x24880010  addiu       $t0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa90) {
            ctx->pc = 0x17FAECu;
            goto label_17faec;
        }
    }
    ctx->pc = 0x17FA98u;
label_17fa98:
    // 0x17fa98: 0x85040006  lh          $a0, 0x6($t0)
    ctx->pc = 0x17fa98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x17fa9c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x17fa9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x17faa0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x17faa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17faa4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17faa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17faa8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17faac: 0x12a282b  sltu        $a1, $t1, $t2
    ctx->pc = 0x17faacu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x17fab0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x17fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x17fab4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x17fab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17fab8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x17fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x17fabc: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x17fabcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x17fac0: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x17fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x17fac4: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x17fac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17fac8: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x17fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x17facc: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x17faccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x17fad0: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x17fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x17fad4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17fad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x17fad8: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x17fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17fadc: 0x91a20006  lbu         $v0, 0x6($t5)
    ctx->pc = 0x17fadcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x17fae0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x17fae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x17fae4: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17FAE4u;
    {
        const bool branch_taken_0x17fae4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAE4u;
        // 0x17fae8: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fae4) {
            ctx->pc = 0x17FA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fa98;
        }
    }
    ctx->pc = 0x17FAECu;
label_17faec:
    // 0x17faec: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x17faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x17faf0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x17faf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x17faf4: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x17faf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17faf8: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x17FAF8u;
    {
        const bool branch_taken_0x17faf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17faf8) {
            ctx->pc = 0x17FAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FAF8u;
            // 0x17fafc: 0x8d82001c  lw          $v0, 0x1C($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fa78;
        }
    }
    ctx->pc = 0x17FB00u;
label_17fb00:
    // 0x17fb00: 0x3e00008  jr          $ra
    ctx->pc = 0x17FB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FB08u;
}
