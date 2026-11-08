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

// Function: Finish__8WcDaemon
// Address: 0x199d30 - 0x199e34
void Finish__8WcDaemon_0x199d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__8WcDaemon_0x199d30");
#endif

    switch (ctx->pc) {
        case 0x199d30u: goto label_199d30;
        case 0x199d34u: goto label_199d34;
        case 0x199d38u: goto label_199d38;
        case 0x199d3cu: goto label_199d3c;
        case 0x199d40u: goto label_199d40;
        case 0x199d44u: goto label_199d44;
        case 0x199d48u: goto label_199d48;
        case 0x199d4cu: goto label_199d4c;
        case 0x199d50u: goto label_199d50;
        case 0x199d54u: goto label_199d54;
        case 0x199d58u: goto label_199d58;
        case 0x199d5cu: goto label_199d5c;
        case 0x199d60u: goto label_199d60;
        case 0x199d64u: goto label_199d64;
        case 0x199d68u: goto label_199d68;
        case 0x199d6cu: goto label_199d6c;
        case 0x199d70u: goto label_199d70;
        case 0x199d74u: goto label_199d74;
        case 0x199d78u: goto label_199d78;
        case 0x199d7cu: goto label_199d7c;
        case 0x199d80u: goto label_199d80;
        case 0x199d84u: goto label_199d84;
        case 0x199d88u: goto label_199d88;
        case 0x199d8cu: goto label_199d8c;
        case 0x199d90u: goto label_199d90;
        case 0x199d94u: goto label_199d94;
        case 0x199d98u: goto label_199d98;
        case 0x199d9cu: goto label_199d9c;
        case 0x199da0u: goto label_199da0;
        case 0x199da4u: goto label_199da4;
        case 0x199da8u: goto label_199da8;
        case 0x199dacu: goto label_199dac;
        case 0x199db0u: goto label_199db0;
        case 0x199db4u: goto label_199db4;
        case 0x199db8u: goto label_199db8;
        case 0x199dbcu: goto label_199dbc;
        case 0x199dc0u: goto label_199dc0;
        case 0x199dc4u: goto label_199dc4;
        case 0x199dc8u: goto label_199dc8;
        case 0x199dccu: goto label_199dcc;
        case 0x199dd0u: goto label_199dd0;
        case 0x199dd4u: goto label_199dd4;
        case 0x199dd8u: goto label_199dd8;
        case 0x199ddcu: goto label_199ddc;
        case 0x199de0u: goto label_199de0;
        case 0x199de4u: goto label_199de4;
        case 0x199de8u: goto label_199de8;
        case 0x199decu: goto label_199dec;
        case 0x199df0u: goto label_199df0;
        case 0x199df4u: goto label_199df4;
        case 0x199df8u: goto label_199df8;
        case 0x199dfcu: goto label_199dfc;
        case 0x199e00u: goto label_199e00;
        case 0x199e04u: goto label_199e04;
        case 0x199e08u: goto label_199e08;
        case 0x199e0cu: goto label_199e0c;
        case 0x199e10u: goto label_199e10;
        case 0x199e14u: goto label_199e14;
        case 0x199e18u: goto label_199e18;
        case 0x199e1cu: goto label_199e1c;
        case 0x199e20u: goto label_199e20;
        case 0x199e24u: goto label_199e24;
        case 0x199e28u: goto label_199e28;
        case 0x199e2cu: goto label_199e2c;
        case 0x199e30u: goto label_199e30;
        default: break;
    }

    ctx->pc = 0x199d30u;

label_199d30:
    // 0x199d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_199d34:
    // 0x199d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_199d38:
    // 0x199d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199d3c:
    // 0x199d3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_199d40:
    // 0x199d40: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x199d40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_199d44:
    // 0x199d44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_199d48:
    // 0x199d48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x199d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_199d4c:
    // 0x199d4c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x199d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_199d50:
    // 0x199d50: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_199d54:
    if (ctx->pc == 0x199D54u) {
        ctx->pc = 0x199D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D50u;
        // 0x199d54: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D58u;
        goto label_199d58;
    }
    ctx->pc = 0x199D50u;
    {
        const bool branch_taken_0x199d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d50) {
            ctx->pc = 0x199D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199D50u;
            // 0x199d54: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199D64u;
            goto label_199d64;
        }
    }
    ctx->pc = 0x199D58u;
label_199d58:
    // 0x199d58: 0x40f809  jalr        $v0
label_199d5c:
    if (ctx->pc == 0x199D5Cu) {
        ctx->pc = 0x199D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D58u;
        // 0x199d5c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D60u;
        goto label_199d60;
    }
    ctx->pc = 0x199D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199D60u);
        ctx->pc = 0x199D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D58u;
        // 0x199d5c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199D58u, 0x199D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199D60u;
label_199d60:
    // 0x199d60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x199d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_199d64:
    // 0x199d64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_199d68:
    if (ctx->pc == 0x199D68u) {
        ctx->pc = 0x199D6Cu;
        goto label_199d6c;
    }
    ctx->pc = 0x199D64u;
    {
        const bool branch_taken_0x199d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d64) {
            ctx->pc = 0x199D74u;
            goto label_199d74;
        }
    }
    ctx->pc = 0x199D6Cu;
label_199d6c:
    // 0x199d6c: 0xc067f04  jal         func_19FC10
label_199d70:
    if (ctx->pc == 0x199D70u) {
        ctx->pc = 0x199D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D6Cu;
        // 0x199d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D74u;
        goto label_199d74;
    }
    ctx->pc = 0x199D6Cu;
    SET_GPR_U32(ctx, 31, 0x199D74u);
    ctx->pc = 0x199D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D6Cu;
    // 0x199d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x199D6Cu, 0x199D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D74u;
label_199d74:
    // 0x199d74: 0xc06684c  jal         func_19A130
label_199d78:
    if (ctx->pc == 0x199D78u) {
        ctx->pc = 0x199D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D74u;
        // 0x199d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D7Cu;
        goto label_199d7c;
    }
    ctx->pc = 0x199D74u;
    SET_GPR_U32(ctx, 31, 0x199D7Cu);
    ctx->pc = 0x199D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199D74u;
    // 0x199d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A130u, 0x199D74u, 0x199D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D7Cu;
label_199d7c:
    // 0x199d7c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x199d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_199d80:
    // 0x199d80: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_199d84:
    if (ctx->pc == 0x199D84u) {
        ctx->pc = 0x199D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D80u;
        // 0x199d84: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D88u;
        goto label_199d88;
    }
    ctx->pc = 0x199D80u;
    {
        const bool branch_taken_0x199d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d80) {
            ctx->pc = 0x199D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199D80u;
            // 0x199d84: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199E08u;
            goto label_199e08;
        }
    }
    ctx->pc = 0x199D88u;
label_199d88:
    // 0x199d88: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x199d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_199d8c:
    // 0x199d8c: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_199d90:
    if (ctx->pc == 0x199D90u) {
        ctx->pc = 0x199D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D8Cu;
        // 0x199d90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199D94u;
        goto label_199d94;
    }
    ctx->pc = 0x199D8Cu;
    {
        const bool branch_taken_0x199d8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x199D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D8Cu;
        // 0x199d90: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d8c) {
            ctx->pc = 0x199DF0u;
            goto label_199df0;
        }
    }
    ctx->pc = 0x199D94u;
label_199d94:
    // 0x199d94: 0x3c120080  lui         $s2, 0x80
    ctx->pc = 0x199d94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)128 << 16));
label_199d98:
    // 0x199d98: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x199d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_199d9c:
    // 0x199d9c: 0x0  nop
    ctx->pc = 0x199d9cu;
    // NOP
label_199da0:
    // 0x199da0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x199da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_199da4:
    // 0x199da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_199da8:
    // 0x199da8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199dac:
    // 0x199dac: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_199db0:
    if (ctx->pc == 0x199DB0u) {
        ctx->pc = 0x199DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DACu;
        // 0x199db0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DB4u;
        goto label_199db4;
    }
    ctx->pc = 0x199DACu;
    {
        const bool branch_taken_0x199dac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DACu;
        // 0x199db0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dac) {
            ctx->pc = 0x199DE0u;
            goto label_199de0;
        }
    }
    ctx->pc = 0x199DB4u;
label_199db4:
    // 0x199db4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x199db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_199db8:
    // 0x199db8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x199db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_199dbc:
    // 0x199dbc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_199dc0:
    if (ctx->pc == 0x199DC0u) {
        ctx->pc = 0x199DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DBCu;
        // 0x199dc0: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DC4u;
        goto label_199dc4;
    }
    ctx->pc = 0x199DBCu;
    {
        const bool branch_taken_0x199dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199dbc) {
            ctx->pc = 0x199DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199DBCu;
            // 0x199dc0: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199DE4u;
            goto label_199de4;
        }
    }
    ctx->pc = 0x199DC4u;
label_199dc4:
    // 0x199dc4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x199dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_199dc8:
    // 0x199dc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199dcc:
    // 0x199dcc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x199dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_199dd0:
    // 0x199dd0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x199dd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_199dd4:
    // 0x199dd4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x199dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_199dd8:
    // 0x199dd8: 0x60f809  jalr        $v1
label_199ddc:
    if (ctx->pc == 0x199DDCu) {
        ctx->pc = 0x199DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DD8u;
        // 0x199ddc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DE0u;
        goto label_199de0;
    }
    ctx->pc = 0x199DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x199DE0u);
        ctx->pc = 0x199DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DD8u;
        // 0x199ddc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199DD8u, 0x199DE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199DE0u;
label_199de0:
    // 0x199de0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x199de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_199de4:
    // 0x199de4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x199de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_199de8:
    // 0x199de8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_199dec:
    if (ctx->pc == 0x199DECu) {
        ctx->pc = 0x199DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DE8u;
        // 0x199dec: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DF0u;
        goto label_199df0;
    }
    ctx->pc = 0x199DE8u;
    {
        const bool branch_taken_0x199de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199de8) {
            ctx->pc = 0x199DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199DE8u;
            // 0x199dec: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199da0;
        }
    }
    ctx->pc = 0x199DF0u;
label_199df0:
    // 0x199df0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x199df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_199df4:
    // 0x199df4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_199df8:
    if (ctx->pc == 0x199DF8u) {
        ctx->pc = 0x199DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DF4u;
        // 0x199df8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199DFCu;
        goto label_199dfc;
    }
    ctx->pc = 0x199DF4u;
    {
        const bool branch_taken_0x199df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199df4) {
            ctx->pc = 0x199DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199DF4u;
            // 0x199df8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199E08u;
            goto label_199e08;
        }
    }
    ctx->pc = 0x199DFCu;
label_199dfc:
    // 0x199dfc: 0xc067f04  jal         func_19FC10
label_199e00:
    if (ctx->pc == 0x199E00u) {
        ctx->pc = 0x199E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DFCu;
        // 0x199e00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E04u;
        goto label_199e04;
    }
    ctx->pc = 0x199DFCu;
    SET_GPR_U32(ctx, 31, 0x199E04u);
    ctx->pc = 0x199E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199DFCu;
    // 0x199e00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x199DFCu, 0x199E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E04u;
label_199e04:
    // 0x199e04: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x199e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_199e08:
    // 0x199e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199e0c:
    // 0x199e0c: 0xc068364  jal         func_1A0D90
label_199e10:
    if (ctx->pc == 0x199E10u) {
        ctx->pc = 0x199E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E0Cu;
        // 0x199e10: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E14u;
        goto label_199e14;
    }
    ctx->pc = 0x199E0Cu;
    SET_GPR_U32(ctx, 31, 0x199E14u);
    ctx->pc = 0x199E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E0Cu;
    // 0x199e10: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x199E0Cu, 0x199E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E14u;
label_199e14:
    // 0x199e14: 0xc068396  jal         func_1A0E58
label_199e18:
    if (ctx->pc == 0x199E18u) {
        ctx->pc = 0x199E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E14u;
        // 0x199e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E1Cu;
        goto label_199e1c;
    }
    ctx->pc = 0x199E14u;
    SET_GPR_U32(ctx, 31, 0x199E1Cu);
    ctx->pc = 0x199E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E14u;
    // 0x199e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x199E14u, 0x199E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E1Cu;
label_199e1c:
    // 0x199e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199e20:
    // 0x199e20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_199e24:
    // 0x199e24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_199e28:
    // 0x199e28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x199e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_199e2c:
    // 0x199e2c: 0x3e00008  jr          $ra
label_199e30:
    if (ctx->pc == 0x199E30u) {
        ctx->pc = 0x199E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E2Cu;
        // 0x199e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199E34u;
        goto label_fallthrough_0x199e2c;
    }
    ctx->pc = 0x199E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E2Cu;
        // 0x199e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x199e2c:
    ctx->pc = 0x199E34u;
}
