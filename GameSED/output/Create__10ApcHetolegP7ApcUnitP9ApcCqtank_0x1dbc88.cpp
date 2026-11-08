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

// Function: Create__10ApcHetolegP7ApcUnitP9ApcCqtank
// Address: 0x1dbc88 - 0x1dbdec
void Create__10ApcHetolegP7ApcUnitP9ApcCqtank_0x1dbc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__10ApcHetolegP7ApcUnitP9ApcCqtank_0x1dbc88");
#endif

    switch (ctx->pc) {
        case 0x1dbc88u: goto label_1dbc88;
        case 0x1dbc8cu: goto label_1dbc8c;
        case 0x1dbc90u: goto label_1dbc90;
        case 0x1dbc94u: goto label_1dbc94;
        case 0x1dbc98u: goto label_1dbc98;
        case 0x1dbc9cu: goto label_1dbc9c;
        case 0x1dbca0u: goto label_1dbca0;
        case 0x1dbca4u: goto label_1dbca4;
        case 0x1dbca8u: goto label_1dbca8;
        case 0x1dbcacu: goto label_1dbcac;
        case 0x1dbcb0u: goto label_1dbcb0;
        case 0x1dbcb4u: goto label_1dbcb4;
        case 0x1dbcb8u: goto label_1dbcb8;
        case 0x1dbcbcu: goto label_1dbcbc;
        case 0x1dbcc0u: goto label_1dbcc0;
        case 0x1dbcc4u: goto label_1dbcc4;
        case 0x1dbcc8u: goto label_1dbcc8;
        case 0x1dbcccu: goto label_1dbccc;
        case 0x1dbcd0u: goto label_1dbcd0;
        case 0x1dbcd4u: goto label_1dbcd4;
        case 0x1dbcd8u: goto label_1dbcd8;
        case 0x1dbcdcu: goto label_1dbcdc;
        case 0x1dbce0u: goto label_1dbce0;
        case 0x1dbce4u: goto label_1dbce4;
        case 0x1dbce8u: goto label_1dbce8;
        case 0x1dbcecu: goto label_1dbcec;
        case 0x1dbcf0u: goto label_1dbcf0;
        case 0x1dbcf4u: goto label_1dbcf4;
        case 0x1dbcf8u: goto label_1dbcf8;
        case 0x1dbcfcu: goto label_1dbcfc;
        case 0x1dbd00u: goto label_1dbd00;
        case 0x1dbd04u: goto label_1dbd04;
        case 0x1dbd08u: goto label_1dbd08;
        case 0x1dbd0cu: goto label_1dbd0c;
        case 0x1dbd10u: goto label_1dbd10;
        case 0x1dbd14u: goto label_1dbd14;
        case 0x1dbd18u: goto label_1dbd18;
        case 0x1dbd1cu: goto label_1dbd1c;
        case 0x1dbd20u: goto label_1dbd20;
        case 0x1dbd24u: goto label_1dbd24;
        case 0x1dbd28u: goto label_1dbd28;
        case 0x1dbd2cu: goto label_1dbd2c;
        case 0x1dbd30u: goto label_1dbd30;
        case 0x1dbd34u: goto label_1dbd34;
        case 0x1dbd38u: goto label_1dbd38;
        case 0x1dbd3cu: goto label_1dbd3c;
        case 0x1dbd40u: goto label_1dbd40;
        case 0x1dbd44u: goto label_1dbd44;
        case 0x1dbd48u: goto label_1dbd48;
        case 0x1dbd4cu: goto label_1dbd4c;
        case 0x1dbd50u: goto label_1dbd50;
        case 0x1dbd54u: goto label_1dbd54;
        case 0x1dbd58u: goto label_1dbd58;
        case 0x1dbd5cu: goto label_1dbd5c;
        case 0x1dbd60u: goto label_1dbd60;
        case 0x1dbd64u: goto label_1dbd64;
        case 0x1dbd68u: goto label_1dbd68;
        case 0x1dbd6cu: goto label_1dbd6c;
        case 0x1dbd70u: goto label_1dbd70;
        case 0x1dbd74u: goto label_1dbd74;
        case 0x1dbd78u: goto label_1dbd78;
        case 0x1dbd7cu: goto label_1dbd7c;
        case 0x1dbd80u: goto label_1dbd80;
        case 0x1dbd84u: goto label_1dbd84;
        case 0x1dbd88u: goto label_1dbd88;
        case 0x1dbd8cu: goto label_1dbd8c;
        case 0x1dbd90u: goto label_1dbd90;
        case 0x1dbd94u: goto label_1dbd94;
        case 0x1dbd98u: goto label_1dbd98;
        case 0x1dbd9cu: goto label_1dbd9c;
        case 0x1dbda0u: goto label_1dbda0;
        case 0x1dbda4u: goto label_1dbda4;
        case 0x1dbda8u: goto label_1dbda8;
        case 0x1dbdacu: goto label_1dbdac;
        case 0x1dbdb0u: goto label_1dbdb0;
        case 0x1dbdb4u: goto label_1dbdb4;
        case 0x1dbdb8u: goto label_1dbdb8;
        case 0x1dbdbcu: goto label_1dbdbc;
        case 0x1dbdc0u: goto label_1dbdc0;
        case 0x1dbdc4u: goto label_1dbdc4;
        case 0x1dbdc8u: goto label_1dbdc8;
        case 0x1dbdccu: goto label_1dbdcc;
        case 0x1dbdd0u: goto label_1dbdd0;
        case 0x1dbdd4u: goto label_1dbdd4;
        case 0x1dbdd8u: goto label_1dbdd8;
        case 0x1dbddcu: goto label_1dbddc;
        case 0x1dbde0u: goto label_1dbde0;
        case 0x1dbde4u: goto label_1dbde4;
        case 0x1dbde8u: goto label_1dbde8;
        default: break;
    }

    ctx->pc = 0x1dbc88u;

label_1dbc88:
    // 0x1dbc88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dbc8c:
    // 0x1dbc8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1dbc90:
    // 0x1dbc90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dbc94:
    // 0x1dbc94: 0x24040306  addiu       $a0, $zero, 0x306
    ctx->pc = 0x1dbc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_1dbc98:
    // 0x1dbc98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1dbc9c:
    // 0x1dbc9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1dbca0:
    // 0x1dbca0: 0x24120306  addiu       $s2, $zero, 0x306
    ctx->pc = 0x1dbca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_1dbca4:
    // 0x1dbca4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dbca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1dbca8:
    // 0x1dbca8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dbca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1dbcac:
    // 0x1dbcac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dbcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1dbcb0:
    // 0x1dbcb0: 0xc0682b2  jal         func_1A0AC8
label_1dbcb4:
    if (ctx->pc == 0x1DBCB4u) {
        ctx->pc = 0x1DBCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCB0u;
        // 0x1dbcb4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBCB8u;
        goto label_1dbcb8;
    }
    ctx->pc = 0x1DBCB0u;
    SET_GPR_U32(ctx, 31, 0x1DBCB8u);
    ctx->pc = 0x1DBCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCB0u;
    // 0x1dbcb4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1DBCB0u, 0x1DBCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCB8u;
label_1dbcb8:
    // 0x1dbcb8: 0xc0682b6  jal         func_1A0AD8
label_1dbcbc:
    if (ctx->pc == 0x1DBCBCu) {
        ctx->pc = 0x1DBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCB8u;
        // 0x1dbcbc: 0x24040310  addiu       $a0, $zero, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBCC0u;
        goto label_1dbcc0;
    }
    ctx->pc = 0x1DBCB8u;
    SET_GPR_U32(ctx, 31, 0x1DBCC0u);
    ctx->pc = 0x1DBCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCB8u;
    // 0x1dbcbc: 0x24040310  addiu       $a0, $zero, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1DBCB8u, 0x1DBCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCC0u;
label_1dbcc0:
    // 0x1dbcc0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1dbcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1dbcc4:
    // 0x1dbcc4: 0x2463f5d0  addiu       $v1, $v1, -0xA30
    ctx->pc = 0x1dbcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964688));
label_1dbcc8:
    // 0x1dbcc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dbcc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dbccc:
    // 0x1dbccc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1dbcccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_1dbcd0:
    // 0x1dbcd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dbcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dbcd4:
    // 0x1dbcd4: 0xc061258  jal         func_184960
label_1dbcd8:
    if (ctx->pc == 0x1DBCD8u) {
        ctx->pc = 0x1DBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCD4u;
        // 0x1dbcd8: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBCDCu;
        goto label_1dbcdc;
    }
    ctx->pc = 0x1DBCD4u;
    SET_GPR_U32(ctx, 31, 0x1DBCDCu);
    ctx->pc = 0x1DBCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCD4u;
    // 0x1dbcd8: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x1DBCD4u, 0x1DBCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCDCu;
label_1dbcdc:
    // 0x1dbcdc: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x1dbcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_1dbce0:
    // 0x1dbce0: 0xc7808528  lwc1        $f0, -0x7AD8($gp)
    ctx->pc = 0x1dbce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbce4:
    // 0x1dbce4: 0x26630230  addiu       $v1, $s3, 0x230
    ctx->pc = 0x1dbce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
label_1dbce8:
    // 0x1dbce8: 0xae700150  sw          $s0, 0x150($s3)
    ctx->pc = 0x1dbce8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 16));
label_1dbcec:
    // 0x1dbcec: 0xe660020c  swc1        $f0, 0x20C($s3)
    ctx->pc = 0x1dbcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 524), bits); }
label_1dbcf0:
    // 0x1dbcf0: 0xae710154  sw          $s1, 0x154($s3)
    ctx->pc = 0x1dbcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 17));
label_1dbcf4:
    // 0x1dbcf4: 0xe6600200  swc1        $f0, 0x200($s3)
    ctx->pc = 0x1dbcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
label_1dbcf8:
    // 0x1dbcf8: 0xae600204  sw          $zero, 0x204($s3)
    ctx->pc = 0x1dbcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 516), GPR_U32(ctx, 0));
label_1dbcfc:
    // 0x1dbcfc: 0xae600208  sw          $zero, 0x208($s3)
    ctx->pc = 0x1dbcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 520), GPR_U32(ctx, 0));
label_1dbd00:
    // 0x1dbd00: 0xae600210  sw          $zero, 0x210($s3)
    ctx->pc = 0x1dbd00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 0));
label_1dbd04:
    // 0x1dbd04: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1dbd04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbd08:
    // 0x1dbd08: 0x26620240  addiu       $v0, $s3, 0x240
    ctx->pc = 0x1dbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
label_1dbd0c:
    // 0x1dbd0c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1dbd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbd10:
    // 0x1dbd10: 0x26630290  addiu       $v1, $s3, 0x290
    ctx->pc = 0x1dbd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
label_1dbd14:
    // 0x1dbd14: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1dbd14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbd18:
    // 0x1dbd18: 0x266402a0  addiu       $a0, $s3, 0x2A0
    ctx->pc = 0x1dbd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 672));
label_1dbd1c:
    // 0x1dbd1c: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1dbd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1dbd20:
    // 0x1dbd20: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1dbd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1dbd24:
    // 0x1dbd24: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x1dbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_1dbd28:
    // 0x1dbd28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1dbd28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dbd2c:
    // 0x1dbd2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dbd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dbd30:
    // 0x1dbd30: 0x60f809  jalr        $v1
label_1dbd34:
    if (ctx->pc == 0x1DBD34u) {
        ctx->pc = 0x1DBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD30u;
        // 0x1dbd34: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBD38u;
        goto label_1dbd38;
    }
    ctx->pc = 0x1DBD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DBD38u);
        ctx->pc = 0x1DBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD30u;
        // 0x1dbd34: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBD30u, 0x1DBD38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBD38u;
label_1dbd38:
    // 0x1dbd38: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x1dbd38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_1dbd3c:
    // 0x1dbd3c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1dbd3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dbd40:
    // 0x1dbd40: 0x26660300  addiu       $a2, $s3, 0x300
    ctx->pc = 0x1dbd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_1dbd44:
    // 0x1dbd44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dbd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1dbd48:
    // 0x1dbd48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dbd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dbd4c:
    // 0x1dbd4c: 0xe66202e4  swc1        $f2, 0x2E4($s3)
    ctx->pc = 0x1dbd4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 740), bits); }
label_1dbd50:
    // 0x1dbd50: 0xe66002e0  swc1        $f0, 0x2E0($s3)
    ctx->pc = 0x1dbd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 736), bits); }
label_1dbd54:
    // 0x1dbd54: 0xe66202e8  swc1        $f2, 0x2E8($s3)
    ctx->pc = 0x1dbd54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 744), bits); }
label_1dbd58:
    // 0x1dbd58: 0xae6002ec  sw          $zero, 0x2EC($s3)
    ctx->pc = 0x1dbd58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 748), GPR_U32(ctx, 0));
label_1dbd5c:
    // 0x1dbd5c: 0xe66202f0  swc1        $f2, 0x2F0($s3)
    ctx->pc = 0x1dbd5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
label_1dbd60:
    // 0x1dbd60: 0xe66202f4  swc1        $f2, 0x2F4($s3)
    ctx->pc = 0x1dbd60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 756), bits); }
label_1dbd64:
    // 0x1dbd64: 0xc781852c  lwc1        $f1, -0x7AD4($gp)
    ctx->pc = 0x1dbd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dbd68:
    // 0x1dbd68: 0xc7808530  lwc1        $f0, -0x7AD0($gp)
    ctx->pc = 0x1dbd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbd6c:
    // 0x1dbd6c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1dbd6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1dbd70:
    // 0x1dbd70: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1dbd70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1dbd74:
    // 0x1dbd74: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1dbd74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1dbd78:
    // 0x1dbd78: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1dbd78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1dbd7c:
    // 0x1dbd7c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1dbd7cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1dbd80:
    // 0x1dbd80: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1dbd80u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_1dbd84:
    // 0x1dbd84: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1dbd84u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_1dbd88:
    // 0x1dbd88: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1dbd88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_1dbd8c:
    // 0x1dbd8c: 0x266202d4  addiu       $v0, $s3, 0x2D4
    ctx->pc = 0x1dbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 724));
label_1dbd90:
    // 0x1dbd90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1dbd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dbd94:
    // 0x1dbd94: 0x0  nop
    ctx->pc = 0x1dbd94u;
    // NOP
label_1dbd98:
    // 0x1dbd98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dbd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1dbd9c:
    // 0x1dbd9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1dbd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1dbda0:
    // 0x1dbda0: 0x0  nop
    ctx->pc = 0x1dbda0u;
    // NOP
label_1dbda4:
    // 0x1dbda4: 0x0  nop
    ctx->pc = 0x1dbda4u;
    // NOP
label_1dbda8:
    // 0x1dbda8: 0x0  nop
    ctx->pc = 0x1dbda8u;
    // NOP
label_1dbdac:
    // 0x1dbdac: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
label_1dbdb0:
    if (ctx->pc == 0x1DBDB0u) {
        ctx->pc = 0x1DBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDACu;
        // 0x1dbdb0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBDB4u;
        goto label_1dbdb4;
    }
    ctx->pc = 0x1DBDACu;
    {
        const bool branch_taken_0x1dbdac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDACu;
        // 0x1dbdb0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdac) {
            ctx->pc = 0x1DBD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbd98;
        }
    }
    ctx->pc = 0x1DBDB4u;
label_1dbdb4:
    // 0x1dbdb4: 0xae8002dc  sw          $zero, 0x2DC($s4)
    ctx->pc = 0x1dbdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 732), GPR_U32(ctx, 0));
label_1dbdb8:
    // 0x1dbdb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dbdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dbdbc:
    // 0x1dbdbc: 0xae8002d8  sw          $zero, 0x2D8($s4)
    ctx->pc = 0x1dbdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 728), GPR_U32(ctx, 0));
label_1dbdc0:
    // 0x1dbdc0: 0xc06825c  jal         func_1A0970
label_1dbdc4:
    if (ctx->pc == 0x1DBDC4u) {
        ctx->pc = 0x1DBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDC0u;
        // 0x1dbdc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBDC8u;
        goto label_1dbdc8;
    }
    ctx->pc = 0x1DBDC0u;
    SET_GPR_U32(ctx, 31, 0x1DBDC8u);
    ctx->pc = 0x1DBDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDC0u;
    // 0x1dbdc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1DBDC0u, 0x1DBDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDC8u;
label_1dbdc8:
    // 0x1dbdc8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1dbdc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dbdcc:
    // 0x1dbdcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbdccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dbdd0:
    // 0x1dbdd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbdd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1dbdd4:
    // 0x1dbdd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbdd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dbdd8:
    // 0x1dbdd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dbdd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1dbddc:
    // 0x1dbddc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dbddcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dbde0:
    // 0x1dbde0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dbde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1dbde4:
    // 0x1dbde4: 0x3e00008  jr          $ra
label_1dbde8:
    if (ctx->pc == 0x1DBDE8u) {
        ctx->pc = 0x1DBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDE4u;
        // 0x1dbde8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBDECu;
        goto label_fallthrough_0x1dbde4;
    }
    ctx->pc = 0x1DBDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDE4u;
        // 0x1dbde8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dbde4:
    ctx->pc = 0x1DBDECu;
}
