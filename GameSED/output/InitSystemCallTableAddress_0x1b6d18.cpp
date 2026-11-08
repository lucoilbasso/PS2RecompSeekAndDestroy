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

// Function: InitSystemCallTableAddress
// Address: 0x1b6d18 - 0x1b6e14
void InitSystemCallTableAddress_0x1b6d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSystemCallTableAddress_0x1b6d18");
#endif

    switch (ctx->pc) {
        case 0x1b6d58u: goto label_1b6d58;
        case 0x1b6d64u: goto label_1b6d64;
        case 0x1b6d74u: goto label_1b6d74;
        case 0x1b6d88u: goto label_1b6d88;
        case 0x1b6da0u: goto label_1b6da0;
        case 0x1b6db4u: goto label_1b6db4;
        case 0x1b6dd0u: goto label_1b6dd0;
        default: break;
    }

    ctx->pc = 0x1b6d18u;

    // 0x1b6d18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b6d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b6d1c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b6d20: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1b6d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1b6d24: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b6d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1b6d28: 0x3c15001b  lui         $s5, 0x1B
    ctx->pc = 0x1b6d28u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)27 << 16));
    // 0x1b6d2c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1b6d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1b6d30: 0x3c14001b  lui         $s4, 0x1B
    ctx->pc = 0x1b6d30u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)27 << 16));
    // 0x1b6d34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b6d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b6d38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b6d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b6d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6d40: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b6d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b6d44: 0x2450aa30  addiu       $s0, $v0, -0x55D0
    ctx->pc = 0x1b6d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945328));
    // 0x1b6d48: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1b6d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1b6d4c: 0x8c44aa30  lw          $a0, -0x55D0($v0)
    ctx->pc = 0x1b6d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x24AA30u));
    // 0x1b6d50: 0xc06db86  jal         func_1B6E18
    ctx->pc = 0x1B6D50u;
    SET_GPR_U32(ctx, 31, 0x1B6D58u);
    ctx->pc = 0x1B6D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D50u;
    // 0x1b6d54: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E18u, 0x1B6D50u, 0x1B6D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D58u;
label_1b6d58:
    // 0x1b6d58: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1b6d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b6d5c: 0xc06db86  jal         func_1B6E18
    ctx->pc = 0x1B6D5Cu;
    SET_GPR_U32(ctx, 31, 0x1B6D64u);
    ctx->pc = 0x1B6D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D5Cu;
    // 0x1b6d60: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E18u, 0x1B6D5Cu, 0x1B6D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D64u;
label_1b6d64:
    // 0x1b6d64: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b6d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b6d68: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1b6d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1b6d6c: 0xc06db34  jal         func_1B6CD0
    ctx->pc = 0x1B6D6Cu;
    SET_GPR_U32(ctx, 31, 0x1B6D74u);
    ctx->pc = 0x1B6D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D6Cu;
    // 0x1b6d70: 0x26a66c90  addiu       $a2, $s5, 0x6C90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 27792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CD0u, 0x1B6D6Cu, 0x1B6D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D74u;
label_1b6d74:
    // 0x1b6d74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b6d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d78: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b6d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b6d7c: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1b6d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1b6d80: 0xc06db34  jal         func_1B6CD0
    ctx->pc = 0x1B6D80u;
    SET_GPR_U32(ctx, 31, 0x1B6D88u);
    ctx->pc = 0x1B6D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D80u;
    // 0x1b6d84: 0x26866c58  addiu       $a2, $s4, 0x6C58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 27736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CD0u, 0x1B6D80u, 0x1B6D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D88u;
label_1b6d88:
    // 0x1b6d88: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x1b6d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x1b6d8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b6d8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d90: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1b6d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x1b6d94: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B6D94u;
    {
        const bool branch_taken_0x1b6d94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D94u;
        // 0x1b6d98: 0x3c160025  lui         $s6, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d94) {
            ctx->pc = 0x1B6DE8u;
            goto label_1b6de8;
        }
    }
    ctx->pc = 0x1B6D9Cu;
    // 0x1b6d9c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1b6d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1b6da0:
    // 0x1b6da0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6DA0u;
    {
        const bool branch_taken_0x1b6da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DA0u;
        // 0x1b6da4: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6da0) {
            ctx->pc = 0x1B6DC0u;
            goto label_1b6dc0;
        }
    }
    ctx->pc = 0x1B6DA8u;
    // 0x1b6da8: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1b6da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1b6dac: 0xc06db34  jal         func_1B6CD0
    ctx->pc = 0x1B6DACu;
    SET_GPR_U32(ctx, 31, 0x1B6DB4u);
    ctx->pc = 0x1B6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DACu;
    // 0x1b6db0: 0x26a66c90  addiu       $a2, $s5, 0x6C90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 27792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CD0u, 0x1B6DACu, 0x1B6DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DB4u;
label_1b6db4:
    // 0x1b6db4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b6db4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6db8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6DB8u;
    {
        const bool branch_taken_0x1b6db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DB8u;
        // 0x1b6dbc: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6db8) {
            ctx->pc = 0x1B6DD8u;
            goto label_1b6dd8;
        }
    }
    ctx->pc = 0x1B6DC0u;
label_1b6dc0:
    // 0x1b6dc0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1b6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b6dc4: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1b6dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1b6dc8: 0xc06db34  jal         func_1B6CD0
    ctx->pc = 0x1B6DC8u;
    SET_GPR_U32(ctx, 31, 0x1B6DD0u);
    ctx->pc = 0x1B6DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6DC8u;
    // 0x1b6dcc: 0x26866c58  addiu       $a2, $s4, 0x6C58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 27736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CD0u, 0x1B6DC8u, 0x1B6DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6DD0u;
label_1b6dd0:
    // 0x1b6dd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b6dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6dd4: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1b6dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_1b6dd8:
    // 0x1b6dd8: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1B6DD8u;
    {
        const bool branch_taken_0x1b6dd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1B6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DD8u;
        // 0x1b6ddc: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6dd8) {
            ctx->pc = 0x1B6DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6da0;
        }
    }
    ctx->pc = 0x1B6DE0u;
    // 0x1b6de0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6DE0u;
    {
        const bool branch_taken_0x1b6de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DE0u;
        // 0x1b6de4: 0xaed1aa28  sw          $s1, -0x55D8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294945320), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6de0) {
            ctx->pc = 0x1B6DECu;
            goto label_1b6dec;
        }
    }
    ctx->pc = 0x1B6DE8u;
label_1b6de8:
    // 0x1b6de8: 0xaed1aa28  sw          $s1, -0x55D8($s6)
    ctx->pc = 0x1b6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294945320), GPR_U32(ctx, 17));
label_1b6dec:
    // 0x1b6dec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b6decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b6df0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1b6df0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b6df4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1b6df4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b6df8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b6df8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6dfc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b6dfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6e00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b6e00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6e04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b6e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6e08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E0Cu;
        // 0x1b6e10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6E14u;
}
