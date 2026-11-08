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

// Function: BMotionSmoothMoveSetup__FP5BcObjP11BMotionCtrlfff
// Address: 0x1a4a70 - 0x1a4b5c
void BMotionSmoothMoveSetup__FP5BcObjP11BMotionCtrlfff_0x1a4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionSmoothMoveSetup__FP5BcObjP11BMotionCtrlfff_0x1a4a70");
#endif

    switch (ctx->pc) {
        case 0x1a4a70u: goto label_1a4a70;
        case 0x1a4a74u: goto label_1a4a74;
        case 0x1a4a78u: goto label_1a4a78;
        case 0x1a4a7cu: goto label_1a4a7c;
        case 0x1a4a80u: goto label_1a4a80;
        case 0x1a4a84u: goto label_1a4a84;
        case 0x1a4a88u: goto label_1a4a88;
        case 0x1a4a8cu: goto label_1a4a8c;
        case 0x1a4a90u: goto label_1a4a90;
        case 0x1a4a94u: goto label_1a4a94;
        case 0x1a4a98u: goto label_1a4a98;
        case 0x1a4a9cu: goto label_1a4a9c;
        case 0x1a4aa0u: goto label_1a4aa0;
        case 0x1a4aa4u: goto label_1a4aa4;
        case 0x1a4aa8u: goto label_1a4aa8;
        case 0x1a4aacu: goto label_1a4aac;
        case 0x1a4ab0u: goto label_1a4ab0;
        case 0x1a4ab4u: goto label_1a4ab4;
        case 0x1a4ab8u: goto label_1a4ab8;
        case 0x1a4abcu: goto label_1a4abc;
        case 0x1a4ac0u: goto label_1a4ac0;
        case 0x1a4ac4u: goto label_1a4ac4;
        case 0x1a4ac8u: goto label_1a4ac8;
        case 0x1a4accu: goto label_1a4acc;
        case 0x1a4ad0u: goto label_1a4ad0;
        case 0x1a4ad4u: goto label_1a4ad4;
        case 0x1a4ad8u: goto label_1a4ad8;
        case 0x1a4adcu: goto label_1a4adc;
        case 0x1a4ae0u: goto label_1a4ae0;
        case 0x1a4ae4u: goto label_1a4ae4;
        case 0x1a4ae8u: goto label_1a4ae8;
        case 0x1a4aecu: goto label_1a4aec;
        case 0x1a4af0u: goto label_1a4af0;
        case 0x1a4af4u: goto label_1a4af4;
        case 0x1a4af8u: goto label_1a4af8;
        case 0x1a4afcu: goto label_1a4afc;
        case 0x1a4b00u: goto label_1a4b00;
        case 0x1a4b04u: goto label_1a4b04;
        case 0x1a4b08u: goto label_1a4b08;
        case 0x1a4b0cu: goto label_1a4b0c;
        case 0x1a4b10u: goto label_1a4b10;
        case 0x1a4b14u: goto label_1a4b14;
        case 0x1a4b18u: goto label_1a4b18;
        case 0x1a4b1cu: goto label_1a4b1c;
        case 0x1a4b20u: goto label_1a4b20;
        case 0x1a4b24u: goto label_1a4b24;
        case 0x1a4b28u: goto label_1a4b28;
        case 0x1a4b2cu: goto label_1a4b2c;
        case 0x1a4b30u: goto label_1a4b30;
        case 0x1a4b34u: goto label_1a4b34;
        case 0x1a4b38u: goto label_1a4b38;
        case 0x1a4b3cu: goto label_1a4b3c;
        case 0x1a4b40u: goto label_1a4b40;
        case 0x1a4b44u: goto label_1a4b44;
        case 0x1a4b48u: goto label_1a4b48;
        case 0x1a4b4cu: goto label_1a4b4c;
        case 0x1a4b50u: goto label_1a4b50;
        case 0x1a4b54u: goto label_1a4b54;
        case 0x1a4b58u: goto label_1a4b58;
        default: break;
    }

    ctx->pc = 0x1a4a70u;

label_1a4a70:
    // 0x1a4a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a4a74:
    // 0x1a4a74: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a4a74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_1a4a78:
    // 0x1a4a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4a7c:
    // 0x1a4a7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a4a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a80:
    // 0x1a4a80: 0x24c625b8  addiu       $a2, $a2, 0x25B8
    ctx->pc = 0x1a4a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9656));
label_1a4a84:
    // 0x1a4a84: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1a4a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a4a88:
    // 0x1a4a88: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a4a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a8c:
    // 0x1a4a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a90:
    // 0x1a4a90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4a94:
    // 0x1a4a94: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x1a4a94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1a4a98:
    // 0x1a4a98: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x1a4a98u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_1a4a9c:
    // 0x1a4a9c: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1a4a9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a4aa0:
    // 0x1a4aa0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1a4aa0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_1a4aa4:
    // 0x1a4aa4: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1a4aa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a4aa8:
    // 0x1a4aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4aac:
    // 0x1a4aac: 0xc068866  jal         func_1A2198
label_1a4ab0:
    if (ctx->pc == 0x1A4AB0u) {
        ctx->pc = 0x1A4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AACu;
        // 0x1a4ab0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4AB4u;
        goto label_1a4ab4;
    }
    ctx->pc = 0x1A4AACu;
    SET_GPR_U32(ctx, 31, 0x1A4AB4u);
    ctx->pc = 0x1A4AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4AACu;
    // 0x1a4ab0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A4AACu, 0x1A4AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AB4u;
label_1a4ab4:
    // 0x1a4ab4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ab8:
    // 0x1a4ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4abc:
    // 0x1a4abc: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x1a4abcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1a4ac0:
    // 0x1a4ac0: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x1a4ac0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1a4ac4:
    // 0x1a4ac4: 0xe6360008  swc1        $f22, 0x8($s1)
    ctx->pc = 0x1a4ac4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1a4ac8:
    // 0x1a4ac8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a4ac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4acc:
    // 0x1a4acc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4ad0:
    // 0x1a4ad0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a4ad4:
    if (ctx->pc == 0x1A4AD4u) {
        ctx->pc = 0x1A4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AD0u;
        // 0x1a4ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4AD8u;
        goto label_1a4ad8;
    }
    ctx->pc = 0x1A4AD0u;
    {
        const bool branch_taken_0x1a4ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AD0u;
        // 0x1a4ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ad0) {
            ctx->pc = 0x1A4AE8u;
            goto label_1a4ae8;
        }
    }
    ctx->pc = 0x1A4AD8u;
label_1a4ad8:
    // 0x1a4ad8: 0x40f809  jalr        $v0
label_1a4adc:
    if (ctx->pc == 0x1A4ADCu) {
        ctx->pc = 0x1A4AE0u;
        goto label_1a4ae0;
    }
    ctx->pc = 0x1A4AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4AE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4AD8u, 0x1A4AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4AE0u;
label_1a4ae0:
    // 0x1a4ae0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a4ae4:
    if (ctx->pc == 0x1A4AE4u) {
        ctx->pc = 0x1A4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AE0u;
        // 0x1a4ae4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4AE8u;
        goto label_1a4ae8;
    }
    ctx->pc = 0x1A4AE0u;
    {
        const bool branch_taken_0x1a4ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AE0u;
        // 0x1a4ae4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ae0) {
            ctx->pc = 0x1A4B14u;
            goto label_1a4b14;
        }
    }
    ctx->pc = 0x1A4AE8u;
label_1a4ae8:
    // 0x1a4ae8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a4ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a4aec:
    // 0x1a4aec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a4af0:
    if (ctx->pc == 0x1A4AF0u) {
        ctx->pc = 0x1A4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AECu;
        // 0x1a4af0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4AF4u;
        goto label_1a4af4;
    }
    ctx->pc = 0x1A4AECu;
    {
        const bool branch_taken_0x1a4aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4aec) {
            ctx->pc = 0x1A4AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4AECu;
            // 0x1a4af0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4B00u;
            goto label_1a4b00;
        }
    }
    ctx->pc = 0x1A4AF4u;
label_1a4af4:
    // 0x1a4af4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a4af8:
    // 0x1a4af8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a4afc:
    if (ctx->pc == 0x1A4AFCu) {
        ctx->pc = 0x1A4AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AF8u;
        // 0x1a4afc: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B00u;
        goto label_1a4b00;
    }
    ctx->pc = 0x1A4AF8u;
    {
        const bool branch_taken_0x1a4af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AF8u;
        // 0x1a4afc: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4af8) {
            ctx->pc = 0x1A4B14u;
            goto label_1a4b14;
        }
    }
    ctx->pc = 0x1A4B00u;
label_1a4b00:
    // 0x1a4b00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4b04:
    // 0x1a4b04: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a4b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a4b08:
    // 0x1a4b08: 0xc068186  jal         func_1A0618
label_1a4b0c:
    if (ctx->pc == 0x1A4B0Cu) {
        ctx->pc = 0x1A4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B08u;
        // 0x1a4b0c: 0x24a59220  addiu       $a1, $a1, -0x6DE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B10u;
        goto label_1a4b10;
    }
    ctx->pc = 0x1A4B08u;
    SET_GPR_U32(ctx, 31, 0x1A4B10u);
    ctx->pc = 0x1A4B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B08u;
    // 0x1a4b0c: 0x24a59220  addiu       $a1, $a1, -0x6DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4B08u, 0x1A4B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B10u;
label_1a4b10:
    // 0x1a4b10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a4b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4b14:
    // 0x1a4b14: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1a4b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4b18:
    // 0x1a4b18: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a4b18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4b1c:
    // 0x1a4b1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a4b20:
    if (ctx->pc == 0x1A4B20u) {
        ctx->pc = 0x1A4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B1Cu;
        // 0x1a4b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B24u;
        goto label_1a4b24;
    }
    ctx->pc = 0x1A4B1Cu;
    {
        const bool branch_taken_0x1a4b1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B1Cu;
        // 0x1a4b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b1c) {
            ctx->pc = 0x1A4B28u;
            goto label_1a4b28;
        }
    }
    ctx->pc = 0x1A4B24u;
label_1a4b24:
    // 0x1a4b24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b28:
    // 0x1a4b28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1a4b2c:
    if (ctx->pc == 0x1A4B2Cu) {
        ctx->pc = 0x1A4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B28u;
        // 0x1a4b2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B30u;
        goto label_1a4b30;
    }
    ctx->pc = 0x1A4B28u;
    {
        const bool branch_taken_0x1a4b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b28) {
            ctx->pc = 0x1A4B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4B28u;
            // 0x1a4b2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4B40u;
            goto label_1a4b40;
        }
    }
    ctx->pc = 0x1A4B30u;
label_1a4b30:
    // 0x1a4b30: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1a4b30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1a4b34:
    // 0x1a4b34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a4b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a4b38:
    // 0x1a4b38: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a4b38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a4b3c:
    // 0x1a4b3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4b3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4b40:
    // 0x1a4b40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4b40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4b44:
    // 0x1a4b44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4b48:
    // 0x1a4b48: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x1a4b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a4b4c:
    // 0x1a4b4c: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x1a4b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a4b50:
    // 0x1a4b50: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1a4b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4b54:
    // 0x1a4b54: 0x3e00008  jr          $ra
label_1a4b58:
    if (ctx->pc == 0x1A4B58u) {
        ctx->pc = 0x1A4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B54u;
        // 0x1a4b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B5Cu;
        goto label_fallthrough_0x1a4b54;
    }
    ctx->pc = 0x1A4B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B54u;
        // 0x1a4b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4b54:
    ctx->pc = 0x1A4B5Cu;
}
