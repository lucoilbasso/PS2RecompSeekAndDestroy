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

// Function: WMCardList__FP7WcMCardP17MCARD_INFORMATIONPc
// Address: 0x179da8 - 0x179e54
void WMCardList__FP7WcMCardP17MCARD_INFORMATIONPc_0x179da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardList__FP7WcMCardP17MCARD_INFORMATIONPc_0x179da8");
#endif

    switch (ctx->pc) {
        case 0x179dd0u: goto label_179dd0;
        case 0x179de8u: goto label_179de8;
        case 0x179e04u: goto label_179e04;
        default: break;
    }

    ctx->pc = 0x179da8u;

    // 0x179da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179dac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x179dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x179db0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x179db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179db4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x179db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x179db8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x179db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179dbc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x179dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x179dc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x179dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179dc4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x179dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x179dc8: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x179dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x179dcc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x179dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_179dd0:
    // 0x179dd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x179dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179dd4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x179dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x179dd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x179dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ddc: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x179ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x179de0: 0xc0716d0  jal         func_1C5B40
    ctx->pc = 0x179DE0u;
    SET_GPR_U32(ctx, 31, 0x179DE8u);
    ctx->pc = 0x179DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179DE0u;
    // 0x179de4: 0x26290040  addiu       $t1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5B40u, 0x179DE0u, 0x179DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179DE8u;
label_179de8:
    // 0x179de8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x179DE8u;
    {
        const bool branch_taken_0x179de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179de8) {
            ctx->pc = 0x179DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179DE8u;
            // 0x179dec: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179dd0;
        }
    }
    ctx->pc = 0x179DF0u;
    // 0x179df0: 0x26504030  addiu       $s0, $s2, 0x4030
    ctx->pc = 0x179df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16432));
    // 0x179df4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179df8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x179df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179dfc: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179DFCu;
    SET_GPR_U32(ctx, 31, 0x179E04u);
    ctx->pc = 0x179E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179DFCu;
    // 0x179e00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179DFCu, 0x179E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E04u;
label_179e04:
    // 0x179e04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x179e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179e08: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179E08u;
    {
        const bool branch_taken_0x179e08 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x179E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E08u;
        // 0x179e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e08) {
            ctx->pc = 0x179E18u;
            goto label_179e18;
        }
    }
    ctx->pc = 0x179E10u;
    // 0x179e10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x179E10u;
    {
        const bool branch_taken_0x179e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E10u;
        // 0x179e14: 0xae240024  sw          $a0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e10) {
            ctx->pc = 0x179E3Cu;
            goto label_179e3c;
        }
    }
    ctx->pc = 0x179E18u;
label_179e18:
    // 0x179e18: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x179e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x179e1c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179E1Cu;
    {
        const bool branch_taken_0x179e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x179E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E1Cu;
        // 0x179e20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e1c) {
            ctx->pc = 0x179E34u;
            goto label_179e34;
        }
    }
    ctx->pc = 0x179E24u;
    // 0x179e24: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x179e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x179e28: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x179E28u;
    {
        const bool branch_taken_0x179e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x179e28) {
            ctx->pc = 0x179E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179E28u;
            // 0x179e2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179E34u;
            goto label_179e34;
        }
    }
    ctx->pc = 0x179E30u;
    // 0x179e30: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x179e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_179e34:
    // 0x179e34: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x179e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x179e38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179e3c:
    // 0x179e3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x179e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179e40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x179e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179e44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x179e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179e48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x179e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x179E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E4Cu;
        // 0x179e50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179E54u;
}
