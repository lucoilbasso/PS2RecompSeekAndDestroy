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

// Function: __Debug_Param_Chagne__Fv
// Address: 0x13cb30 - 0x13cc40
void ps2___Debug_Param_Chagne__Fv_0x13cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___Debug_Param_Chagne__Fv_0x13cb30");
#endif

    switch (ctx->pc) {
        case 0x13cbf8u: goto label_13cbf8;
        case 0x13cc24u: goto label_13cc24;
        case 0x13cc34u: goto label_13cc34;
        default: break;
    }

    ctx->pc = 0x13cb30u;

    // 0x13cb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13cb34: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x13cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13cb38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cb3c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x13cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13cb40: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13cb44: 0x94640012  lhu         $a0, 0x12($v1)
    ctx->pc = 0x13cb44u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x13cb48: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x13cb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x13cb4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CB4Cu;
    {
        const bool branch_taken_0x13cb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB4Cu;
        // 0x13cb50: 0x8f828a40  lw          $v0, -0x75C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb4c) {
            ctx->pc = 0x13CB5Cu;
            goto label_13cb5c;
        }
    }
    ctx->pc = 0x13CB54u;
    // 0x13cb54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13cb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13cb58: 0xaf828a40  sw          $v0, -0x75C0($gp)
    ctx->pc = 0x13cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937152), GPR_U32(ctx, 2));
label_13cb5c:
    // 0x13cb5c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x13cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x13cb60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13cb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13cb64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CB64u;
    {
        const bool branch_taken_0x13cb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB64u;
        // 0x13cb68: 0x8f828a3c  lw          $v0, -0x75C4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb64) {
            ctx->pc = 0x13CB74u;
            goto label_13cb74;
        }
    }
    ctx->pc = 0x13CB6Cu;
    // 0x13cb6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13cb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13cb70: 0xaf828a3c  sw          $v0, -0x75C4($gp)
    ctx->pc = 0x13cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937148), GPR_U32(ctx, 2));
label_13cb74:
    // 0x13cb74: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x13cb74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13cb78: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x13cb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x13cb7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CB7Cu;
    {
        const bool branch_taken_0x13cb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB7Cu;
        // 0x13cb80: 0xc7808a34  lwc1        $f0, -0x75CC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb7c) {
            ctx->pc = 0x13CB90u;
            goto label_13cb90;
        }
    }
    ctx->pc = 0x13CB84u;
    // 0x13cb84: 0xc7818128  lwc1        $f1, -0x7ED8($gp)
    ctx->pc = 0x13cb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cb88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13cb88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13cb8c: 0xe7808a34  swc1        $f0, -0x75CC($gp)
    ctx->pc = 0x13cb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), bits); }
label_13cb90:
    // 0x13cb90: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x13cb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x13cb94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13CB94u;
    {
        const bool branch_taken_0x13cb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB94u;
        // 0x13cb98: 0xc7818a34  lwc1        $f1, -0x75CC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb94) {
            ctx->pc = 0x13CBB8u;
            goto label_13cbb8;
        }
    }
    ctx->pc = 0x13CB9Cu;
    // 0x13cb9c: 0xc780812c  lwc1        $f0, -0x7ED4($gp)
    ctx->pc = 0x13cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cba0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13cba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13cba4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x13CBA4u;
    {
        const bool branch_taken_0x13cba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBA4u;
        // 0x13cba8: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cba4) {
            ctx->pc = 0x13CBBCu;
            goto label_13cbbc;
        }
    }
    ctx->pc = 0x13CBACu;
    // 0x13cbac: 0xc7808130  lwc1        $f0, -0x7ED0($gp)
    ctx->pc = 0x13cbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cbb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13cbb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13cbb4: 0xe7808a34  swc1        $f0, -0x75CC($gp)
    ctx->pc = 0x13cbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), bits); }
label_13cbb8:
    // 0x13cbb8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x13cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_13cbbc:
    // 0x13cbbc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x13cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13cbc0: 0x94630020  lhu         $v1, 0x20($v1)
    ctx->pc = 0x13cbc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13cbc4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x13cbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x13cbc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CBC8u;
    {
        const bool branch_taken_0x13cbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBC8u;
        // 0x13cbcc: 0x8f828a38  lw          $v0, -0x75C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbc8) {
            ctx->pc = 0x13CBD8u;
            goto label_13cbd8;
        }
    }
    ctx->pc = 0x13CBD0u;
    // 0x13cbd0: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x13cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x13cbd4: 0xaf828a38  sw          $v0, -0x75C8($gp)
    ctx->pc = 0x13cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937144), GPR_U32(ctx, 2));
label_13cbd8:
    // 0x13cbd8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x13cbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x13cbdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CBDCu;
    {
        const bool branch_taken_0x13cbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBDCu;
        // 0x13cbe0: 0x8f828a38  lw          $v0, -0x75C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbdc) {
            ctx->pc = 0x13CBECu;
            goto label_13cbec;
        }
    }
    ctx->pc = 0x13CBE4u;
    // 0x13cbe4: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x13cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x13cbe8: 0xaf828a38  sw          $v0, -0x75C8($gp)
    ctx->pc = 0x13cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937144), GPR_U32(ctx, 2));
label_13cbec:
    // 0x13cbec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13cbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cbf0: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x13CBF0u;
    SET_GPR_U32(ctx, 31, 0x13CBF8u);
    ctx->pc = 0x13CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CBF0u;
    // 0x13cbf4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x13CBF0u, 0x13CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CBF8u;
label_13cbf8:
    // 0x13cbf8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x13cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x13cbfc: 0xc7818134  lwc1        $f1, -0x7ECC($gp)
    ctx->pc = 0x13cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cc00: 0xc7808a34  lwc1        $f0, -0x75CC($gp)
    ctx->pc = 0x13cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cc04: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x13cc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x13cc08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13cc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13cc0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13cc0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13cc10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13cc10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x13cc14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13cc14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13cc18: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x13cc18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13cc1c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x13CC1Cu;
    SET_GPR_U32(ctx, 31, 0x13CC24u);
    ctx->pc = 0x13CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC1Cu;
    // 0x13cc20: 0x248468b0  addiu       $a0, $a0, 0x68B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x13CC1Cu, 0x13CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC24u;
label_13cc24:
    // 0x13cc24: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x13cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x13cc28: 0x8f858a38  lw          $a1, -0x75C8($gp)
    ctx->pc = 0x13cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937144)));
    // 0x13cc2c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x13CC2Cu;
    SET_GPR_U32(ctx, 31, 0x13CC34u);
    ctx->pc = 0x13CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC2Cu;
    // 0x13cc30: 0x248468c8  addiu       $a0, $a0, 0x68C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x13CC2Cu, 0x13CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC34u;
label_13cc34:
    // 0x13cc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cc38: 0x3e00008  jr          $ra
    ctx->pc = 0x13CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC38u;
        // 0x13cc3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CC40u;
}
