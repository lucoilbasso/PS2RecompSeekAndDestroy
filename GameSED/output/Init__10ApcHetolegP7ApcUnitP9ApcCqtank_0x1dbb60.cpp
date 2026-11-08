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

// Function: Init__10ApcHetolegP7ApcUnitP9ApcCqtank
// Address: 0x1dbb60 - 0x1dbc88
void Init__10ApcHetolegP7ApcUnitP9ApcCqtank_0x1dbb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__10ApcHetolegP7ApcUnitP9ApcCqtank_0x1dbb60");
#endif

    switch (ctx->pc) {
        case 0x1dbb60u: goto label_1dbb60;
        case 0x1dbb64u: goto label_1dbb64;
        case 0x1dbb68u: goto label_1dbb68;
        case 0x1dbb6cu: goto label_1dbb6c;
        case 0x1dbb70u: goto label_1dbb70;
        case 0x1dbb74u: goto label_1dbb74;
        case 0x1dbb78u: goto label_1dbb78;
        case 0x1dbb7cu: goto label_1dbb7c;
        case 0x1dbb80u: goto label_1dbb80;
        case 0x1dbb84u: goto label_1dbb84;
        case 0x1dbb88u: goto label_1dbb88;
        case 0x1dbb8cu: goto label_1dbb8c;
        case 0x1dbb90u: goto label_1dbb90;
        case 0x1dbb94u: goto label_1dbb94;
        case 0x1dbb98u: goto label_1dbb98;
        case 0x1dbb9cu: goto label_1dbb9c;
        case 0x1dbba0u: goto label_1dbba0;
        case 0x1dbba4u: goto label_1dbba4;
        case 0x1dbba8u: goto label_1dbba8;
        case 0x1dbbacu: goto label_1dbbac;
        case 0x1dbbb0u: goto label_1dbbb0;
        case 0x1dbbb4u: goto label_1dbbb4;
        case 0x1dbbb8u: goto label_1dbbb8;
        case 0x1dbbbcu: goto label_1dbbbc;
        case 0x1dbbc0u: goto label_1dbbc0;
        case 0x1dbbc4u: goto label_1dbbc4;
        case 0x1dbbc8u: goto label_1dbbc8;
        case 0x1dbbccu: goto label_1dbbcc;
        case 0x1dbbd0u: goto label_1dbbd0;
        case 0x1dbbd4u: goto label_1dbbd4;
        case 0x1dbbd8u: goto label_1dbbd8;
        case 0x1dbbdcu: goto label_1dbbdc;
        case 0x1dbbe0u: goto label_1dbbe0;
        case 0x1dbbe4u: goto label_1dbbe4;
        case 0x1dbbe8u: goto label_1dbbe8;
        case 0x1dbbecu: goto label_1dbbec;
        case 0x1dbbf0u: goto label_1dbbf0;
        case 0x1dbbf4u: goto label_1dbbf4;
        case 0x1dbbf8u: goto label_1dbbf8;
        case 0x1dbbfcu: goto label_1dbbfc;
        case 0x1dbc00u: goto label_1dbc00;
        case 0x1dbc04u: goto label_1dbc04;
        case 0x1dbc08u: goto label_1dbc08;
        case 0x1dbc0cu: goto label_1dbc0c;
        case 0x1dbc10u: goto label_1dbc10;
        case 0x1dbc14u: goto label_1dbc14;
        case 0x1dbc18u: goto label_1dbc18;
        case 0x1dbc1cu: goto label_1dbc1c;
        case 0x1dbc20u: goto label_1dbc20;
        case 0x1dbc24u: goto label_1dbc24;
        case 0x1dbc28u: goto label_1dbc28;
        case 0x1dbc2cu: goto label_1dbc2c;
        case 0x1dbc30u: goto label_1dbc30;
        case 0x1dbc34u: goto label_1dbc34;
        case 0x1dbc38u: goto label_1dbc38;
        case 0x1dbc3cu: goto label_1dbc3c;
        case 0x1dbc40u: goto label_1dbc40;
        case 0x1dbc44u: goto label_1dbc44;
        case 0x1dbc48u: goto label_1dbc48;
        case 0x1dbc4cu: goto label_1dbc4c;
        case 0x1dbc50u: goto label_1dbc50;
        case 0x1dbc54u: goto label_1dbc54;
        case 0x1dbc58u: goto label_1dbc58;
        case 0x1dbc5cu: goto label_1dbc5c;
        case 0x1dbc60u: goto label_1dbc60;
        case 0x1dbc64u: goto label_1dbc64;
        case 0x1dbc68u: goto label_1dbc68;
        case 0x1dbc6cu: goto label_1dbc6c;
        case 0x1dbc70u: goto label_1dbc70;
        case 0x1dbc74u: goto label_1dbc74;
        case 0x1dbc78u: goto label_1dbc78;
        case 0x1dbc7cu: goto label_1dbc7c;
        case 0x1dbc80u: goto label_1dbc80;
        case 0x1dbc84u: goto label_1dbc84;
        default: break;
    }

    ctx->pc = 0x1dbb60u;

label_1dbb60:
    // 0x1dbb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dbb64:
    // 0x1dbb64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1dbb68:
    // 0x1dbb68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dbb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dbb6c:
    // 0x1dbb6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1dbb70:
    // 0x1dbb70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1dbb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dbb74:
    // 0x1dbb74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1dbb78:
    // 0x1dbb78: 0x24120306  addiu       $s2, $zero, 0x306
    ctx->pc = 0x1dbb78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_1dbb7c:
    // 0x1dbb7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dbb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1dbb80:
    // 0x1dbb80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dbb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1dbb84:
    // 0x1dbb84: 0xc061258  jal         func_184960
label_1dbb88:
    if (ctx->pc == 0x1DBB88u) {
        ctx->pc = 0x1DBB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB84u;
        // 0x1dbb88: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB8Cu;
        goto label_1dbb8c;
    }
    ctx->pc = 0x1DBB84u;
    SET_GPR_U32(ctx, 31, 0x1DBB8Cu);
    ctx->pc = 0x1DBB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB84u;
    // 0x1dbb88: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DBB84u, 0x1DBB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB8Cu;
label_1dbb8c:
    // 0x1dbb8c: 0xc780851c  lwc1        $f0, -0x7AE4($gp)
    ctx->pc = 0x1dbb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbb90:
    // 0x1dbb90: 0x26630230  addiu       $v1, $s3, 0x230
    ctx->pc = 0x1dbb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
label_1dbb94:
    // 0x1dbb94: 0xae700150  sw          $s0, 0x150($s3)
    ctx->pc = 0x1dbb94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 16));
label_1dbb98:
    // 0x1dbb98: 0xe660020c  swc1        $f0, 0x20C($s3)
    ctx->pc = 0x1dbb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 524), bits); }
label_1dbb9c:
    // 0x1dbb9c: 0xae710154  sw          $s1, 0x154($s3)
    ctx->pc = 0x1dbb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 17));
label_1dbba0:
    // 0x1dbba0: 0xe6600200  swc1        $f0, 0x200($s3)
    ctx->pc = 0x1dbba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
label_1dbba4:
    // 0x1dbba4: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x1dbba4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_1dbba8:
    // 0x1dbba8: 0xae600204  sw          $zero, 0x204($s3)
    ctx->pc = 0x1dbba8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 516), GPR_U32(ctx, 0));
label_1dbbac:
    // 0x1dbbac: 0xae600208  sw          $zero, 0x208($s3)
    ctx->pc = 0x1dbbacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 520), GPR_U32(ctx, 0));
label_1dbbb0:
    // 0x1dbbb0: 0xae600210  sw          $zero, 0x210($s3)
    ctx->pc = 0x1dbbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 0));
label_1dbbb4:
    // 0x1dbbb4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1dbbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbbb8:
    // 0x1dbbb8: 0x26620240  addiu       $v0, $s3, 0x240
    ctx->pc = 0x1dbbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
label_1dbbbc:
    // 0x1dbbbc: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1dbbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbbc0:
    // 0x1dbbc0: 0x26630290  addiu       $v1, $s3, 0x290
    ctx->pc = 0x1dbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
label_1dbbc4:
    // 0x1dbbc4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1dbbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbbc8:
    // 0x1dbbc8: 0x266402a0  addiu       $a0, $s3, 0x2A0
    ctx->pc = 0x1dbbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
label_1dbbcc:
    // 0x1dbbcc: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1dbbccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbbd0:
    // 0x1dbbd0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1dbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1dbbd4:
    // 0x1dbbd4: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x1dbbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1dbbd8:
    // 0x1dbbd8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1dbbd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbbdc:
    // 0x1dbbdc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dbbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dbbe0:
    // 0x1dbbe0: 0x60f809  jalr        $v1
label_1dbbe4:
    if (ctx->pc == 0x1DBBE4u) {
        ctx->pc = 0x1DBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBE0u;
        // 0x1dbbe4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBBE8u;
        goto label_1dbbe8;
    }
    ctx->pc = 0x1DBBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DBBE8u);
        ctx->pc = 0x1DBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBE0u;
        // 0x1dbbe4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBBE0u, 0x1DBBE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBBE8u;
label_1dbbe8:
    // 0x1dbbe8: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x1dbbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_1dbbec:
    // 0x1dbbec: 0xae6002e4  sw          $zero, 0x2E4($s3)
    ctx->pc = 0x1dbbecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 740), GPR_U32(ctx, 0));
label_1dbbf0:
    // 0x1dbbf0: 0x26660300  addiu       $a2, $s3, 0x300
    ctx->pc = 0x1dbbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_1dbbf4:
    // 0x1dbbf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dbbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1dbbf8:
    // 0x1dbbf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dbbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dbbfc:
    // 0x1dbbfc: 0xae6002e8  sw          $zero, 0x2E8($s3)
    ctx->pc = 0x1dbbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 744), GPR_U32(ctx, 0));
label_1dbc00:
    // 0x1dbc00: 0xe66002e0  swc1        $f0, 0x2E0($s3)
    ctx->pc = 0x1dbc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 736), bits); }
label_1dbc04:
    // 0x1dbc04: 0xae6002ec  sw          $zero, 0x2EC($s3)
    ctx->pc = 0x1dbc04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 748), GPR_U32(ctx, 0));
label_1dbc08:
    // 0x1dbc08: 0xae6002f0  sw          $zero, 0x2F0($s3)
    ctx->pc = 0x1dbc08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 752), GPR_U32(ctx, 0));
label_1dbc0c:
    // 0x1dbc0c: 0xae6002f4  sw          $zero, 0x2F4($s3)
    ctx->pc = 0x1dbc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 756), GPR_U32(ctx, 0));
label_1dbc10:
    // 0x1dbc10: 0xc66202e4  lwc1        $f2, 0x2E4($s3)
    ctx->pc = 0x1dbc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dbc14:
    // 0x1dbc14: 0xc7818520  lwc1        $f1, -0x7AE0($gp)
    ctx->pc = 0x1dbc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbc18:
    // 0x1dbc18: 0xc7808524  lwc1        $f0, -0x7ADC($gp)
    ctx->pc = 0x1dbc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbc1c:
    // 0x1dbc1c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1dbc1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1dbc20:
    // 0x1dbc20: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1dbc20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1dbc24:
    // 0x1dbc24: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1dbc24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1dbc28:
    // 0x1dbc28: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1dbc28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1dbc2c:
    // 0x1dbc2c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1dbc2cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1dbc30:
    // 0x1dbc30: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1dbc30u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_1dbc34:
    // 0x1dbc34: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1dbc34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_1dbc38:
    // 0x1dbc38: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1dbc38u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_1dbc3c:
    // 0x1dbc3c: 0x266202d4  addiu       $v0, $s3, 0x2D4
    ctx->pc = 0x1dbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 724));
label_1dbc40:
    // 0x1dbc40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1dbc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dbc44:
    // 0x1dbc44: 0x0  nop
    ctx->pc = 0x1dbc44u;
    // NOP
label_1dbc48:
    // 0x1dbc48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dbc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1dbc4c:
    // 0x1dbc4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1dbc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1dbc50:
    // 0x1dbc50: 0x0  nop
    ctx->pc = 0x1dbc50u;
    // NOP
label_1dbc54:
    // 0x1dbc54: 0x0  nop
    ctx->pc = 0x1dbc54u;
    // NOP
label_1dbc58:
    // 0x1dbc58: 0x0  nop
    ctx->pc = 0x1dbc58u;
    // NOP
label_1dbc5c:
    // 0x1dbc5c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_1dbc60:
    if (ctx->pc == 0x1DBC60u) {
        ctx->pc = 0x1DBC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC5Cu;
        // 0x1dbc60: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBC64u;
        goto label_1dbc64;
    }
    ctx->pc = 0x1DBC5Cu;
    {
        const bool branch_taken_0x1dbc5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DBC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC5Cu;
        // 0x1dbc60: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc5c) {
            ctx->pc = 0x1DBC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbc48;
        }
    }
    ctx->pc = 0x1DBC64u;
label_1dbc64:
    // 0x1dbc64: 0xae6002dc  sw          $zero, 0x2DC($s3)
    ctx->pc = 0x1dbc64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 732), GPR_U32(ctx, 0));
label_1dbc68:
    // 0x1dbc68: 0xae6002d8  sw          $zero, 0x2D8($s3)
    ctx->pc = 0x1dbc68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 728), GPR_U32(ctx, 0));
label_1dbc6c:
    // 0x1dbc6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbc6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dbc70:
    // 0x1dbc70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1dbc74:
    // 0x1dbc74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbc74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dbc78:
    // 0x1dbc78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dbc78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1dbc7c:
    // 0x1dbc7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dbc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dbc80:
    // 0x1dbc80: 0x3e00008  jr          $ra
label_1dbc84:
    if (ctx->pc == 0x1DBC84u) {
        ctx->pc = 0x1DBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC80u;
        // 0x1dbc84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBC88u;
        goto label_fallthrough_0x1dbc80;
    }
    ctx->pc = 0x1DBC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC80u;
        // 0x1dbc84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dbc80:
    ctx->pc = 0x1DBC88u;
}
