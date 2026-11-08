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

// Function: ClearParam__7ApcTank
// Address: 0x14ead0 - 0x14f01c
void ClearParam__7ApcTank_0x14ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearParam__7ApcTank_0x14ead0");
#endif

    switch (ctx->pc) {
        case 0x14eae4u: goto label_14eae4;
        case 0x14eaecu: goto label_14eaec;
        case 0x14edc0u: goto label_14edc0;
        case 0x14ee80u: goto label_14ee80;
        case 0x14efecu: goto label_14efec;
        default: break;
    }

    ctx->pc = 0x14ead0u;

    // 0x14ead0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ead4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14ead8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14ead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14eadc: 0xc05337e  jal         func_14CDF8
    ctx->pc = 0x14EADCu;
    SET_GPR_U32(ctx, 31, 0x14EAE4u);
    ctx->pc = 0x14EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EADCu;
    // 0x14eae0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CDF8u, 0x14EADCu, 0x14EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAE4u;
label_14eae4:
    // 0x14eae4: 0xc053780  jal         func_14DE00
    ctx->pc = 0x14EAE4u;
    SET_GPR_U32(ctx, 31, 0x14EAECu);
    ctx->pc = 0x14EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAE4u;
    // 0x14eae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE00u, 0x14EAE4u, 0x14EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAECu;
label_14eaec:
    // 0x14eaec: 0x26020370  addiu       $v0, $s0, 0x370
    ctx->pc = 0x14eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x14eaf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14eaf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14eaf4: 0x26080260  addiu       $t0, $s0, 0x260
    ctx->pc = 0x14eaf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x14eaf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14eaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14eafc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14eafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14eb00: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x14eb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x14eb04: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x14eb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x14eb08: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x14eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x14eb0c: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x14eb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14eb10: 0xc503000c  lwc1        $f3, 0xC($t0)
    ctx->pc = 0x14eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14eb14: 0x0  nop
    ctx->pc = 0x14eb14u;
    // NOP
    // 0x14eb18: 0x0  nop
    ctx->pc = 0x14eb18u;
    // NOP
    // 0x14eb1c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x14eb1cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x14eb20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14eb24: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x14eb24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14eb28: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x14eb2c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14eb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x14eb30: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x14eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x14eb34: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x14eb34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x14eb38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x14EB38u;
    {
        const bool branch_taken_0x14eb38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB38u;
        // 0x14eb3c: 0xe5010010  swc1        $f1, 0x10($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb38) {
            ctx->pc = 0x14EB50u;
            goto label_14eb50;
        }
    }
    ctx->pc = 0x14EB40u;
    // 0x14eb40: 0xc78081f4  lwc1        $f0, -0x7E0C($gp)
    ctx->pc = 0x14eb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14eb44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14EB44u;
    {
        const bool branch_taken_0x14eb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB44u;
        // 0x14eb48: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb44) {
            ctx->pc = 0x14EB68u;
            goto label_14eb68;
        }
    }
    ctx->pc = 0x14EB4Cu;
    // 0x14eb4c: 0x0  nop
    ctx->pc = 0x14eb4cu;
    // NOP
label_14eb50:
    // 0x14eb50: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x14eb50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x14eb54: 0xc78281f8  lwc1        $f2, -0x7E08($gp)
    ctx->pc = 0x14eb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14eb58: 0xc78181fc  lwc1        $f1, -0x7E04($gp)
    ctx->pc = 0x14eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14eb5c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x14eb5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x14eb60: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14eb60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14eb64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14eb64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14eb68:
    // 0x14eb68: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x14eb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x14eb6c: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x14eb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14eb70: 0x25060030  addiu       $a2, $t0, 0x30
    ctx->pc = 0x14eb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x14eb74: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x14eb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14eb78: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14eb78u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14eb7c: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x14eb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14eb80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14eb80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14eb84: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x14eb84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14eb88: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14eb88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14eb8c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14eb90: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14eb90u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14eb94: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14eb94u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14eb98: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14eb98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14eb9c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14eb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14eba0: 0x25070040  addiu       $a3, $t0, 0x40
    ctx->pc = 0x14eba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x14eba4: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x14eba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14eba8: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x14eba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ebac: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x14ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ebb0: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x14ebb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ebb4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x14ebb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ebb8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14ebb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ebbc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ebc0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ebc0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ebc4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ebc4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ebc8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ebc8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ebcc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14ebccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x14ebd0: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x14ebd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ebd4: 0x25060050  addiu       $a2, $t0, 0x50
    ctx->pc = 0x14ebd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x14ebd8: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x14ebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ebdc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14ebdcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14ebe0: 0xc5030020  lwc1        $f3, 0x20($t0)
    ctx->pc = 0x14ebe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ebe4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14ebe4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14ebe8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14ebe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ebec: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x14ebecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ebf0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14ebf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ebf4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ebf8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ebf8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ebfc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ebfcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ec00: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ec00u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ec04: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14ec04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14ec08: 0xc502001c  lwc1        $f2, 0x1C($t0)
    ctx->pc = 0x14ec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ec0c: 0x25060060  addiu       $a2, $t0, 0x60
    ctx->pc = 0x14ec0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x14ec10: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x14ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ec14: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x14ec14u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x14ec18: 0xc5010020  lwc1        $f1, 0x20($t0)
    ctx->pc = 0x14ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ec1c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x14ec1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ec20: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14ec20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ec24: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x14ec24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ec28: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ec2c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ec2cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ec30: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ec30u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ec34: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ec34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ec38: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14ec38u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14ec3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ec3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ec40: 0x25060070  addiu       $a2, $t0, 0x70
    ctx->pc = 0x14ec40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x14ec44: 0xc5010020  lwc1        $f1, 0x20($t0)
    ctx->pc = 0x14ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ec48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14ec48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ec4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14ec4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ec50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14ec50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ec54: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ec54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ec58: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ec58u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ec5c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ec5cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ec60: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ec60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ec64: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14ec64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14ec68: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x14ec68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x14ec6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14ec6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14ec70: 0xc50000b8  lwc1        $f0, 0xB8($t0)
    ctx->pc = 0x14ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ec74: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x14ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ec78: 0x46010201  sub.s       $f8, $f0, $f1
    ctx->pc = 0x14ec78u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14ec7c: 0x46024228  max.s       $f8, $f8, $f2
    ctx->pc = 0x14ec7cu;
    ctx->f[8] = std::max(ctx->f[8], ctx->f[2]);
    // 0x14ec80: 0xc50400b4  lwc1        $f4, 0xB4($t0)
    ctx->pc = 0x14ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14ec84: 0xc50300d8  lwc1        $f3, 0xD8($t0)
    ctx->pc = 0x14ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ec88: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x14ec88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x14ec8c: 0xe50800c4  swc1        $f8, 0xC4($t0)
    ctx->pc = 0x14ec8cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 196), bits); }
    // 0x14ec90: 0x46011a41  sub.s       $f9, $f3, $f1
    ctx->pc = 0x14ec90u;
    ctx->f[9] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x14ec94: 0x0  nop
    ctx->pc = 0x14ec94u;
    // NOP
    // 0x14ec98: 0x0  nop
    ctx->pc = 0x14ec98u;
    // NOP
    // 0x14ec9c: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x14ec9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x14eca0: 0xe50400c0  swc1        $f4, 0xC0($t0)
    ctx->pc = 0x14eca0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 192), bits); }
    // 0x14eca4: 0x46024a68  max.s       $f9, $f9, $f2
    ctx->pc = 0x14eca4u;
    ctx->f[9] = std::max(ctx->f[9], ctx->f[2]);
    // 0x14eca8: 0xc50700d4  lwc1        $f7, 0xD4($t0)
    ctx->pc = 0x14eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14ecac: 0xc50a00a0  lwc1        $f10, 0xA0($t0)
    ctx->pc = 0x14ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x14ecb0: 0x460749c2  mul.s       $f7, $f9, $f7
    ctx->pc = 0x14ecb0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x14ecb4: 0xe50900e4  swc1        $f9, 0xE4($t0)
    ctx->pc = 0x14ecb4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 228), bits); }
    // 0x14ecb8: 0x46015281  sub.s       $f10, $f10, $f1
    ctx->pc = 0x14ecb8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x14ecbc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x14ecbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x14ecc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14ecc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ecc4: 0x0  nop
    ctx->pc = 0x14ecc4u;
    // NOP
    // 0x14ecc8: 0x0  nop
    ctx->pc = 0x14ecc8u;
    // NOP
    // 0x14eccc: 0x460339c3  div.s       $f7, $f7, $f3
    ctx->pc = 0x14ecccu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[7], ctx->f[3]); }
    // 0x14ecd0: 0xe50700e0  swc1        $f7, 0xE0($t0)
    ctx->pc = 0x14ecd0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 224), bits); }
    // 0x14ecd4: 0x460052a8  max.s       $f10, $f10, $f0
    ctx->pc = 0x14ecd4u;
    ctx->f[10] = std::max(ctx->f[10], ctx->f[0]);
    // 0x14ecd8: 0xc50e00ac  lwc1        $f14, 0xAC($t0)
    ctx->pc = 0x14ecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x14ecdc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x14ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x14ece0: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x14ece0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x14ece4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14ece4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ece8: 0x25030084  addiu       $v1, $t0, 0x84
    ctx->pc = 0x14ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 132));
    // 0x14ecec: 0xc7818200  lwc1        $f1, -0x7E00($gp)
    ctx->pc = 0x14ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ecf0: 0x24429b38  addiu       $v0, $v0, -0x64C8
    ctx->pc = 0x14ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941496));
    // 0x14ecf4: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x14ecf4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x14ecf8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14ecf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14ecfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14ecfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ed00: 0xc50d001c  lwc1        $f13, 0x1C($t0)
    ctx->pc = 0x14ed00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14ed04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ed08: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x14ed08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ed0c: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x14ed0cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x14ed10: 0xc50b00f4  lwc1        $f11, 0xF4($t0)
    ctx->pc = 0x14ed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x14ed14: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x14ed14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x14ed18: 0xc78f8204  lwc1        $f15, -0x7DFC($gp)
    ctx->pc = 0x14ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x14ed1c: 0x0  nop
    ctx->pc = 0x14ed1cu;
    // NOP
    // 0x14ed20: 0x0  nop
    ctx->pc = 0x14ed20u;
    // NOP
    // 0x14ed24: 0x46017383  div.s       $f14, $f14, $f1
    ctx->pc = 0x14ed24u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[14], ctx->f[1]); }
    // 0x14ed28: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x14ed28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x14ed2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14ed2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ed30: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x14ed30u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x14ed34: 0xc7808208  lwc1        $f0, -0x7DF8($gp)
    ctx->pc = 0x14ed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ed38: 0xc782820c  lwc1        $f2, -0x7DF4($gp)
    ctx->pc = 0x14ed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ed3c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x14ed3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x14ed40: 0xc50c00bc  lwc1        $f12, 0xBC($t0)
    ctx->pc = 0x14ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14ed44: 0xc50500dc  lwc1        $f5, 0xDC($t0)
    ctx->pc = 0x14ed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14ed48: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x14ed48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x14ed4c: 0xc50600f8  lwc1        $f6, 0xF8($t0)
    ctx->pc = 0x14ed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x14ed50: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x14ed50u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x14ed54: 0x0  nop
    ctx->pc = 0x14ed54u;
    // NOP
    // 0x14ed58: 0x0  nop
    ctx->pc = 0x14ed58u;
    // NOP
    // 0x14ed5c: 0x46037c03  div.s       $f16, $f15, $f3
    ctx->pc = 0x14ed5cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = FPU_DIV_S(ctx->f[15], ctx->f[3]); }
    // 0x14ed60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14ed60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14ed64: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14ed64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14ed68: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x14ed68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x14ed6c: 0xe50000a8  swc1        $f0, 0xA8($t0)
    ctx->pc = 0x14ed6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 168), bits); }
    // 0x14ed70: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x14ed70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x14ed74: 0xe50400c8  swc1        $f4, 0xC8($t0)
    ctx->pc = 0x14ed74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 200), bits); }
    // 0x14ed78: 0x460b18c1  sub.s       $f3, $f3, $f11
    ctx->pc = 0x14ed78u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[11]);
    // 0x14ed7c: 0xe50800cc  swc1        $f8, 0xCC($t0)
    ctx->pc = 0x14ed7cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 204), bits); }
    // 0x14ed80: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x14ed80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x14ed84: 0xe50a00a4  swc1        $f10, 0xA4($t0)
    ctx->pc = 0x14ed84u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 164), bits); }
    // 0x14ed88: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x14ed88u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x14ed8c: 0xe50500f0  swc1        $f5, 0xF0($t0)
    ctx->pc = 0x14ed8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 240), bits); }
    // 0x14ed90: 0x0  nop
    ctx->pc = 0x14ed90u;
    // NOP
    // 0x14ed94: 0x0  nop
    ctx->pc = 0x14ed94u;
    // NOP
    // 0x14ed98: 0x460d7bc3  div.s       $f15, $f15, $f13
    ctx->pc = 0x14ed98u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = FPU_DIV_S(ctx->f[15], ctx->f[13]); }
    // 0x14ed9c: 0xe5060100  swc1        $f6, 0x100($t0)
    ctx->pc = 0x14ed9cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 256), bits); }
    // 0x14eda0: 0x46024a42  mul.s       $f9, $f9, $f2
    ctx->pc = 0x14eda0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x14eda4: 0xe50300fc  swc1        $f3, 0xFC($t0)
    ctx->pc = 0x14eda4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 252), bits); }
    // 0x14eda8: 0x46007024  .word       0x46007024                   # cvt.w.s     $f0, $f14 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14eda8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[14]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14edac: 0xe50000b0  swc1        $f0, 0xB0($t0)
    ctx->pc = 0x14edacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 176), bits); }
    // 0x14edb0: 0xe50c00d0  swc1        $f12, 0xD0($t0)
    ctx->pc = 0x14edb0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 208), bits); }
    // 0x14edb4: 0xe50700e8  swc1        $f7, 0xE8($t0)
    ctx->pc = 0x14edb4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 232), bits); }
    // 0x14edb8: 0xe50900ec  swc1        $f9, 0xEC($t0)
    ctx->pc = 0x14edb8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 236), bits); }
    // 0x14edbc: 0x0  nop
    ctx->pc = 0x14edbcu;
    // NOP
label_14edc0:
    // 0x14edc0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14edc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14edc8: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x14edc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x14edcc: 0xe460fffc  swc1        $f0, -0x4($v1)
    ctx->pc = 0x14edccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x14edd0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x14edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14edd4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x14edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x14edd8: 0x46018042  mul.s       $f1, $f16, $f1
    ctx->pc = 0x14edd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    // 0x14eddc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x14eddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14ede0: 0x481fff7  bgez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14EDE0u;
    {
        const bool branch_taken_0x14ede0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x14EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDE0u;
        // 0x14ede4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ede0) {
            ctx->pc = 0x14EDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14edc0;
        }
    }
    ctx->pc = 0x14EDE8u;
    // 0x14ede8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ede8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14edec: 0x260803b0  addiu       $t0, $s0, 0x3B0
    ctx->pc = 0x14edecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x14edf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14edf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14edf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14edf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14edf8: 0x260603e0  addiu       $a2, $s0, 0x3E0
    ctx->pc = 0x14edf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
    // 0x14edfc: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x14edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x14ee00: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x14ee00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x14ee04: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x14ee04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x14ee08: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x14ee08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x14ee0c: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x14ee0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x14ee10: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x14ee10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x14ee14: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x14ee14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x14ee18: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x14ee18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x14ee1c: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x14ee1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x14ee20: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14ee20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ee24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14ee24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ee28: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14ee28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ee2c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ee30: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ee30u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ee34: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ee34u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ee38: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ee38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ee3c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14ee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14ee40: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x14ee40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x14ee44: 0x26020400  addiu       $v0, $s0, 0x400
    ctx->pc = 0x14ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x14ee48: 0xe5000044  swc1        $f0, 0x44($t0)
    ctx->pc = 0x14ee48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 68), bits); }
    // 0x14ee4c: 0xad000048  sw          $zero, 0x48($t0)
    ctx->pc = 0x14ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 0));
    // 0x14ee50: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ee54: 0xe5000060  swc1        $f0, 0x60($t0)
    ctx->pc = 0x14ee54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 96), bits); }
    // 0x14ee58: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14ee58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x14ee5c: 0xe5000064  swc1        $f0, 0x64($t0)
    ctx->pc = 0x14ee5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 100), bits); }
    // 0x14ee60: 0x260a0600  addiu       $t2, $s0, 0x600
    ctx->pc = 0x14ee60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x14ee64: 0xe5000068  swc1        $f0, 0x68($t0)
    ctx->pc = 0x14ee64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 104), bits); }
    // 0x14ee68: 0x260905b0  addiu       $t1, $s0, 0x5B0
    ctx->pc = 0x14ee68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
    // 0x14ee6c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14ee6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14ee70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14ee70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ee74: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x14ee74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee78: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x14ee78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14ee7c: 0x0  nop
    ctx->pc = 0x14ee7cu;
    // NOP
label_14ee80:
    // 0x14ee80: 0x24e60070  addiu       $a2, $a3, 0x70
    ctx->pc = 0x14ee80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x14ee84: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14ee84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ee88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14ee88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ee8c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14ee8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ee90: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ee94: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ee94u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ee98: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ee98u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ee9c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ee9cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14eea0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14eea4: 0xe4e10080  swc1        $f1, 0x80($a3)
    ctx->pc = 0x14eea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 128), bits); }
    // 0x14eea8: 0x24e600a0  addiu       $a2, $a3, 0xA0
    ctx->pc = 0x14eea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x14eeac: 0xa0e00087  sb          $zero, 0x87($a3)
    ctx->pc = 0x14eeacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eeb0: 0xa0e00086  sb          $zero, 0x86($a3)
    ctx->pc = 0x14eeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eeb4: 0xa0e00085  sb          $zero, 0x85($a3)
    ctx->pc = 0x14eeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 133), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eeb8: 0xa0e00084  sb          $zero, 0x84($a3)
    ctx->pc = 0x14eeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eebc: 0xe4e10088  swc1        $f1, 0x88($a3)
    ctx->pc = 0x14eebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 136), bits); }
    // 0x14eec0: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x14eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x14eec4: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x14eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x14eec8: 0xace00098  sw          $zero, 0x98($a3)
    ctx->pc = 0x14eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 0));
    // 0x14eecc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14eeccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14eed0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14eed0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14eed4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14eed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14eed8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14eedc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14eedcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14eee0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14eee0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14eee4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14eee4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14eee8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14eeec: 0xa0e0009f  sb          $zero, 0x9F($a3)
    ctx->pc = 0x14eeecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 159), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eef0: 0xa0e0009e  sb          $zero, 0x9E($a3)
    ctx->pc = 0x14eef0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 158), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eef4: 0xa0e0009d  sb          $zero, 0x9D($a3)
    ctx->pc = 0x14eef4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 157), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eef8: 0xa0e0009c  sb          $zero, 0x9C($a3)
    ctx->pc = 0x14eef8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eefc: 0xf9200000  sqc2        $vf0, 0x0($t1)
    ctx->pc = 0x14eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ef00: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x14ef00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x14ef04: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x14ef04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x14ef08: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x14ef08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x14ef0c: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x14ef0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x14ef10: 0x561ffdb  bgez        $t3, . + 4 + (-0x25 << 2)
    ctx->pc = 0x14EF10u;
    {
        const bool branch_taken_0x14ef10 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x14EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF10u;
        // 0x14ef14: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef10) {
            ctx->pc = 0x14EE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ee80;
        }
    }
    ctx->pc = 0x14EF18u;
    // 0x14ef18: 0x25020270  addiu       $v0, $t0, 0x270
    ctx->pc = 0x14ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 624));
    // 0x14ef1c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ef20: 0x25030280  addiu       $v1, $t0, 0x280
    ctx->pc = 0x14ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 640));
    // 0x14ef24: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x14ef24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ef28: 0x25020290  addiu       $v0, $t0, 0x290
    ctx->pc = 0x14ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 656));
    // 0x14ef2c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14ef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ef30: 0x250302a0  addiu       $v1, $t0, 0x2A0
    ctx->pc = 0x14ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 672));
    // 0x14ef34: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x14ef34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ef38: 0x250702b0  addiu       $a3, $t0, 0x2B0
    ctx->pc = 0x14ef38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 688));
    // 0x14ef3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ef3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ef40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14ef40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14ef44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14ef44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ef48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14ef48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ef4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14ef4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ef50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14ef50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ef54: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ef58: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ef58u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ef5c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ef5cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ef60: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ef60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ef64: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14ef64u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x14ef68: 0x250602c0  addiu       $a2, $t0, 0x2C0
    ctx->pc = 0x14ef68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 704));
    // 0x14ef6c: 0xf8c00000  sqc2        $vf0, 0x0($a2)
    ctx->pc = 0x14ef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ef70: 0xad0002dc  sw          $zero, 0x2DC($t0)
    ctx->pc = 0x14ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 732), GPR_U32(ctx, 0));
    // 0x14ef74: 0x26040260  addiu       $a0, $s0, 0x260
    ctx->pc = 0x14ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x14ef78: 0xad0002d0  sw          $zero, 0x2D0($t0)
    ctx->pc = 0x14ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 720), GPR_U32(ctx, 0));
    // 0x14ef7c: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x14ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x14ef80: 0xad0002d8  sw          $zero, 0x2D8($t0)
    ctx->pc = 0x14ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 728), GPR_U32(ctx, 0));
    // 0x14ef84: 0x346377ff  ori         $v1, $v1, 0x77FF
    ctx->pc = 0x14ef84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30719);
    // 0x14ef88: 0x260503b0  addiu       $a1, $s0, 0x3B0
    ctx->pc = 0x14ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x14ef8c: 0x2406dfff  addiu       $a2, $zero, -0x2001
    ctx->pc = 0x14ef8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x14ef90: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14ef94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14ef94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef98: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x14ef98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14ef9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14ef9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14efa0: 0xe50102d4  swc1        $f1, 0x2D4($t0)
    ctx->pc = 0x14efa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 724), bits); }
    // 0x14efa4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x14efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x14efa8: 0xaca002d0  sw          $zero, 0x2D0($a1)
    ctx->pc = 0x14efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 720), GPR_U32(ctx, 0));
    // 0x14efac: 0xe4a102d4  swc1        $f1, 0x2D4($a1)
    ctx->pc = 0x14efacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 724), bits); }
    // 0x14efb0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14efb4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14efb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14efb8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EFB8u;
    {
        const bool branch_taken_0x14efb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFB8u;
        // 0x14efbc: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efb8) {
            ctx->pc = 0x14EFC8u;
            goto label_14efc8;
        }
    }
    ctx->pc = 0x14EFC0u;
    // 0x14efc0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14efc4: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x14efc4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14efc8:
    // 0x14efc8: 0x51200011  beql        $t1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x14EFC8u;
    {
        const bool branch_taken_0x14efc8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x14efc8) {
            ctx->pc = 0x14EFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EFC8u;
            // 0x14efcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F010u;
            goto label_14f010;
        }
    }
    ctx->pc = 0x14EFD0u;
    // 0x14efd0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14efd4: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x14efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x14efd8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x14efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x14efdc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EFDCu;
    {
        const bool branch_taken_0x14efdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFDCu;
        // 0x14efe0: 0xae030698  sw          $v1, 0x698($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efdc) {
            ctx->pc = 0x14EFECu;
            goto label_14efec;
        }
    }
    ctx->pc = 0x14EFE4u;
    // 0x14efe4: 0xc0540a4  jal         func_150290
    ctx->pc = 0x14EFE4u;
    SET_GPR_U32(ctx, 31, 0x14EFECu);
    ctx->pc = 0x14EFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EFE4u;
    // 0x14efe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150290u, 0x14EFE4u, 0x14EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EFECu;
label_14efec:
    // 0x14efec: 0x26020870  addiu       $v0, $s0, 0x870
    ctx->pc = 0x14efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    // 0x14eff0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14eff0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14eff4: 0xae000894  sw          $zero, 0x894($s0)
    ctx->pc = 0x14eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2196), GPR_U32(ctx, 0));
    // 0x14eff8: 0x26020820  addiu       $v0, $s0, 0x820
    ctx->pc = 0x14eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x14effc: 0xae000814  sw          $zero, 0x814($s0)
    ctx->pc = 0x14effcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2068), GPR_U32(ctx, 0));
    // 0x14f000: 0xae000818  sw          $zero, 0x818($s0)
    ctx->pc = 0x14f000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 0));
    // 0x14f004: 0xae00081c  sw          $zero, 0x81C($s0)
    ctx->pc = 0x14f004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2076), GPR_U32(ctx, 0));
    // 0x14f008: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14f008u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14f00c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14f00cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14f010:
    // 0x14f010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14f010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14f014: 0x3e00008  jr          $ra
    ctx->pc = 0x14F014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F014u;
        // 0x14f018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F01Cu;
}
