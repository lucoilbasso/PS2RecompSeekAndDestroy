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

// Function: ApDaemonInqActorPosition__Fi
// Address: 0x136d38 - 0x136e1c
void ApDaemonInqActorPosition__Fi_0x136d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonInqActorPosition__Fi_0x136d38");
#endif

    switch (ctx->pc) {
        case 0x136da8u: goto label_136da8;
        case 0x136db0u: goto label_136db0;
        default: break;
    }

    ctx->pc = 0x136d38u;

    // 0x136d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136d3c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x136d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x136d40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136d44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136d48: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136D48u;
    {
        const bool branch_taken_0x136d48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x136D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D48u;
        // 0x136d4c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d48) {
            ctx->pc = 0x136D60u;
            goto label_136d60;
        }
    }
    ctx->pc = 0x136D50u;
    // 0x136d50: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x136d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x136d54: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x136D54u;
    {
        const bool branch_taken_0x136d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D54u;
        // 0x136d58: 0x8c62b830  lw          $v0, -0x47D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d54) {
            ctx->pc = 0x136E08u;
            goto label_136e08;
        }
    }
    ctx->pc = 0x136D5Cu;
    // 0x136d5c: 0x0  nop
    ctx->pc = 0x136d5cu;
    // NOP
label_136d60:
    // 0x136d60: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x136d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x136d64: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136D64u;
    {
        const bool branch_taken_0x136d64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x136d64) {
            ctx->pc = 0x136D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136D64u;
            // 0x136d68: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136D78u;
            goto label_136d78;
        }
    }
    ctx->pc = 0x136D6Cu;
    // 0x136d6c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x136d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x136d70: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x136D70u;
    {
        const bool branch_taken_0x136d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D70u;
        // 0x136d74: 0x2442a380  addiu       $v0, $v0, -0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d70) {
            ctx->pc = 0x136E08u;
            goto label_136e08;
        }
    }
    ctx->pc = 0x136D78u;
label_136d78:
    // 0x136d78: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x136D78u;
    {
        const bool branch_taken_0x136d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x136D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D78u;
        // 0x136d7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d78) {
            ctx->pc = 0x136DB8u;
            goto label_136db8;
        }
    }
    ctx->pc = 0x136D80u;
    // 0x136d80: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x136d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x136d84: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136d84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x136d88: 0x8c70fff4  lw          $s0, -0xC($v1)
    ctx->pc = 0x136d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
    // 0x136d8c: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x136d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x136d90: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x136d90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x136d94: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x136d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x136d98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136D98u;
    {
        const bool branch_taken_0x136d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d98) {
            ctx->pc = 0x136DA8u;
            goto label_136da8;
        }
    }
    ctx->pc = 0x136DA0u;
    // 0x136da0: 0xc061920  jal         func_186480
    ctx->pc = 0x136DA0u;
    SET_GPR_U32(ctx, 31, 0x136DA8u);
    ctx->pc = 0x136DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DA0u;
    // 0x136da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x136DA0u, 0x136DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DA8u;
label_136da8:
    // 0x136da8: 0xc061422  jal         func_185088
    ctx->pc = 0x136DA8u;
    SET_GPR_U32(ctx, 31, 0x136DB0u);
    ctx->pc = 0x136DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DA8u;
    // 0x136dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x136DA8u, 0x136DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DB0u;
label_136db0:
    // 0x136db0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x136DB0u;
    {
        const bool branch_taken_0x136db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DB0u;
        // 0x136db4: 0x26020110  addiu       $v0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136db0) {
            ctx->pc = 0x136E08u;
            goto label_136e08;
        }
    }
    ctx->pc = 0x136DB8u;
label_136db8:
    // 0x136db8: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136DB8u;
    {
        const bool branch_taken_0x136db8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x136db8) {
            ctx->pc = 0x136DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136DB8u;
            // 0x136dbc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136DD0u;
            goto label_136dd0;
        }
    }
    ctx->pc = 0x136DC0u;
    // 0x136dc0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x136dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x136dc4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x136dc8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x136DC8u;
    {
        const bool branch_taken_0x136dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DC8u;
        // 0x136dcc: 0x8c620040  lw          $v0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136dc8) {
            ctx->pc = 0x136DF4u;
            goto label_136df4;
        }
    }
    ctx->pc = 0x136DD0u;
label_136dd0:
    // 0x136dd0: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x136DD0u;
    {
        const bool branch_taken_0x136dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x136DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DD0u;
        // 0x136dd4: 0x8f828a30  lw          $v0, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136dd0) {
            ctx->pc = 0x136DF4u;
            goto label_136df4;
        }
    }
    ctx->pc = 0x136DD8u;
    // 0x136dd8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136DD8u;
    {
        const bool branch_taken_0x136dd8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x136DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DD8u;
        // 0x136ddc: 0x8f838d10  lw          $v1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136dd8) {
            ctx->pc = 0x136DF0u;
            goto label_136df0;
        }
    }
    ctx->pc = 0x136DE0u;
    // 0x136de0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x136de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x136de4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x136de8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136DE8u;
    {
        const bool branch_taken_0x136de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DE8u;
        // 0x136dec: 0x8c423630  lw          $v0, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136de8) {
            ctx->pc = 0x136DF4u;
            goto label_136df4;
        }
    }
    ctx->pc = 0x136DF0u;
label_136df0:
    // 0x136df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136df4:
    // 0x136df4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x136DF4u;
    {
        const bool branch_taken_0x136df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136df4) {
            ctx->pc = 0x136DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136DF4u;
            // 0x136df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136E08u;
            goto label_136e08;
        }
    }
    ctx->pc = 0x136DFCu;
    // 0x136dfc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x136dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x136e00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x136e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136e04: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x136e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_136e08:
    // 0x136e08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136e0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136e10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x136e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136e14: 0x3e00008  jr          $ra
    ctx->pc = 0x136E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E14u;
        // 0x136e18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136E1Cu;
}
