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

// Function: Cmd_USE_PARTS_Entry__FP15BsSCDEntControl
// Address: 0x102e80 - 0x103098
void Cmd_USE_PARTS_Entry__FP15BsSCDEntControl_0x102e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_USE_PARTS_Entry__FP15BsSCDEntControl_0x102e80");
#endif

    switch (ctx->pc) {
        case 0x102e80u: goto label_102e80;
        case 0x102e84u: goto label_102e84;
        case 0x102e88u: goto label_102e88;
        case 0x102e8cu: goto label_102e8c;
        case 0x102e90u: goto label_102e90;
        case 0x102e94u: goto label_102e94;
        case 0x102e98u: goto label_102e98;
        case 0x102e9cu: goto label_102e9c;
        case 0x102ea0u: goto label_102ea0;
        case 0x102ea4u: goto label_102ea4;
        case 0x102ea8u: goto label_102ea8;
        case 0x102eacu: goto label_102eac;
        case 0x102eb0u: goto label_102eb0;
        case 0x102eb4u: goto label_102eb4;
        case 0x102eb8u: goto label_102eb8;
        case 0x102ebcu: goto label_102ebc;
        case 0x102ec0u: goto label_102ec0;
        case 0x102ec4u: goto label_102ec4;
        case 0x102ec8u: goto label_102ec8;
        case 0x102eccu: goto label_102ecc;
        case 0x102ed0u: goto label_102ed0;
        case 0x102ed4u: goto label_102ed4;
        case 0x102ed8u: goto label_102ed8;
        case 0x102edcu: goto label_102edc;
        case 0x102ee0u: goto label_102ee0;
        case 0x102ee4u: goto label_102ee4;
        case 0x102ee8u: goto label_102ee8;
        case 0x102eecu: goto label_102eec;
        case 0x102ef0u: goto label_102ef0;
        case 0x102ef4u: goto label_102ef4;
        case 0x102ef8u: goto label_102ef8;
        case 0x102efcu: goto label_102efc;
        case 0x102f00u: goto label_102f00;
        case 0x102f04u: goto label_102f04;
        case 0x102f08u: goto label_102f08;
        case 0x102f0cu: goto label_102f0c;
        case 0x102f10u: goto label_102f10;
        case 0x102f14u: goto label_102f14;
        case 0x102f18u: goto label_102f18;
        case 0x102f1cu: goto label_102f1c;
        case 0x102f20u: goto label_102f20;
        case 0x102f24u: goto label_102f24;
        case 0x102f28u: goto label_102f28;
        case 0x102f2cu: goto label_102f2c;
        case 0x102f30u: goto label_102f30;
        case 0x102f34u: goto label_102f34;
        case 0x102f38u: goto label_102f38;
        case 0x102f3cu: goto label_102f3c;
        case 0x102f40u: goto label_102f40;
        case 0x102f44u: goto label_102f44;
        case 0x102f48u: goto label_102f48;
        case 0x102f4cu: goto label_102f4c;
        case 0x102f50u: goto label_102f50;
        case 0x102f54u: goto label_102f54;
        case 0x102f58u: goto label_102f58;
        case 0x102f5cu: goto label_102f5c;
        case 0x102f60u: goto label_102f60;
        case 0x102f64u: goto label_102f64;
        case 0x102f68u: goto label_102f68;
        case 0x102f6cu: goto label_102f6c;
        case 0x102f70u: goto label_102f70;
        case 0x102f74u: goto label_102f74;
        case 0x102f78u: goto label_102f78;
        case 0x102f7cu: goto label_102f7c;
        case 0x102f80u: goto label_102f80;
        case 0x102f84u: goto label_102f84;
        case 0x102f88u: goto label_102f88;
        case 0x102f8cu: goto label_102f8c;
        case 0x102f90u: goto label_102f90;
        case 0x102f94u: goto label_102f94;
        case 0x102f98u: goto label_102f98;
        case 0x102f9cu: goto label_102f9c;
        case 0x102fa0u: goto label_102fa0;
        case 0x102fa4u: goto label_102fa4;
        case 0x102fa8u: goto label_102fa8;
        case 0x102facu: goto label_102fac;
        case 0x102fb0u: goto label_102fb0;
        case 0x102fb4u: goto label_102fb4;
        case 0x102fb8u: goto label_102fb8;
        case 0x102fbcu: goto label_102fbc;
        case 0x102fc0u: goto label_102fc0;
        case 0x102fc4u: goto label_102fc4;
        case 0x102fc8u: goto label_102fc8;
        case 0x102fccu: goto label_102fcc;
        case 0x102fd0u: goto label_102fd0;
        case 0x102fd4u: goto label_102fd4;
        case 0x102fd8u: goto label_102fd8;
        case 0x102fdcu: goto label_102fdc;
        case 0x102fe0u: goto label_102fe0;
        case 0x102fe4u: goto label_102fe4;
        case 0x102fe8u: goto label_102fe8;
        case 0x102fecu: goto label_102fec;
        case 0x102ff0u: goto label_102ff0;
        case 0x102ff4u: goto label_102ff4;
        case 0x102ff8u: goto label_102ff8;
        case 0x102ffcu: goto label_102ffc;
        case 0x103000u: goto label_103000;
        case 0x103004u: goto label_103004;
        case 0x103008u: goto label_103008;
        case 0x10300cu: goto label_10300c;
        case 0x103010u: goto label_103010;
        case 0x103014u: goto label_103014;
        case 0x103018u: goto label_103018;
        case 0x10301cu: goto label_10301c;
        case 0x103020u: goto label_103020;
        case 0x103024u: goto label_103024;
        case 0x103028u: goto label_103028;
        case 0x10302cu: goto label_10302c;
        case 0x103030u: goto label_103030;
        case 0x103034u: goto label_103034;
        case 0x103038u: goto label_103038;
        case 0x10303cu: goto label_10303c;
        case 0x103040u: goto label_103040;
        case 0x103044u: goto label_103044;
        case 0x103048u: goto label_103048;
        case 0x10304cu: goto label_10304c;
        case 0x103050u: goto label_103050;
        case 0x103054u: goto label_103054;
        case 0x103058u: goto label_103058;
        case 0x10305cu: goto label_10305c;
        case 0x103060u: goto label_103060;
        case 0x103064u: goto label_103064;
        case 0x103068u: goto label_103068;
        case 0x10306cu: goto label_10306c;
        case 0x103070u: goto label_103070;
        case 0x103074u: goto label_103074;
        case 0x103078u: goto label_103078;
        case 0x10307cu: goto label_10307c;
        case 0x103080u: goto label_103080;
        case 0x103084u: goto label_103084;
        case 0x103088u: goto label_103088;
        case 0x10308cu: goto label_10308c;
        case 0x103090u: goto label_103090;
        case 0x103094u: goto label_103094;
        default: break;
    }

    ctx->pc = 0x102e80u;

label_102e80:
    // 0x102e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_102e84:
    // 0x102e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102e88:
    // 0x102e88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x102e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_102e8c:
    // 0x102e8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x102e8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_102e90:
    // 0x102e90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_102e94:
    // 0x102e94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x102e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_102e98:
    // 0x102e98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x102e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_102e9c:
    // 0x102e9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x102e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_102ea0:
    // 0x102ea0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x102ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_102ea4:
    // 0x102ea4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x102ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_102ea8:
    // 0x102ea8: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x102ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_102eac:
    // 0x102eac: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x102eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_102eb0:
    // 0x102eb0: 0x1482004b  bne         $a0, $v0, . + 4 + (0x4B << 2)
label_102eb4:
    if (ctx->pc == 0x102EB4u) {
        ctx->pc = 0x102EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EB0u;
        // 0x102eb4: 0x8c720044  lw          $s2, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EB8u;
        goto label_102eb8;
    }
    ctx->pc = 0x102EB0u;
    {
        const bool branch_taken_0x102eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x102EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EB0u;
        // 0x102eb4: 0x8c720044  lw          $s2, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102eb0) {
            ctx->pc = 0x102FE0u;
            goto label_102fe0;
        }
    }
    ctx->pc = 0x102EB8u;
label_102eb8:
    // 0x102eb8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x102eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_102ebc:
    // 0x102ebc: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_102ec0:
    if (ctx->pc == 0x102EC0u) {
        ctx->pc = 0x102EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EBCu;
        // 0x102ec0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EC4u;
        goto label_102ec4;
    }
    ctx->pc = 0x102EBCu;
    {
        const bool branch_taken_0x102ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102ebc) {
            ctx->pc = 0x102EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102EBCu;
            // 0x102ec0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102F60u;
            goto label_102f60;
        }
    }
    ctx->pc = 0x102EC4u;
label_102ec4:
    // 0x102ec4: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x102ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_102ec8:
    // 0x102ec8: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x102ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_102ecc:
    // 0x102ecc: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
label_102ed0:
    if (ctx->pc == 0x102ED0u) {
        ctx->pc = 0x102ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102ECCu;
        // 0x102ed0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102ED4u;
        goto label_102ed4;
    }
    ctx->pc = 0x102ECCu;
    {
        const bool branch_taken_0x102ecc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x102ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102ECCu;
        // 0x102ed0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ecc) {
            ctx->pc = 0x102F50u;
            goto label_102f50;
        }
    }
    ctx->pc = 0x102ED4u;
label_102ed4:
    // 0x102ed4: 0x0  nop
    ctx->pc = 0x102ed4u;
    // NOP
label_102ed8:
    // 0x102ed8: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x102ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_102edc:
    // 0x102edc: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x102edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_102ee0:
    // 0x102ee0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x102ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_102ee4:
    // 0x102ee4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x102ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_102ee8:
    // 0x102ee8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x102ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_102eec:
    // 0x102eec: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_102ef0:
    if (ctx->pc == 0x102EF0u) {
        ctx->pc = 0x102EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EECu;
        // 0x102ef0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102EF4u;
        goto label_102ef4;
    }
    ctx->pc = 0x102EECu;
    {
        const bool branch_taken_0x102eec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102EECu;
        // 0x102ef0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102eec) {
            ctx->pc = 0x102F10u;
            goto label_102f10;
        }
    }
    ctx->pc = 0x102EF4u;
label_102ef4:
    // 0x102ef4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102ef8:
    // 0x102ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x102ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102efc:
    // 0x102efc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102f00:
    // 0x102f00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102f04:
    // 0x102f04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x102f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_102f08:
    // 0x102f08: 0x60f809  jalr        $v1
label_102f0c:
    if (ctx->pc == 0x102F0Cu) {
        ctx->pc = 0x102F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F08u;
        // 0x102f0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F10u;
        goto label_102f10;
    }
    ctx->pc = 0x102F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102F10u);
        ctx->pc = 0x102F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F08u;
        // 0x102f0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102F08u, 0x102F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102F10u;
label_102f10:
    // 0x102f10: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x102f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_102f14:
    // 0x102f14: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_102f18:
    if (ctx->pc == 0x102F18u) {
        ctx->pc = 0x102F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F14u;
        // 0x102f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F1Cu;
        goto label_102f1c;
    }
    ctx->pc = 0x102F14u;
    {
        const bool branch_taken_0x102f14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F14u;
        // 0x102f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f14) {
            ctx->pc = 0x102F34u;
            goto label_102f34;
        }
    }
    ctx->pc = 0x102F1Cu;
label_102f1c:
    // 0x102f1c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x102f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_102f20:
    // 0x102f20: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x102f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_102f24:
    // 0x102f24: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x102f24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_102f28:
    // 0x102f28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x102f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_102f2c:
    // 0x102f2c: 0x60f809  jalr        $v1
label_102f30:
    if (ctx->pc == 0x102F30u) {
        ctx->pc = 0x102F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F2Cu;
        // 0x102f30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F34u;
        goto label_102f34;
    }
    ctx->pc = 0x102F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x102F34u);
        ctx->pc = 0x102F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F2Cu;
        // 0x102f30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102F2Cu, 0x102F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102F34u;
label_102f34:
    // 0x102f34: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x102f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_102f38:
    // 0x102f38: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x102f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_102f3c:
    // 0x102f3c: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x102f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_102f40:
    // 0x102f40: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x102f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_102f44:
    // 0x102f44: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x102f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_102f48:
    // 0x102f48: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_102f4c:
    if (ctx->pc == 0x102F4Cu) {
        ctx->pc = 0x102F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F48u;
        // 0x102f4c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F50u;
        goto label_102f50;
    }
    ctx->pc = 0x102F48u;
    {
        const bool branch_taken_0x102f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F48u;
        // 0x102f4c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f48) {
            ctx->pc = 0x102ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102ed8;
        }
    }
    ctx->pc = 0x102F50u;
label_102f50:
    // 0x102f50: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x102f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_102f54:
    // 0x102f54: 0xc067f04  jal         func_19FC10
label_102f58:
    if (ctx->pc == 0x102F58u) {
        ctx->pc = 0x102F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F54u;
        // 0x102f58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F5Cu;
        goto label_102f5c;
    }
    ctx->pc = 0x102F54u;
    SET_GPR_U32(ctx, 31, 0x102F5Cu);
    ctx->pc = 0x102F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F54u;
    // 0x102f58: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x102F54u, 0x102F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F5Cu;
label_102f5c:
    // 0x102f5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x102f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_102f60:
    // 0x102f60: 0xc06a26e  jal         func_1A89B8
label_102f64:
    if (ctx->pc == 0x102F64u) {
        ctx->pc = 0x102F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F60u;
        // 0x102f64: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F68u;
        goto label_102f68;
    }
    ctx->pc = 0x102F60u;
    SET_GPR_U32(ctx, 31, 0x102F68u);
    ctx->pc = 0x102F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F60u;
    // 0x102f64: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x102F60u, 0x102F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F68u;
label_102f68:
    // 0x102f68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102f6c:
    // 0x102f6c: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x102f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_102f70:
    // 0x102f70: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_102f74:
    if (ctx->pc == 0x102F74u) {
        ctx->pc = 0x102F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F70u;
        // 0x102f74: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F78u;
        goto label_102f78;
    }
    ctx->pc = 0x102F70u;
    {
        const bool branch_taken_0x102f70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x102F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F70u;
        // 0x102f74: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f70) {
            ctx->pc = 0x102F7Cu;
            goto label_102f7c;
        }
    }
    ctx->pc = 0x102F78u;
label_102f78:
    // 0x102f78: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x102f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_102f7c:
    // 0x102f7c: 0xc068086  jal         func_1A0218
label_102f80:
    if (ctx->pc == 0x102F80u) {
        ctx->pc = 0x102F84u;
        goto label_102f84;
    }
    ctx->pc = 0x102F7Cu;
    SET_GPR_U32(ctx, 31, 0x102F84u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x102F7Cu, 0x102F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102F84u;
label_102f84:
    // 0x102f84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_102f88:
    if (ctx->pc == 0x102F88u) {
        ctx->pc = 0x102F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F84u;
        // 0x102f88: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102F8Cu;
        goto label_102f8c;
    }
    ctx->pc = 0x102F84u;
    {
        const bool branch_taken_0x102f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F84u;
        // 0x102f88: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f84) {
            ctx->pc = 0x102FA0u;
            goto label_102fa0;
        }
    }
    ctx->pc = 0x102F8Cu;
label_102f8c:
    // 0x102f8c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_102f90:
    // 0x102f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_102f94:
    // 0x102f94: 0x24a51ba0  addiu       $a1, $a1, 0x1BA0
    ctx->pc = 0x102f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7072));
label_102f98:
    // 0x102f98: 0xc068186  jal         func_1A0618
label_102f9c:
    if (ctx->pc == 0x102F9Cu) {
        ctx->pc = 0x102F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F98u;
        // 0x102f9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FA0u;
        goto label_102fa0;
    }
    ctx->pc = 0x102F98u;
    SET_GPR_U32(ctx, 31, 0x102FA0u);
    ctx->pc = 0x102F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102F98u;
    // 0x102f9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x102F98u, 0x102FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FA0u;
label_102fa0:
    // 0x102fa0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x102fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_102fa4:
    // 0x102fa4: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
label_102fa8:
    if (ctx->pc == 0x102FA8u) {
        ctx->pc = 0x102FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FA4u;
        // 0x102fa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FACu;
        goto label_102fac;
    }
    ctx->pc = 0x102FA4u;
    {
        const bool branch_taken_0x102fa4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x102FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FA4u;
        // 0x102fa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fa4) {
            ctx->pc = 0x103074u;
            goto label_103074;
        }
    }
    ctx->pc = 0x102FACu;
label_102fac:
    // 0x102fac: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x102facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_102fb0:
    // 0x102fb0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x102fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_102fb4:
    // 0x102fb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x102fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_102fb8:
    // 0x102fb8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x102fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_102fbc:
    // 0x102fbc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x102fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_102fc0:
    // 0x102fc0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x102fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_102fc4:
    // 0x102fc4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x102fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_102fc8:
    // 0x102fc8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x102fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_102fcc:
    // 0x102fcc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x102fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_102fd0:
    // 0x102fd0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_102fd4:
    if (ctx->pc == 0x102FD4u) {
        ctx->pc = 0x102FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FD0u;
        // 0x102fd4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FD8u;
        goto label_102fd8;
    }
    ctx->pc = 0x102FD0u;
    {
        const bool branch_taken_0x102fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FD0u;
        // 0x102fd4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fd0) {
            ctx->pc = 0x102FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102fb0;
        }
    }
    ctx->pc = 0x102FD8u;
label_102fd8:
    // 0x102fd8: 0x10000027  b           . + 4 + (0x27 << 2)
label_102fdc:
    if (ctx->pc == 0x102FDCu) {
        ctx->pc = 0x102FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FD8u;
        // 0x102fdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FE0u;
        goto label_102fe0;
    }
    ctx->pc = 0x102FD8u;
    {
        const bool branch_taken_0x102fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FD8u;
        // 0x102fdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fd8) {
            ctx->pc = 0x103078u;
            goto label_103078;
        }
    }
    ctx->pc = 0x102FE0u;
label_102fe0:
    // 0x102fe0: 0xc06a26e  jal         func_1A89B8
label_102fe4:
    if (ctx->pc == 0x102FE4u) {
        ctx->pc = 0x102FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FE0u;
        // 0x102fe4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FE8u;
        goto label_102fe8;
    }
    ctx->pc = 0x102FE0u;
    SET_GPR_U32(ctx, 31, 0x102FE8u);
    ctx->pc = 0x102FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102FE0u;
    // 0x102fe4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x102FE0u, 0x102FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FE8u;
label_102fe8:
    // 0x102fe8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x102fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_102fec:
    // 0x102fec: 0xc06a26e  jal         func_1A89B8
label_102ff0:
    if (ctx->pc == 0x102FF0u) {
        ctx->pc = 0x102FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FECu;
        // 0x102ff0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102FF4u;
        goto label_102ff4;
    }
    ctx->pc = 0x102FECu;
    SET_GPR_U32(ctx, 31, 0x102FF4u);
    ctx->pc = 0x102FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102FECu;
    // 0x102ff0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x102FECu, 0x102FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FF4u;
label_102ff4:
    // 0x102ff4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x102ff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102ff8:
    // 0x102ff8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_102ffc:
    if (ctx->pc == 0x102FFCu) {
        ctx->pc = 0x102FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FF8u;
        // 0x102ffc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103000u;
        goto label_103000;
    }
    ctx->pc = 0x102FF8u;
    {
        const bool branch_taken_0x102ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x102FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FF8u;
        // 0x102ffc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ff8) {
            ctx->pc = 0x103030u;
            goto label_103030;
        }
    }
    ctx->pc = 0x103000u;
label_103000:
    // 0x103000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x103000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103004:
    // 0x103004: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_103008:
    // 0x103008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x103008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10300c:
    // 0x10300c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10300cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103010:
    // 0x103010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_103014:
    // 0x103014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x103014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103018:
    // 0x103018: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_10301c:
    // 0x10301c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10301cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_103020:
    // 0x103020: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x103020u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_103024:
    // 0x103024: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x103024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_103028:
    // 0x103028: 0x8040b62  j           func_102D88
label_10302c:
    if (ctx->pc == 0x10302Cu) {
        ctx->pc = 0x10302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103028u;
        // 0x10302c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103030u;
        goto label_103030;
    }
    ctx->pc = 0x103028u;
    ctx->pc = 0x10302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103028u;
    // 0x10302c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102D88u;
    PartsLoadDestroy__9ApcObjRscib_0x102d88(rdram, ctx, runtime); return;
    ctx->pc = 0x103030u;
label_103030:
    // 0x103030: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_103034:
    if (ctx->pc == 0x103034u) {
        ctx->pc = 0x103034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103030u;
        // 0x103034: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103038u;
        goto label_103038;
    }
    ctx->pc = 0x103030u;
    {
        const bool branch_taken_0x103030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x103030) {
            ctx->pc = 0x103034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103030u;
            // 0x103034: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103078u;
            goto label_103078;
        }
    }
    ctx->pc = 0x103038u;
label_103038:
    // 0x103038: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x103038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_10303c:
    // 0x10303c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x10303cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_103040:
    // 0x103040: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x103040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_103044:
    // 0x103044: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x103044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_103048:
    // 0x103048: 0xc04171a  jal         func_105C68
label_10304c:
    if (ctx->pc == 0x10304Cu) {
        ctx->pc = 0x10304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103048u;
        // 0x10304c: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x103050u;
        goto label_103050;
    }
    ctx->pc = 0x103048u;
    SET_GPR_U32(ctx, 31, 0x103050u);
    ctx->pc = 0x10304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103048u;
    // 0x10304c: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x103048u, 0x103050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103050u;
label_103050:
    // 0x103050: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x103050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_103054:
    // 0x103054: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x103054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_103058:
    // 0x103058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10305c:
    // 0x10305c: 0x50440006  beql        $v0, $a0, . + 4 + (0x6 << 2)
label_103060:
    if (ctx->pc == 0x103060u) {
        ctx->pc = 0x103060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10305Cu;
        // 0x103060: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103064u;
        goto label_103064;
    }
    ctx->pc = 0x10305Cu;
    {
        const bool branch_taken_0x10305c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x10305c) {
            ctx->pc = 0x103060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10305Cu;
            // 0x103060: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103078u;
            goto label_103078;
        }
    }
    ctx->pc = 0x103064u;
label_103064:
    // 0x103064: 0xc06a250  jal         func_1A8940
label_103068:
    if (ctx->pc == 0x103068u) {
        ctx->pc = 0x103068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103064u;
        // 0x103068: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10306Cu;
        goto label_10306c;
    }
    ctx->pc = 0x103064u;
    SET_GPR_U32(ctx, 31, 0x10306Cu);
    ctx->pc = 0x103068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103064u;
    // 0x103068: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x103064u, 0x10306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10306Cu;
label_10306c:
    // 0x10306c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_103070:
    // 0x103070: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x103070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_103074:
    // 0x103074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103078:
    // 0x103078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10307c:
    // 0x10307c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10307cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_103080:
    // 0x103080: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_103084:
    // 0x103084: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x103084u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_103088:
    // 0x103088: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x103088u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_10308c:
    // 0x10308c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10308cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_103090:
    // 0x103090: 0x3e00008  jr          $ra
label_103094:
    if (ctx->pc == 0x103094u) {
        ctx->pc = 0x103094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103090u;
        // 0x103094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103098u;
        goto label_fallthrough_0x103090;
    }
    ctx->pc = 0x103090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103090u;
        // 0x103094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x103090:
    ctx->pc = 0x103098u;
}
