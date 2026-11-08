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

// Function: Cmd_USE_MODEL_Entry__FP15BsSCDEntControl
// Address: 0x101de0 - 0x101fa8
void Cmd_USE_MODEL_Entry__FP15BsSCDEntControl_0x101de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_USE_MODEL_Entry__FP15BsSCDEntControl_0x101de0");
#endif

    switch (ctx->pc) {
        case 0x101de0u: goto label_101de0;
        case 0x101de4u: goto label_101de4;
        case 0x101de8u: goto label_101de8;
        case 0x101decu: goto label_101dec;
        case 0x101df0u: goto label_101df0;
        case 0x101df4u: goto label_101df4;
        case 0x101df8u: goto label_101df8;
        case 0x101dfcu: goto label_101dfc;
        case 0x101e00u: goto label_101e00;
        case 0x101e04u: goto label_101e04;
        case 0x101e08u: goto label_101e08;
        case 0x101e0cu: goto label_101e0c;
        case 0x101e10u: goto label_101e10;
        case 0x101e14u: goto label_101e14;
        case 0x101e18u: goto label_101e18;
        case 0x101e1cu: goto label_101e1c;
        case 0x101e20u: goto label_101e20;
        case 0x101e24u: goto label_101e24;
        case 0x101e28u: goto label_101e28;
        case 0x101e2cu: goto label_101e2c;
        case 0x101e30u: goto label_101e30;
        case 0x101e34u: goto label_101e34;
        case 0x101e38u: goto label_101e38;
        case 0x101e3cu: goto label_101e3c;
        case 0x101e40u: goto label_101e40;
        case 0x101e44u: goto label_101e44;
        case 0x101e48u: goto label_101e48;
        case 0x101e4cu: goto label_101e4c;
        case 0x101e50u: goto label_101e50;
        case 0x101e54u: goto label_101e54;
        case 0x101e58u: goto label_101e58;
        case 0x101e5cu: goto label_101e5c;
        case 0x101e60u: goto label_101e60;
        case 0x101e64u: goto label_101e64;
        case 0x101e68u: goto label_101e68;
        case 0x101e6cu: goto label_101e6c;
        case 0x101e70u: goto label_101e70;
        case 0x101e74u: goto label_101e74;
        case 0x101e78u: goto label_101e78;
        case 0x101e7cu: goto label_101e7c;
        case 0x101e80u: goto label_101e80;
        case 0x101e84u: goto label_101e84;
        case 0x101e88u: goto label_101e88;
        case 0x101e8cu: goto label_101e8c;
        case 0x101e90u: goto label_101e90;
        case 0x101e94u: goto label_101e94;
        case 0x101e98u: goto label_101e98;
        case 0x101e9cu: goto label_101e9c;
        case 0x101ea0u: goto label_101ea0;
        case 0x101ea4u: goto label_101ea4;
        case 0x101ea8u: goto label_101ea8;
        case 0x101eacu: goto label_101eac;
        case 0x101eb0u: goto label_101eb0;
        case 0x101eb4u: goto label_101eb4;
        case 0x101eb8u: goto label_101eb8;
        case 0x101ebcu: goto label_101ebc;
        case 0x101ec0u: goto label_101ec0;
        case 0x101ec4u: goto label_101ec4;
        case 0x101ec8u: goto label_101ec8;
        case 0x101eccu: goto label_101ecc;
        case 0x101ed0u: goto label_101ed0;
        case 0x101ed4u: goto label_101ed4;
        case 0x101ed8u: goto label_101ed8;
        case 0x101edcu: goto label_101edc;
        case 0x101ee0u: goto label_101ee0;
        case 0x101ee4u: goto label_101ee4;
        case 0x101ee8u: goto label_101ee8;
        case 0x101eecu: goto label_101eec;
        case 0x101ef0u: goto label_101ef0;
        case 0x101ef4u: goto label_101ef4;
        case 0x101ef8u: goto label_101ef8;
        case 0x101efcu: goto label_101efc;
        case 0x101f00u: goto label_101f00;
        case 0x101f04u: goto label_101f04;
        case 0x101f08u: goto label_101f08;
        case 0x101f0cu: goto label_101f0c;
        case 0x101f10u: goto label_101f10;
        case 0x101f14u: goto label_101f14;
        case 0x101f18u: goto label_101f18;
        case 0x101f1cu: goto label_101f1c;
        case 0x101f20u: goto label_101f20;
        case 0x101f24u: goto label_101f24;
        case 0x101f28u: goto label_101f28;
        case 0x101f2cu: goto label_101f2c;
        case 0x101f30u: goto label_101f30;
        case 0x101f34u: goto label_101f34;
        case 0x101f38u: goto label_101f38;
        case 0x101f3cu: goto label_101f3c;
        case 0x101f40u: goto label_101f40;
        case 0x101f44u: goto label_101f44;
        case 0x101f48u: goto label_101f48;
        case 0x101f4cu: goto label_101f4c;
        case 0x101f50u: goto label_101f50;
        case 0x101f54u: goto label_101f54;
        case 0x101f58u: goto label_101f58;
        case 0x101f5cu: goto label_101f5c;
        case 0x101f60u: goto label_101f60;
        case 0x101f64u: goto label_101f64;
        case 0x101f68u: goto label_101f68;
        case 0x101f6cu: goto label_101f6c;
        case 0x101f70u: goto label_101f70;
        case 0x101f74u: goto label_101f74;
        case 0x101f78u: goto label_101f78;
        case 0x101f7cu: goto label_101f7c;
        case 0x101f80u: goto label_101f80;
        case 0x101f84u: goto label_101f84;
        case 0x101f88u: goto label_101f88;
        case 0x101f8cu: goto label_101f8c;
        case 0x101f90u: goto label_101f90;
        case 0x101f94u: goto label_101f94;
        case 0x101f98u: goto label_101f98;
        case 0x101f9cu: goto label_101f9c;
        case 0x101fa0u: goto label_101fa0;
        case 0x101fa4u: goto label_101fa4;
        default: break;
    }

    ctx->pc = 0x101de0u;

label_101de0:
    // 0x101de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_101de4:
    // 0x101de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101de8:
    // 0x101de8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x101de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_101dec:
    // 0x101dec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x101decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101df0:
    // 0x101df0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x101df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_101df4:
    // 0x101df4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x101df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_101df8:
    // 0x101df8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x101df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_101dfc:
    // 0x101dfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x101dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_101e00:
    // 0x101e00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x101e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_101e04:
    // 0x101e04: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x101e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_101e08:
    // 0x101e08: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x101e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_101e0c:
    // 0x101e0c: 0x1482003e  bne         $a0, $v0, . + 4 + (0x3E << 2)
label_101e10:
    if (ctx->pc == 0x101E10u) {
        ctx->pc = 0x101E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E0Cu;
        // 0x101e10: 0x8c720044  lw          $s2, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E14u;
        goto label_101e14;
    }
    ctx->pc = 0x101E0Cu;
    {
        const bool branch_taken_0x101e0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x101E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E0Cu;
        // 0x101e10: 0x8c720044  lw          $s2, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e0c) {
            ctx->pc = 0x101F08u;
            goto label_101f08;
        }
    }
    ctx->pc = 0x101E14u;
label_101e14:
    // 0x101e14: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x101e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_101e18:
    // 0x101e18: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_101e1c:
    if (ctx->pc == 0x101E1Cu) {
        ctx->pc = 0x101E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E18u;
        // 0x101e1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E20u;
        goto label_101e20;
    }
    ctx->pc = 0x101E18u;
    {
        const bool branch_taken_0x101e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101e18) {
            ctx->pc = 0x101E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101E18u;
            // 0x101e1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101E8Cu;
            goto label_101e8c;
        }
    }
    ctx->pc = 0x101E20u;
label_101e20:
    // 0x101e20: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x101e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_101e24:
    // 0x101e24: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x101e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_101e28:
    // 0x101e28: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_101e2c:
    if (ctx->pc == 0x101E2Cu) {
        ctx->pc = 0x101E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E28u;
        // 0x101e2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E30u;
        goto label_101e30;
    }
    ctx->pc = 0x101E28u;
    {
        const bool branch_taken_0x101e28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E28u;
        // 0x101e2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e28) {
            ctx->pc = 0x101E7Cu;
            goto label_101e7c;
        }
    }
    ctx->pc = 0x101E30u;
label_101e30:
    // 0x101e30: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x101e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_101e34:
    // 0x101e34: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x101e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_101e38:
    // 0x101e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101e3c:
    // 0x101e3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101e40:
    // 0x101e40: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x101e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_101e44:
    // 0x101e44: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_101e48:
    if (ctx->pc == 0x101E48u) {
        ctx->pc = 0x101E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E44u;
        // 0x101e48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E4Cu;
        goto label_101e4c;
    }
    ctx->pc = 0x101E44u;
    {
        const bool branch_taken_0x101e44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E44u;
        // 0x101e48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e44) {
            ctx->pc = 0x101E68u;
            goto label_101e68;
        }
    }
    ctx->pc = 0x101E4Cu;
label_101e4c:
    // 0x101e4c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x101e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_101e50:
    // 0x101e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101e54:
    // 0x101e54: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x101e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_101e58:
    // 0x101e58: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x101e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_101e5c:
    // 0x101e5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x101e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_101e60:
    // 0x101e60: 0x60f809  jalr        $v1
label_101e64:
    if (ctx->pc == 0x101E64u) {
        ctx->pc = 0x101E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E60u;
        // 0x101e64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E68u;
        goto label_101e68;
    }
    ctx->pc = 0x101E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x101E68u);
        ctx->pc = 0x101E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E60u;
        // 0x101e64: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101E60u, 0x101E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101E68u;
label_101e68:
    // 0x101e68: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x101e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_101e6c:
    // 0x101e6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x101e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_101e70:
    // 0x101e70: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x101e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_101e74:
    // 0x101e74: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_101e78:
    if (ctx->pc == 0x101E78u) {
        ctx->pc = 0x101E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E74u;
        // 0x101e78: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E7Cu;
        goto label_101e7c;
    }
    ctx->pc = 0x101E74u;
    {
        const bool branch_taken_0x101e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E74u;
        // 0x101e78: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e74) {
            ctx->pc = 0x101E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101e30;
        }
    }
    ctx->pc = 0x101E7Cu;
label_101e7c:
    // 0x101e7c: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x101e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_101e80:
    // 0x101e80: 0xc067f04  jal         func_19FC10
label_101e84:
    if (ctx->pc == 0x101E84u) {
        ctx->pc = 0x101E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E80u;
        // 0x101e84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E88u;
        goto label_101e88;
    }
    ctx->pc = 0x101E80u;
    SET_GPR_U32(ctx, 31, 0x101E88u);
    ctx->pc = 0x101E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E80u;
    // 0x101e84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x101E80u, 0x101E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E88u;
label_101e88:
    // 0x101e88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_101e8c:
    // 0x101e8c: 0xc06a26e  jal         func_1A89B8
label_101e90:
    if (ctx->pc == 0x101E90u) {
        ctx->pc = 0x101E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E8Cu;
        // 0x101e90: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101E94u;
        goto label_101e94;
    }
    ctx->pc = 0x101E8Cu;
    SET_GPR_U32(ctx, 31, 0x101E94u);
    ctx->pc = 0x101E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101E8Cu;
    // 0x101e90: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101E8Cu, 0x101E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E94u;
label_101e94:
    // 0x101e94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x101e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101e98:
    // 0x101e98: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x101e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_101e9c:
    // 0x101e9c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_101ea0:
    if (ctx->pc == 0x101EA0u) {
        ctx->pc = 0x101EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E9Cu;
        // 0x101ea0: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101EA4u;
        goto label_101ea4;
    }
    ctx->pc = 0x101E9Cu;
    {
        const bool branch_taken_0x101e9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E9Cu;
        // 0x101ea0: 0x228c0  sll         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e9c) {
            ctx->pc = 0x101EA8u;
            goto label_101ea8;
        }
    }
    ctx->pc = 0x101EA4u;
label_101ea4:
    // 0x101ea4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x101ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_101ea8:
    // 0x101ea8: 0xc068086  jal         func_1A0218
label_101eac:
    if (ctx->pc == 0x101EACu) {
        ctx->pc = 0x101EB0u;
        goto label_101eb0;
    }
    ctx->pc = 0x101EA8u;
    SET_GPR_U32(ctx, 31, 0x101EB0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x101EA8u, 0x101EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EB0u;
label_101eb0:
    // 0x101eb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_101eb4:
    if (ctx->pc == 0x101EB4u) {
        ctx->pc = 0x101EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EB0u;
        // 0x101eb4: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101EB8u;
        goto label_101eb8;
    }
    ctx->pc = 0x101EB0u;
    {
        const bool branch_taken_0x101eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EB0u;
        // 0x101eb4: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101eb0) {
            ctx->pc = 0x101ECCu;
            goto label_101ecc;
        }
    }
    ctx->pc = 0x101EB8u;
label_101eb8:
    // 0x101eb8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x101eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_101ebc:
    // 0x101ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101ec0:
    // 0x101ec0: 0x24a51b10  addiu       $a1, $a1, 0x1B10
    ctx->pc = 0x101ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6928));
label_101ec4:
    // 0x101ec4: 0xc068186  jal         func_1A0618
label_101ec8:
    if (ctx->pc == 0x101EC8u) {
        ctx->pc = 0x101EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EC4u;
        // 0x101ec8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101ECCu;
        goto label_101ecc;
    }
    ctx->pc = 0x101EC4u;
    SET_GPR_U32(ctx, 31, 0x101ECCu);
    ctx->pc = 0x101EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EC4u;
    // 0x101ec8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x101EC4u, 0x101ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101ECCu;
label_101ecc:
    // 0x101ecc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x101eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_101ed0:
    // 0x101ed0: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
label_101ed4:
    if (ctx->pc == 0x101ED4u) {
        ctx->pc = 0x101ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101ED0u;
        // 0x101ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101ED8u;
        goto label_101ed8;
    }
    ctx->pc = 0x101ED0u;
    {
        const bool branch_taken_0x101ed0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101ED0u;
        // 0x101ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ed0) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101ED8u;
label_101ed8:
    // 0x101ed8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x101ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_101edc:
    // 0x101edc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x101edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101ee0:
    // 0x101ee0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x101ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_101ee4:
    // 0x101ee4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x101ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_101ee8:
    // 0x101ee8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x101ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_101eec:
    // 0x101eec: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x101eecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_101ef0:
    // 0x101ef0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_101ef4:
    // 0x101ef4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_101ef8:
    if (ctx->pc == 0x101EF8u) {
        ctx->pc = 0x101EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EF4u;
        // 0x101ef8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101EFCu;
        goto label_101efc;
    }
    ctx->pc = 0x101EF4u;
    {
        const bool branch_taken_0x101ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EF4u;
        // 0x101ef8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ef4) {
            ctx->pc = 0x101EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101ee0;
        }
    }
    ctx->pc = 0x101EFCu;
label_101efc:
    // 0x101efc: 0x10000023  b           . + 4 + (0x23 << 2)
label_101f00:
    if (ctx->pc == 0x101F00u) {
        ctx->pc = 0x101F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EFCu;
        // 0x101f00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F04u;
        goto label_101f04;
    }
    ctx->pc = 0x101EFCu;
    {
        const bool branch_taken_0x101efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EFCu;
        // 0x101f00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101efc) {
            ctx->pc = 0x101F8Cu;
            goto label_101f8c;
        }
    }
    ctx->pc = 0x101F04u;
label_101f04:
    // 0x101f04: 0x0  nop
    ctx->pc = 0x101f04u;
    // NOP
label_101f08:
    // 0x101f08: 0xc06a26e  jal         func_1A89B8
label_101f0c:
    if (ctx->pc == 0x101F0Cu) {
        ctx->pc = 0x101F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F08u;
        // 0x101f0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F10u;
        goto label_101f10;
    }
    ctx->pc = 0x101F08u;
    SET_GPR_U32(ctx, 31, 0x101F10u);
    ctx->pc = 0x101F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F08u;
    // 0x101f0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101F08u, 0x101F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F10u;
label_101f10:
    // 0x101f10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_101f14:
    // 0x101f14: 0xc06a26e  jal         func_1A89B8
label_101f18:
    if (ctx->pc == 0x101F18u) {
        ctx->pc = 0x101F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F14u;
        // 0x101f18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F1Cu;
        goto label_101f1c;
    }
    ctx->pc = 0x101F14u;
    SET_GPR_U32(ctx, 31, 0x101F1Cu);
    ctx->pc = 0x101F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F14u;
    // 0x101f18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101F14u, 0x101F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F1Cu;
label_101f1c:
    // 0x101f1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x101f1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101f20:
    // 0x101f20: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_101f24:
    if (ctx->pc == 0x101F24u) {
        ctx->pc = 0x101F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F20u;
        // 0x101f24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F28u;
        goto label_101f28;
    }
    ctx->pc = 0x101F20u;
    {
        const bool branch_taken_0x101f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F20u;
        // 0x101f24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f20) {
            ctx->pc = 0x101F68u;
            goto label_101f68;
        }
    }
    ctx->pc = 0x101F28u;
label_101f28:
    // 0x101f28: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x101f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_101f2c:
    // 0x101f2c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x101f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_101f30:
    // 0x101f30: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x101f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101f34:
    // 0x101f34: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x101f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_101f38:
    // 0x101f38: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_101f3c:
    if (ctx->pc == 0x101F3Cu) {
        ctx->pc = 0x101F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F38u;
        // 0x101f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F40u;
        goto label_101f40;
    }
    ctx->pc = 0x101F38u;
    {
        const bool branch_taken_0x101f38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F38u;
        // 0x101f3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f38) {
            ctx->pc = 0x101F58u;
            goto label_101f58;
        }
    }
    ctx->pc = 0x101F40u;
label_101f40:
    // 0x101f40: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x101f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_101f44:
    // 0x101f44: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x101f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_101f48:
    // 0x101f48: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x101f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_101f4c:
    // 0x101f4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x101f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_101f50:
    // 0x101f50: 0x60f809  jalr        $v1
label_101f54:
    if (ctx->pc == 0x101F54u) {
        ctx->pc = 0x101F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F50u;
        // 0x101f54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F58u;
        goto label_101f58;
    }
    ctx->pc = 0x101F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x101F58u);
        ctx->pc = 0x101F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F50u;
        // 0x101f54: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101F50u, 0x101F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101F58u;
label_101f58:
    // 0x101f58: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x101f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_101f5c:
    // 0x101f5c: 0x1000000a  b           . + 4 + (0xA << 2)
label_101f60:
    if (ctx->pc == 0x101F60u) {
        ctx->pc = 0x101F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F5Cu;
        // 0x101f60: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F64u;
        goto label_101f64;
    }
    ctx->pc = 0x101F5Cu;
    {
        const bool branch_taken_0x101f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F5Cu;
        // 0x101f60: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f5c) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101F64u;
label_101f64:
    // 0x101f64: 0x0  nop
    ctx->pc = 0x101f64u;
    // NOP
label_101f68:
    // 0x101f68: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_101f6c:
    if (ctx->pc == 0x101F6Cu) {
        ctx->pc = 0x101F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F68u;
        // 0x101f6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F70u;
        goto label_101f70;
    }
    ctx->pc = 0x101F68u;
    {
        const bool branch_taken_0x101f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x101f68) {
            ctx->pc = 0x101F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101F68u;
            // 0x101f6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101F8Cu;
            goto label_101f8c;
        }
    }
    ctx->pc = 0x101F70u;
label_101f70:
    // 0x101f70: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x101f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_101f74:
    // 0x101f74: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x101f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_101f78:
    // 0x101f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101f7c:
    // 0x101f7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x101f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_101f80:
    // 0x101f80: 0xc04171a  jal         func_105C68
label_101f84:
    if (ctx->pc == 0x101F84u) {
        ctx->pc = 0x101F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F80u;
        // 0x101f84: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x101F88u;
        goto label_101f88;
    }
    ctx->pc = 0x101F80u;
    SET_GPR_U32(ctx, 31, 0x101F88u);
    ctx->pc = 0x101F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F80u;
    // 0x101f84: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x101F80u, 0x101F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F88u;
label_101f88:
    // 0x101f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101f8c:
    // 0x101f8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x101f8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_101f90:
    // 0x101f90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101f90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101f94:
    // 0x101f94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101f94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_101f98:
    // 0x101f98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101f98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_101f9c:
    // 0x101f9c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x101f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_101fa0:
    // 0x101fa0: 0x3e00008  jr          $ra
label_101fa4:
    if (ctx->pc == 0x101FA4u) {
        ctx->pc = 0x101FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FA0u;
        // 0x101fa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101FA8u;
        goto label_fallthrough_0x101fa0;
    }
    ctx->pc = 0x101FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FA0u;
        // 0x101fa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x101fa0:
    ctx->pc = 0x101FA8u;
}
