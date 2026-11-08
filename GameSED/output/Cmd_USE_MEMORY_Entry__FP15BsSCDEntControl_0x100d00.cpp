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

// Function: Cmd_USE_MEMORY_Entry__FP15BsSCDEntControl
// Address: 0x100d00 - 0x100e70
void Cmd_USE_MEMORY_Entry__FP15BsSCDEntControl_0x100d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_USE_MEMORY_Entry__FP15BsSCDEntControl_0x100d00");
#endif

    switch (ctx->pc) {
        case 0x100d48u: goto label_100d48;
        case 0x100d70u: goto label_100d70;
        case 0x100d8cu: goto label_100d8c;
        case 0x100d98u: goto label_100d98;
        case 0x100dc0u: goto label_100dc0;
        case 0x100ddcu: goto label_100ddc;
        case 0x100df8u: goto label_100df8;
        case 0x100e20u: goto label_100e20;
        case 0x100e3cu: goto label_100e3c;
        default: break;
    }

    ctx->pc = 0x100d00u;

    // 0x100d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100d04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x100d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x100d08: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x100d08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100d10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x100d14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x100d18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x100d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x100d1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x100d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x100d20: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x100d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x100d24: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x100d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x100d28: 0x8c530044  lw          $s3, 0x44($v0)
    ctx->pc = 0x100d28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x100d2c: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x100d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x100d30: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x100D30u;
    {
        const bool branch_taken_0x100d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100d30) {
            ctx->pc = 0x100D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100D30u;
            // 0x100d34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100D90u;
            goto label_100d90;
        }
    }
    ctx->pc = 0x100D38u;
    // 0x100d38: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x100d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x100d3c: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x100d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d40: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x100D40u;
    {
        const bool branch_taken_0x100d40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D40u;
        // 0x100d44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d40) {
            ctx->pc = 0x100D80u;
            goto label_100d80;
        }
    }
    ctx->pc = 0x100D48u;
label_100d48:
    // 0x100d48: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x100d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x100d4c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x100d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x100d50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x100d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100d58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x100d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100d60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100D60u;
    {
        const bool branch_taken_0x100d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D60u;
        // 0x100d64: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d60) {
            ctx->pc = 0x100D70u;
            goto label_100d70;
        }
    }
    ctx->pc = 0x100D68u;
    // 0x100d68: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x100D68u;
    SET_GPR_U32(ctx, 31, 0x100D70u);
    ctx->pc = 0x100D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D68u;
    // 0x100d6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100D68u, 0x100D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D70u;
label_100d70:
    // 0x100d70: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x100d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x100d74: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x100d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100d78: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x100D78u;
    {
        const bool branch_taken_0x100d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D78u;
        // 0x100d7c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d78) {
            ctx->pc = 0x100D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100d48;
        }
    }
    ctx->pc = 0x100D80u;
label_100d80:
    // 0x100d80: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x100d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x100d84: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x100D84u;
    SET_GPR_U32(ctx, 31, 0x100D8Cu);
    ctx->pc = 0x100D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D84u;
    // 0x100d88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x100D84u, 0x100D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D8Cu;
label_100d8c:
    // 0x100d8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100d90:
    // 0x100d90: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x100D90u;
    SET_GPR_U32(ctx, 31, 0x100D98u);
    ctx->pc = 0x100D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D90u;
    // 0x100d94: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x100D90u, 0x100D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D98u;
label_100d98:
    // 0x100d98: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x100d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x100d9c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x100d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x100da0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x100da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100da4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x100da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100da8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x100da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x100dac: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x100DACu;
    {
        const bool branch_taken_0x100dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x100DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100DACu;
        // 0x100db0: 0x38880  sll         $s1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100dac) {
            ctx->pc = 0x100DB8u;
            goto label_100db8;
        }
    }
    ctx->pc = 0x100DB4u;
    // 0x100db4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x100db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100db8:
    // 0x100db8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x100DB8u;
    SET_GPR_U32(ctx, 31, 0x100DC0u);
    ctx->pc = 0x100DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100DB8u;
    // 0x100dbc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x100DB8u, 0x100DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DC0u;
label_100dc0:
    // 0x100dc0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100DC0u;
    {
        const bool branch_taken_0x100dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100DC0u;
        // 0x100dc4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100dc0) {
            ctx->pc = 0x100DDCu;
            goto label_100ddc;
        }
    }
    ctx->pc = 0x100DC8u;
    // 0x100dc8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x100dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x100dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100dd0: 0x24a51980  addiu       $a1, $a1, 0x1980
    ctx->pc = 0x100dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6528));
    // 0x100dd4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x100DD4u;
    SET_GPR_U32(ctx, 31, 0x100DDCu);
    ctx->pc = 0x100DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100DD4u;
    // 0x100dd8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x100DD4u, 0x100DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DDCu;
label_100ddc:
    // 0x100ddc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x100ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x100de0: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x100DE0u;
    {
        const bool branch_taken_0x100de0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x100DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100DE0u;
        // 0x100de4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100de0) {
            ctx->pc = 0x100E4Cu;
            goto label_100e4c;
        }
    }
    ctx->pc = 0x100DE8u;
    // 0x100de8: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x100de8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100dec: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x100decu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100df0: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x100df0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x100df4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x100df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_100df8:
    // 0x100df8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x100df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x100dfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x100e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x100e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100e08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x100e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e0c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x100E0Cu;
    {
        const bool branch_taken_0x100e0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E0Cu;
        // 0x100e10: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e0c) {
            ctx->pc = 0x100E18u;
            goto label_100e18;
        }
    }
    ctx->pc = 0x100E14u;
    // 0x100e14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x100e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100e18:
    // 0x100e18: 0xc068086  jal         func_1A0218
    ctx->pc = 0x100E18u;
    SET_GPR_U32(ctx, 31, 0x100E20u);
    ctx->pc = 0x100E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100E18u;
    // 0x100e1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x100E18u, 0x100E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E20u;
label_100e20:
    // 0x100e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x100e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100e24: 0x26a51998  addiu       $a1, $s5, 0x1998
    ctx->pc = 0x100e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 6552));
    // 0x100e28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x100e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x100e2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100E2Cu;
    {
        const bool branch_taken_0x100e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E2Cu;
        // 0x100e30: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e2c) {
            ctx->pc = 0x100E3Cu;
            goto label_100e3c;
        }
    }
    ctx->pc = 0x100E34u;
    // 0x100e34: 0xc068186  jal         func_1A0618
    ctx->pc = 0x100E34u;
    SET_GPR_U32(ctx, 31, 0x100E3Cu);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x100E34u, 0x100E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E3Cu;
label_100e3c:
    // 0x100e3c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x100e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x100e40: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x100e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100e44: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x100E44u;
    {
        const bool branch_taken_0x100e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100e44) {
            ctx->pc = 0x100E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100E44u;
            // 0x100e48: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100df8;
        }
    }
    ctx->pc = 0x100E4Cu;
label_100e4c:
    // 0x100e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100e50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x100e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100e54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x100e54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100e58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x100e58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x100e5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x100e5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100e60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x100e60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x100e64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x100e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100e68: 0x3e00008  jr          $ra
    ctx->pc = 0x100E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E68u;
        // 0x100e6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100E70u;
}
