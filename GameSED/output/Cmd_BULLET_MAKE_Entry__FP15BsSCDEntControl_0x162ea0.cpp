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

// Function: Cmd_BULLET_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x162ea0 - 0x163110
void Cmd_BULLET_MAKE_Entry__FP15BsSCDEntControl_0x162ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_BULLET_MAKE_Entry__FP15BsSCDEntControl_0x162ea0");
#endif

    switch (ctx->pc) {
        case 0x162ea0u: goto label_162ea0;
        case 0x162ea4u: goto label_162ea4;
        case 0x162ea8u: goto label_162ea8;
        case 0x162eacu: goto label_162eac;
        case 0x162eb0u: goto label_162eb0;
        case 0x162eb4u: goto label_162eb4;
        case 0x162eb8u: goto label_162eb8;
        case 0x162ebcu: goto label_162ebc;
        case 0x162ec0u: goto label_162ec0;
        case 0x162ec4u: goto label_162ec4;
        case 0x162ec8u: goto label_162ec8;
        case 0x162eccu: goto label_162ecc;
        case 0x162ed0u: goto label_162ed0;
        case 0x162ed4u: goto label_162ed4;
        case 0x162ed8u: goto label_162ed8;
        case 0x162edcu: goto label_162edc;
        case 0x162ee0u: goto label_162ee0;
        case 0x162ee4u: goto label_162ee4;
        case 0x162ee8u: goto label_162ee8;
        case 0x162eecu: goto label_162eec;
        case 0x162ef0u: goto label_162ef0;
        case 0x162ef4u: goto label_162ef4;
        case 0x162ef8u: goto label_162ef8;
        case 0x162efcu: goto label_162efc;
        case 0x162f00u: goto label_162f00;
        case 0x162f04u: goto label_162f04;
        case 0x162f08u: goto label_162f08;
        case 0x162f0cu: goto label_162f0c;
        case 0x162f10u: goto label_162f10;
        case 0x162f14u: goto label_162f14;
        case 0x162f18u: goto label_162f18;
        case 0x162f1cu: goto label_162f1c;
        case 0x162f20u: goto label_162f20;
        case 0x162f24u: goto label_162f24;
        case 0x162f28u: goto label_162f28;
        case 0x162f2cu: goto label_162f2c;
        case 0x162f30u: goto label_162f30;
        case 0x162f34u: goto label_162f34;
        case 0x162f38u: goto label_162f38;
        case 0x162f3cu: goto label_162f3c;
        case 0x162f40u: goto label_162f40;
        case 0x162f44u: goto label_162f44;
        case 0x162f48u: goto label_162f48;
        case 0x162f4cu: goto label_162f4c;
        case 0x162f50u: goto label_162f50;
        case 0x162f54u: goto label_162f54;
        case 0x162f58u: goto label_162f58;
        case 0x162f5cu: goto label_162f5c;
        case 0x162f60u: goto label_162f60;
        case 0x162f64u: goto label_162f64;
        case 0x162f68u: goto label_162f68;
        case 0x162f6cu: goto label_162f6c;
        case 0x162f70u: goto label_162f70;
        case 0x162f74u: goto label_162f74;
        case 0x162f78u: goto label_162f78;
        case 0x162f7cu: goto label_162f7c;
        case 0x162f80u: goto label_162f80;
        case 0x162f84u: goto label_162f84;
        case 0x162f88u: goto label_162f88;
        case 0x162f8cu: goto label_162f8c;
        case 0x162f90u: goto label_162f90;
        case 0x162f94u: goto label_162f94;
        case 0x162f98u: goto label_162f98;
        case 0x162f9cu: goto label_162f9c;
        case 0x162fa0u: goto label_162fa0;
        case 0x162fa4u: goto label_162fa4;
        case 0x162fa8u: goto label_162fa8;
        case 0x162facu: goto label_162fac;
        case 0x162fb0u: goto label_162fb0;
        case 0x162fb4u: goto label_162fb4;
        case 0x162fb8u: goto label_162fb8;
        case 0x162fbcu: goto label_162fbc;
        case 0x162fc0u: goto label_162fc0;
        case 0x162fc4u: goto label_162fc4;
        case 0x162fc8u: goto label_162fc8;
        case 0x162fccu: goto label_162fcc;
        case 0x162fd0u: goto label_162fd0;
        case 0x162fd4u: goto label_162fd4;
        case 0x162fd8u: goto label_162fd8;
        case 0x162fdcu: goto label_162fdc;
        case 0x162fe0u: goto label_162fe0;
        case 0x162fe4u: goto label_162fe4;
        case 0x162fe8u: goto label_162fe8;
        case 0x162fecu: goto label_162fec;
        case 0x162ff0u: goto label_162ff0;
        case 0x162ff4u: goto label_162ff4;
        case 0x162ff8u: goto label_162ff8;
        case 0x162ffcu: goto label_162ffc;
        case 0x163000u: goto label_163000;
        case 0x163004u: goto label_163004;
        case 0x163008u: goto label_163008;
        case 0x16300cu: goto label_16300c;
        case 0x163010u: goto label_163010;
        case 0x163014u: goto label_163014;
        case 0x163018u: goto label_163018;
        case 0x16301cu: goto label_16301c;
        case 0x163020u: goto label_163020;
        case 0x163024u: goto label_163024;
        case 0x163028u: goto label_163028;
        case 0x16302cu: goto label_16302c;
        case 0x163030u: goto label_163030;
        case 0x163034u: goto label_163034;
        case 0x163038u: goto label_163038;
        case 0x16303cu: goto label_16303c;
        case 0x163040u: goto label_163040;
        case 0x163044u: goto label_163044;
        case 0x163048u: goto label_163048;
        case 0x16304cu: goto label_16304c;
        case 0x163050u: goto label_163050;
        case 0x163054u: goto label_163054;
        case 0x163058u: goto label_163058;
        case 0x16305cu: goto label_16305c;
        case 0x163060u: goto label_163060;
        case 0x163064u: goto label_163064;
        case 0x163068u: goto label_163068;
        case 0x16306cu: goto label_16306c;
        case 0x163070u: goto label_163070;
        case 0x163074u: goto label_163074;
        case 0x163078u: goto label_163078;
        case 0x16307cu: goto label_16307c;
        case 0x163080u: goto label_163080;
        case 0x163084u: goto label_163084;
        case 0x163088u: goto label_163088;
        case 0x16308cu: goto label_16308c;
        case 0x163090u: goto label_163090;
        case 0x163094u: goto label_163094;
        case 0x163098u: goto label_163098;
        case 0x16309cu: goto label_16309c;
        case 0x1630a0u: goto label_1630a0;
        case 0x1630a4u: goto label_1630a4;
        case 0x1630a8u: goto label_1630a8;
        case 0x1630acu: goto label_1630ac;
        case 0x1630b0u: goto label_1630b0;
        case 0x1630b4u: goto label_1630b4;
        case 0x1630b8u: goto label_1630b8;
        case 0x1630bcu: goto label_1630bc;
        case 0x1630c0u: goto label_1630c0;
        case 0x1630c4u: goto label_1630c4;
        case 0x1630c8u: goto label_1630c8;
        case 0x1630ccu: goto label_1630cc;
        case 0x1630d0u: goto label_1630d0;
        case 0x1630d4u: goto label_1630d4;
        case 0x1630d8u: goto label_1630d8;
        case 0x1630dcu: goto label_1630dc;
        case 0x1630e0u: goto label_1630e0;
        case 0x1630e4u: goto label_1630e4;
        case 0x1630e8u: goto label_1630e8;
        case 0x1630ecu: goto label_1630ec;
        case 0x1630f0u: goto label_1630f0;
        case 0x1630f4u: goto label_1630f4;
        case 0x1630f8u: goto label_1630f8;
        case 0x1630fcu: goto label_1630fc;
        case 0x163100u: goto label_163100;
        case 0x163104u: goto label_163104;
        case 0x163108u: goto label_163108;
        case 0x16310cu: goto label_16310c;
        default: break;
    }

    ctx->pc = 0x162ea0u;

label_162ea0:
    // 0x162ea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x162ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_162ea4:
    // 0x162ea4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x162ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162ea8:
    // 0x162ea8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x162ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_162eac:
    // 0x162eac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x162eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_162eb0:
    // 0x162eb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x162eb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162eb4:
    // 0x162eb4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x162eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_162eb8:
    // 0x162eb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x162eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_162ebc:
    // 0x162ebc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x162ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_162ec0:
    // 0x162ec0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x162ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_162ec4:
    // 0x162ec4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x162ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_162ec8:
    // 0x162ec8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x162ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_162ecc:
    // 0x162ecc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x162eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_162ed0:
    // 0x162ed0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x162ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_162ed4:
    // 0x162ed4: 0xc04110c  jal         func_104430
label_162ed8:
    if (ctx->pc == 0x162ED8u) {
        ctx->pc = 0x162ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ED4u;
        // 0x162ed8: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162EDCu;
        goto label_162edc;
    }
    ctx->pc = 0x162ED4u;
    SET_GPR_U32(ctx, 31, 0x162EDCu);
    ctx->pc = 0x162ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162ED4u;
    // 0x162ed8: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x162ED4u, 0x162EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162EDCu;
label_162edc:
    // 0x162edc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x162edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162ee0:
    // 0x162ee0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x162ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_162ee4:
    // 0x162ee4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_162ee8:
    if (ctx->pc == 0x162EE8u) {
        ctx->pc = 0x162EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162EE4u;
        // 0x162ee8: 0x8e4201c0  lw          $v0, 0x1C0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162EECu;
        goto label_162eec;
    }
    ctx->pc = 0x162EE4u;
    {
        const bool branch_taken_0x162ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162ee4) {
            ctx->pc = 0x162EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162EE4u;
            // 0x162ee8: 0x8e4201c0  lw          $v0, 0x1C0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162F1Cu;
            goto label_162f1c;
        }
    }
    ctx->pc = 0x162EECu;
label_162eec:
    // 0x162eec: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x162eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_162ef0:
    // 0x162ef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162ef4:
    // 0x162ef4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x162ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_162ef8:
    // 0x162ef8: 0x8c830154  lw          $v1, 0x154($a0)
    ctx->pc = 0x162ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
label_162efc:
    // 0x162efc: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x162efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_162f00:
    // 0x162f00: 0x8c67009c  lw          $a3, 0x9C($v1)
    ctx->pc = 0x162f00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_162f04:
    // 0x162f04: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x162f04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_162f08:
    // 0x162f08: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x162f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_162f0c:
    // 0x162f0c: 0x8ce50018  lw          $a1, 0x18($a3)
    ctx->pc = 0x162f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_162f10:
    // 0x162f10: 0x60f809  jalr        $v1
label_162f14:
    if (ctx->pc == 0x162F14u) {
        ctx->pc = 0x162F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F10u;
        // 0x162f14: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F18u;
        goto label_162f18;
    }
    ctx->pc = 0x162F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162F18u);
        ctx->pc = 0x162F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F10u;
        // 0x162f14: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162F10u, 0x162F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162F18u;
label_162f18:
    // 0x162f18: 0x8e4201c0  lw          $v0, 0x1C0($s2)
    ctx->pc = 0x162f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
label_162f1c:
    // 0x162f1c: 0x265001b4  addiu       $s0, $s2, 0x1B4
    ctx->pc = 0x162f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
label_162f20:
    // 0x162f20: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x162f20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_162f24:
    // 0x162f24: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x162f24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162f28:
    // 0x162f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x162f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_162f2c:
    // 0x162f2c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x162f2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162f30:
    // 0x162f30: 0xae4201c0  sw          $v0, 0x1C0($s2)
    ctx->pc = 0x162f30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 2));
label_162f34:
    // 0x162f34: 0x16200029  bnez        $s1, . + 4 + (0x29 << 2)
label_162f38:
    if (ctx->pc == 0x162F38u) {
        ctx->pc = 0x162F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F34u;
        // 0x162f38: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F3Cu;
        goto label_162f3c;
    }
    ctx->pc = 0x162F34u;
    {
        const bool branch_taken_0x162f34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x162F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F34u;
        // 0x162f38: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f34) {
            ctx->pc = 0x162FDCu;
            goto label_162fdc;
        }
    }
    ctx->pc = 0x162F3Cu;
label_162f3c:
    // 0x162f3c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x162f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162f40:
    // 0x162f40: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_162f44:
    if (ctx->pc == 0x162F44u) {
        ctx->pc = 0x162F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F40u;
        // 0x162f44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F48u;
        goto label_162f48;
    }
    ctx->pc = 0x162F40u;
    {
        const bool branch_taken_0x162f40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F40u;
        // 0x162f44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f40) {
            ctx->pc = 0x162F4Cu;
            goto label_162f4c;
        }
    }
    ctx->pc = 0x162F48u;
label_162f48:
    // 0x162f48: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x162f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_162f4c:
    // 0x162f4c: 0xc068086  jal         func_1A0218
label_162f50:
    if (ctx->pc == 0x162F50u) {
        ctx->pc = 0x162F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F4Cu;
        // 0x162f50: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F54u;
        goto label_162f54;
    }
    ctx->pc = 0x162F4Cu;
    SET_GPR_U32(ctx, 31, 0x162F54u);
    ctx->pc = 0x162F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F4Cu;
    // 0x162f50: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x162F4Cu, 0x162F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F54u;
label_162f54:
    // 0x162f54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x162f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162f58:
    // 0x162f58: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
label_162f5c:
    if (ctx->pc == 0x162F5Cu) {
        ctx->pc = 0x162F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F58u;
        // 0x162f5c: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F60u;
        goto label_162f60;
    }
    ctx->pc = 0x162F58u;
    {
        const bool branch_taken_0x162f58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x162f58) {
            ctx->pc = 0x162F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162F58u;
            // 0x162f5c: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162F80u;
            goto label_162f80;
        }
    }
    ctx->pc = 0x162F60u;
label_162f60:
    // 0x162f60: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x162f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_162f64:
    // 0x162f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162f68:
    // 0x162f68: 0x24a56f08  addiu       $a1, $a1, 0x6F08
    ctx->pc = 0x162f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28424));
label_162f6c:
    // 0x162f6c: 0xc068186  jal         func_1A0618
label_162f70:
    if (ctx->pc == 0x162F70u) {
        ctx->pc = 0x162F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F6Cu;
        // 0x162f70: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F74u;
        goto label_162f74;
    }
    ctx->pc = 0x162F6Cu;
    SET_GPR_U32(ctx, 31, 0x162F74u);
    ctx->pc = 0x162F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F6Cu;
    // 0x162f70: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x162F6Cu, 0x162F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F74u;
label_162f74:
    // 0x162f74: 0x10000018  b           . + 4 + (0x18 << 2)
label_162f78:
    if (ctx->pc == 0x162F78u) {
        ctx->pc = 0x162F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F74u;
        // 0x162f78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F7Cu;
        goto label_162f7c;
    }
    ctx->pc = 0x162F74u;
    {
        const bool branch_taken_0x162f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F74u;
        // 0x162f78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f74) {
            ctx->pc = 0x162FD8u;
            goto label_162fd8;
        }
    }
    ctx->pc = 0x162F7Cu;
label_162f7c:
    // 0x162f7c: 0x0  nop
    ctx->pc = 0x162f7cu;
    // NOP
label_162f80:
    // 0x162f80: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x162f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_162f84:
    // 0x162f84: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x162f84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_162f88:
    // 0x162f88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x162f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162f8c:
    // 0x162f8c: 0x0  nop
    ctx->pc = 0x162f8cu;
    // NOP
label_162f90:
    // 0x162f90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x162f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_162f94:
    // 0x162f94: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_162f98:
    if (ctx->pc == 0x162F98u) {
        ctx->pc = 0x162F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F94u;
        // 0x162f98: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162F9Cu;
        goto label_162f9c;
    }
    ctx->pc = 0x162F94u;
    {
        const bool branch_taken_0x162f94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F94u;
        // 0x162f98: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f94) {
            ctx->pc = 0x162FA8u;
            goto label_162fa8;
        }
    }
    ctx->pc = 0x162F9Cu;
label_162f9c:
    // 0x162f9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_162fa0:
    if (ctx->pc == 0x162FA0u) {
        ctx->pc = 0x162FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F9Cu;
        // 0x162fa0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162FA4u;
        goto label_162fa4;
    }
    ctx->pc = 0x162F9Cu;
    {
        const bool branch_taken_0x162f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F9Cu;
        // 0x162fa0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f9c) {
            ctx->pc = 0x162FACu;
            goto label_162fac;
        }
    }
    ctx->pc = 0x162FA4u;
label_162fa4:
    // 0x162fa4: 0x0  nop
    ctx->pc = 0x162fa4u;
    // NOP
label_162fa8:
    // 0x162fa8: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x162fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_162fac:
    // 0x162fac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x162facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_162fb0:
    // 0x162fb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_162fb4:
    // 0x162fb4: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x162fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
label_162fb8:
    // 0x162fb8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_162fbc:
    if (ctx->pc == 0x162FBCu) {
        ctx->pc = 0x162FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FB8u;
        // 0x162fbc: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162FC0u;
        goto label_162fc0;
    }
    ctx->pc = 0x162FB8u;
    {
        const bool branch_taken_0x162fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FB8u;
        // 0x162fbc: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fb8) {
            ctx->pc = 0x162F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162f90;
        }
    }
    ctx->pc = 0x162FC0u;
label_162fc0:
    // 0x162fc0: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x162fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_162fc4:
    // 0x162fc4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x162fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_162fc8:
    // 0x162fc8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x162fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_162fcc:
    // 0x162fcc: 0xaca303f0  sw          $v1, 0x3F0($a1)
    ctx->pc = 0x162fccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 3));
label_162fd0:
    // 0x162fd0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x162fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_162fd4:
    // 0x162fd4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x162fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_162fd8:
    // 0x162fd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162fdc:
    // 0x162fdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x162fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_162fe0:
    // 0x162fe0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x162fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_162fe4:
    // 0x162fe4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x162fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_162fe8:
    // 0x162fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x162fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_162fec:
    // 0x162fec: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x162fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_162ff0:
    // 0x162ff0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x162ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_162ff4:
    // 0x162ff4: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
label_162ff8:
    if (ctx->pc == 0x162FF8u) {
        ctx->pc = 0x162FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FF4u;
        // 0x162ff8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162FFCu;
        goto label_162ffc;
    }
    ctx->pc = 0x162FF4u;
    {
        const bool branch_taken_0x162ff4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FF4u;
        // 0x162ff8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ff4) {
            ctx->pc = 0x163048u;
            goto label_163048;
        }
    }
    ctx->pc = 0x162FFCu;
label_162ffc:
    // 0x162ffc: 0xc05bedc  jal         func_16FB70
label_163000:
    if (ctx->pc == 0x163000u) {
        ctx->pc = 0x163000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FFCu;
        // 0x163000: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163004u;
        goto label_163004;
    }
    ctx->pc = 0x162FFCu;
    SET_GPR_U32(ctx, 31, 0x163004u);
    ctx->pc = 0x163000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162FFCu;
    // 0x163000: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x162FFCu, 0x163004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163004u;
label_163004:
    // 0x163004: 0xc0682b2  jal         func_1A0AC8
label_163008:
    if (ctx->pc == 0x163008u) {
        ctx->pc = 0x163008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163004u;
        // 0x163008: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16300Cu;
        goto label_16300c;
    }
    ctx->pc = 0x163004u;
    SET_GPR_U32(ctx, 31, 0x16300Cu);
    ctx->pc = 0x163008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163004u;
    // 0x163008: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x163004u, 0x16300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16300Cu;
label_16300c:
    // 0x16300c: 0xc0682b6  jal         func_1A0AD8
label_163010:
    if (ctx->pc == 0x163010u) {
        ctx->pc = 0x163010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16300Cu;
        // 0x163010: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163014u;
        goto label_163014;
    }
    ctx->pc = 0x16300Cu;
    SET_GPR_U32(ctx, 31, 0x163014u);
    ctx->pc = 0x163010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16300Cu;
    // 0x163010: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16300Cu, 0x163014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163014u;
label_163014:
    // 0x163014: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x163014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_163018:
    // 0x163018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16301c:
    // 0x16301c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x16301cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_163020:
    // 0x163020: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x163020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
label_163024:
    // 0x163024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163028:
    // 0x163028: 0xc06586e  jal         func_1961B8
label_16302c:
    if (ctx->pc == 0x16302Cu) {
        ctx->pc = 0x16302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163028u;
        // 0x16302c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163030u;
        goto label_163030;
    }
    ctx->pc = 0x163028u;
    SET_GPR_U32(ctx, 31, 0x163030u);
    ctx->pc = 0x16302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163028u;
    // 0x16302c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1961B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1961B8u, 0x163028u, 0x163030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163030u;
label_163030:
    // 0x163030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163034:
    // 0x163034: 0xc06825c  jal         func_1A0970
label_163038:
    if (ctx->pc == 0x163038u) {
        ctx->pc = 0x163038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163034u;
        // 0x163038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16303Cu;
        goto label_16303c;
    }
    ctx->pc = 0x163034u;
    SET_GPR_U32(ctx, 31, 0x16303Cu);
    ctx->pc = 0x163038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163034u;
    // 0x163038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x163034u, 0x16303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16303Cu;
label_16303c:
    // 0x16303c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x16303cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_163040:
    // 0x163040: 0xc05bedc  jal         func_16FB70
label_163044:
    if (ctx->pc == 0x163044u) {
        ctx->pc = 0x163044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163040u;
        // 0x163044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163048u;
        goto label_163048;
    }
    ctx->pc = 0x163040u;
    SET_GPR_U32(ctx, 31, 0x163048u);
    ctx->pc = 0x163044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163040u;
    // 0x163044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x163040u, 0x163048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163048u;
label_163048:
    // 0x163048: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x163048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_16304c:
    // 0x16304c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x16304cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_163050:
    // 0x163050: 0xae360008  sw          $s6, 0x8($s1)
    ctx->pc = 0x163050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 22));
label_163054:
    // 0x163054: 0x2450a430  addiu       $s0, $v0, -0x5BD0
    ctx->pc = 0x163054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
label_163058:
    // 0x163058: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x163058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16305c:
    // 0x16305c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x16305cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_163060:
    // 0x163060: 0x8e8201b0  lw          $v0, 0x1B0($s4)
    ctx->pc = 0x163060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
label_163064:
    // 0x163064: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x163064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_163068:
    // 0x163068: 0x8e031400  lw          $v1, 0x1400($s0)
    ctx->pc = 0x163068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5120)));
label_16306c:
    // 0x16306c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x16306cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_163070:
    // 0x163070: 0xac640044  sw          $a0, 0x44($v1)
    ctx->pc = 0x163070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
label_163074:
    // 0x163074: 0x10a6001c  beq         $a1, $a2, . + 4 + (0x1C << 2)
label_163078:
    if (ctx->pc == 0x163078u) {
        ctx->pc = 0x163078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163074u;
        // 0x163078: 0xae9101b0  sw          $s1, 0x1B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16307Cu;
        goto label_16307c;
    }
    ctx->pc = 0x163074u;
    {
        const bool branch_taken_0x163074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x163078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163074u;
        // 0x163078: 0xae9101b0  sw          $s1, 0x1B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163074) {
            ctx->pc = 0x1630E8u;
            goto label_1630e8;
        }
    }
    ctx->pc = 0x16307Cu;
label_16307c:
    // 0x16307c: 0xc06a26e  jal         func_1A89B8
label_163080:
    if (ctx->pc == 0x163080u) {
        ctx->pc = 0x163080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16307Cu;
        // 0x163080: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163084u;
        goto label_163084;
    }
    ctx->pc = 0x16307Cu;
    SET_GPR_U32(ctx, 31, 0x163084u);
    ctx->pc = 0x163080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16307Cu;
    // 0x163080: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16307Cu, 0x163084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163084u;
label_163084:
    // 0x163084: 0x8e041400  lw          $a0, 0x1400($s0)
    ctx->pc = 0x163084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5120)));
label_163088:
    // 0x163088: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x163088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_16308c:
    // 0x16308c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_163090:
    // 0x163090: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x163090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
label_163094:
    // 0x163094: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x163094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_163098:
    // 0x163098: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x163098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_16309c:
    // 0x16309c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x16309cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1630a0:
    // 0x1630a0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1630a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1630a4:
    // 0x1630a4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1630a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_1630a8:
    // 0x1630a8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1630a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_1630ac:
    // 0x1630ac: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1630acu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_1630b0:
    // 0x1630b0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1630b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1630b4:
    // 0x1630b4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1630b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1630b8:
    // 0x1630b8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1630b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1630bc:
    // 0x1630bc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1630bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_1630c0:
    // 0x1630c0: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x1630c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_1630c4:
    // 0x1630c4: 0x8e041400  lw          $a0, 0x1400($s0)
    ctx->pc = 0x1630c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5120)));
label_1630c8:
    // 0x1630c8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1630c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1630cc:
    // 0x1630cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1630ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1630d0:
    // 0x1630d0: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1630d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
label_1630d4:
    // 0x1630d4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1630d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_1630d8:
    // 0x1630d8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1630d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1630dc:
    // 0x1630dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1630dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1630e0:
    // 0x1630e0: 0xc0674a2  jal         func_19D288
label_1630e4:
    if (ctx->pc == 0x1630E4u) {
        ctx->pc = 0x1630E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630E0u;
        // 0x1630e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1630E8u;
        goto label_1630e8;
    }
    ctx->pc = 0x1630E0u;
    SET_GPR_U32(ctx, 31, 0x1630E8u);
    ctx->pc = 0x1630E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1630E0u;
    // 0x1630e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1630E0u, 0x1630E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1630E8u;
label_1630e8:
    // 0x1630e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1630e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1630ec:
    // 0x1630ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1630ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1630f0:
    // 0x1630f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1630f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1630f4:
    // 0x1630f4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1630f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1630f8:
    // 0x1630f8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1630f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1630fc:
    // 0x1630fc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1630fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_163100:
    // 0x163100: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x163100u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_163104:
    // 0x163104: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x163104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_163108:
    // 0x163108: 0x3e00008  jr          $ra
label_16310c:
    if (ctx->pc == 0x16310Cu) {
        ctx->pc = 0x16310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163108u;
        // 0x16310c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163110u;
        goto label_fallthrough_0x163108;
    }
    ctx->pc = 0x163108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163108u;
        // 0x16310c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x163108:
    ctx->pc = 0x163110u;
}
