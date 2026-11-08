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

// Function: B_MemCpy32__FPvT0Ui
// Address: 0x19c8f8 - 0x19c97c
void B_MemCpy32__FPvT0Ui_0x19c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_MemCpy32__FPvT0Ui_0x19c8f8");
#endif

    switch (ctx->pc) {
        case 0x19c918u: goto label_19c918;
        case 0x19c958u: goto label_19c958;
        default: break;
    }

    ctx->pc = 0x19c8f8u;

    // 0x19c8f8: 0x61882  srl         $v1, $a2, 2
    ctx->pc = 0x19c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x19c8fc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19C8FCu;
    {
        const bool branch_taken_0x19c8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8FCu;
        // 0x19c900: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8fc) {
            ctx->pc = 0x19C934u;
            goto label_19c934;
        }
    }
    ctx->pc = 0x19C904u;
    // 0x19c904: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19c908: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c90c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19C90Cu;
    {
        const bool branch_taken_0x19c90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c90c) {
            ctx->pc = 0x19C910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C90Cu;
            // 0x19c910: 0x30c30003  andi        $v1, $a2, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C938u;
            goto label_19c938;
        }
    }
    ctx->pc = 0x19C914u;
    // 0x19c914: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x19c914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19c918:
    // 0x19c918: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c91c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x19c91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x19c920: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19c920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19c924: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x19c924u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x19c928: 0x0  nop
    ctx->pc = 0x19c928u;
    // NOP
    // 0x19c92c: 0x1468fffa  bne         $v1, $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C92Cu;
    {
        const bool branch_taken_0x19c92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x19C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C92Cu;
        // 0x19c930: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c92c) {
            ctx->pc = 0x19C918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c918;
        }
    }
    ctx->pc = 0x19C934u;
label_19c934:
    // 0x19c934: 0x30c30003  andi        $v1, $a2, 0x3
    ctx->pc = 0x19c934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_19c938:
    // 0x19c938: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19C938u;
    {
        const bool branch_taken_0x19c938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c938) {
            ctx->pc = 0x19C974u;
            goto label_19c974;
        }
    }
    ctx->pc = 0x19C940u;
    // 0x19c940: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19c940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19c944: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c948: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19C948u;
    {
        const bool branch_taken_0x19c948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C948u;
        // 0x19c94c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c948) {
            ctx->pc = 0x19C974u;
            goto label_19c974;
        }
    }
    ctx->pc = 0x19C950u;
    // 0x19c950: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x19c950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c954: 0x0  nop
    ctx->pc = 0x19c954u;
    // NOP
label_19c958:
    // 0x19c958: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x19c958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c95c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19c960: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19c960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19c964: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x19c964u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19c968: 0x0  nop
    ctx->pc = 0x19c968u;
    // NOP
    // 0x19c96c: 0x1467fffa  bne         $v1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C96Cu;
    {
        const bool branch_taken_0x19c96c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x19C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C96Cu;
        // 0x19c970: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c96c) {
            ctx->pc = 0x19C958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c958;
        }
    }
    ctx->pc = 0x19C974u;
label_19c974:
    // 0x19c974: 0x3e00008  jr          $ra
    ctx->pc = 0x19C974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C974u;
        // 0x19c978: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C97Cu;
}
