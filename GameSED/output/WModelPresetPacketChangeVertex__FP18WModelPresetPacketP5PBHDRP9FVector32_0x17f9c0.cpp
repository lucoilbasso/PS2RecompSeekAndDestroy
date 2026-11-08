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

// Function: WModelPresetPacketChangeVertex__FP18WModelPresetPacketP5PBHDRP9FVector32
// Address: 0x17f9c0 - 0x17fa54
void WModelPresetPacketChangeVertex__FP18WModelPresetPacketP5PBHDRP9FVector32_0x17f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WModelPresetPacketChangeVertex__FP18WModelPresetPacketP5PBHDRP9FVector32_0x17f9c0");
#endif

    switch (ctx->pc) {
        case 0x17f9e0u: goto label_17f9e0;
        case 0x17fa08u: goto label_17fa08;
        default: break;
    }

    ctx->pc = 0x17f9c0u;

    // 0x17f9c0: 0x8cac0010  lw          $t4, 0x10($a1)
    ctx->pc = 0x17f9c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17f9c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17f9c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9c8: 0x908d0006  lbu         $t5, 0x6($a0)
    ctx->pc = 0x17f9c8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x17f9cc: 0xc1100  sll         $v0, $t4, 4
    ctx->pc = 0x17f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x17f9d0: 0x1180001e  beqz        $t4, . + 4 + (0x1E << 2)
    ctx->pc = 0x17F9D0u;
    {
        const bool branch_taken_0x17f9d0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9D0u;
        // 0x17f9d4: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9d0) {
            ctx->pc = 0x17FA4Cu;
            goto label_17fa4c;
        }
    }
    ctx->pc = 0x17F9D8u;
    // 0x17f9d8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x17f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x17f9dc: 0x0  nop
    ctx->pc = 0x17f9dcu;
    // NOP
label_17f9e0:
    // 0x17f9e0: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x17f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x17f9e4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17f9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x17f9e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f9e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f9f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f9f4: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x17f9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f9f8: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17F9F8u;
    {
        const bool branch_taken_0x17f9f8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9F8u;
        // 0x17f9fc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9f8) {
            ctx->pc = 0x17FA3Cu;
            goto label_17fa3c;
        }
    }
    ctx->pc = 0x17FA00u;
    // 0x17fa00: 0x29aa0004  slti        $t2, $t5, 0x4
    ctx->pc = 0x17fa00u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17fa04: 0x0  nop
    ctx->pc = 0x17fa04u;
    // NOP
label_17fa08:
    // 0x17fa08: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x17fa08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17fa0c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17fa0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x17fa10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fa14: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x17fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17fa18: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x17fa18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17fa1c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x17fa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x17fa20: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x17fa20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17fa24: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17fa24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17fa28: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x17fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17fa2c: 0x128182b  sltu        $v1, $t1, $t0
    ctx->pc = 0x17fa2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x17fa30: 0x4a380a  movz        $a3, $v0, $t2
    ctx->pc = 0x17fa30u;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x17fa34: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x17FA34u;
    {
        const bool branch_taken_0x17fa34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA34u;
        // 0x17fa38: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa34) {
            ctx->pc = 0x17FA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fa08;
        }
    }
    ctx->pc = 0x17FA3Cu;
label_17fa3c:
    // 0x17fa3c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x17fa3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x17fa40: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x17fa40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x17fa44: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17FA44u;
    {
        const bool branch_taken_0x17fa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fa44) {
            ctx->pc = 0x17FA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FA44u;
            // 0x17fa48: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f9e0;
        }
    }
    ctx->pc = 0x17FA4Cu;
label_17fa4c:
    // 0x17fa4c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FA54u;
}
