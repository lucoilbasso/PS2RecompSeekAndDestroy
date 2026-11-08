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

// Function: entry_00125bd0
// Address: 0x125bd0 - 0x125cdc
void entry_00125bd0_0x125bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125bd0_0x125bd0");
#endif

    switch (ctx->pc) {
        case 0x125c5cu: goto label_125c5c;
        case 0x125ca0u: goto label_125ca0;
        case 0x125cb8u: goto label_125cb8;
        default: break;
    }

    ctx->pc = 0x125bd0u;

label_125bd0:
    // 0x125bd0: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x125bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_125bd4:
    // 0x125bd4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x125bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_125bd8:
    // 0x125bd8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x125bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_125bdc:
    // 0x125bdc: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x125bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_125be0:
    // 0x125be0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x125be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125be4:
    // 0x125be4: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x125be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125be8:
    // 0x125be8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x125be8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_125bec:
    // 0x125bec: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x125becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_125bf0:
    // 0x125bf0: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x125bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_125bf4:
    // 0x125bf4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x125bf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_125bf8:
    // 0x125bf8: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x125bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_125bfc:
    // 0x125bfc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x125bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125c00:
    // 0x125c00: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x125c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_125c04:
    // 0x125c04: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x125c04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_125c08:
    // 0x125c08: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x125c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_125c0c:
    // 0x125c0c: 0x4602b836  c.le.s      $f23, $f2
    ctx->pc = 0x125c0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_125c10:
    // 0x125c10: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x125c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125c14:
    // 0x125c14: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x125c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_125c18:
    // 0x125c18: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x125c18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_125c1c:
    // 0x125c1c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_125c20:
    if (ctx->pc == 0x125C20u) {
        ctx->pc = 0x125C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C1Cu;
        // 0x125c20: 0xe6230018  swc1        $f3, 0x18($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C24u;
        goto label_125c24;
    }
    ctx->pc = 0x125C1Cu;
    {
        const bool branch_taken_0x125c1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x125C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C1Cu;
        // 0x125c20: 0xe6230018  swc1        $f3, 0x18($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c1c) {
            ctx->pc = 0x125CDCu;
            return;
        }
    }
    ctx->pc = 0x125C24u;
label_125c24:
    // 0x125c24: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x125c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_125c28:
    // 0x125c28: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x125c28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_125c2c:
    // 0x125c2c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x125c2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_125c30:
    // 0x125c30: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x125c30u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_125c34:
    // 0x125c34: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x125c34u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_125c38:
    // 0x125c38: 0xfac40000  sqc2        $vf4, 0x0($s6)
    ctx->pc = 0x125c38u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_125c3c:
    // 0x125c3c: 0xfac50010  sqc2        $vf5, 0x10($s6)
    ctx->pc = 0x125c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_125c40:
    // 0x125c40: 0xfac60020  sqc2        $vf6, 0x20($s6)
    ctx->pc = 0x125c40u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[6]));
label_125c44:
    // 0x125c44: 0xfac70030  sqc2        $vf7, 0x30($s6)
    ctx->pc = 0x125c44u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[7]));
label_125c48:
    // 0x125c48: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x125c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_125c4c:
    // 0x125c4c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x125c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_125c50:
    // 0x125c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125c54:
    // 0x125c54: 0xc06ee76  jal         func_1BB9D8
label_125c58:
    if (ctx->pc == 0x125C58u) {
        ctx->pc = 0x125C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C54u;
        // 0x125c58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125C5Cu;
        goto label_125c5c;
    }
    ctx->pc = 0x125C54u;
    SET_GPR_U32(ctx, 31, 0x125C5Cu);
    ctx->pc = 0x125C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C54u;
    // 0x125c58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x125C54u, 0x125C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C5Cu;
label_125c5c:
    // 0x125c5c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x125c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125c60:
    // 0x125c60: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x125c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125c64:
    // 0x125c64: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x125c64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_125c68:
    // 0x125c68: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x125c68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_125c6c:
    // 0x125c6c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x125c6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_125c70:
    // 0x125c70: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x125c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_125c74:
    // 0x125c74: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x125c74u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_125c78:
    // 0x125c78: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x125c78u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_125c7c:
    // 0x125c7c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x125c7cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_125c80:
    // 0x125c80: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x125c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_125c84:
    // 0x125c84: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x125c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_125c88:
    // 0x125c88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_125c8c:
    // 0x125c8c: 0x24c60068  addiu       $a2, $a2, 0x68
    ctx->pc = 0x125c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 104));
label_125c90:
    // 0x125c90: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x125c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_125c94:
    // 0x125c94: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x125c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_125c98:
    // 0x125c98: 0x40f809  jalr        $v0
label_125c9c:
    if (ctx->pc == 0x125C9Cu) {
        ctx->pc = 0x125C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C98u;
        // 0x125c9c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CA0u;
        goto label_125ca0;
    }
    ctx->pc = 0x125C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125CA0u);
        ctx->pc = 0x125C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C98u;
        // 0x125c9c: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125C98u, 0x125CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125CA0u;
label_125ca0:
    // 0x125ca0: 0x7e800000  sq          $zero, 0x0($s4)
    ctx->pc = 0x125ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 0));
label_125ca4:
    // 0x125ca4: 0x240400cf  addiu       $a0, $zero, 0xCF
    ctx->pc = 0x125ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
label_125ca8:
    // 0x125ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x125ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125cac:
    // 0x125cac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125cb0:
    // 0x125cb0: 0xc04c5ac  jal         func_1316B0
label_125cb4:
    if (ctx->pc == 0x125CB4u) {
        ctx->pc = 0x125CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CB0u;
        // 0x125cb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125CB8u;
        goto label_125cb8;
    }
    ctx->pc = 0x125CB0u;
    SET_GPR_U32(ctx, 31, 0x125CB8u);
    ctx->pc = 0x125CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CB0u;
    // 0x125cb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x125CB0u, 0x125CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CB8u;
label_125cb8:
    // 0x125cb8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x125cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125cbc:
    // 0x125cbc: 0xae370020  sw          $s7, 0x20($s1)
    ctx->pc = 0x125cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 23));
label_125cc0:
    // 0x125cc0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x125cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_125cc4:
    // 0x125cc4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x125cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_125cc8:
    // 0x125cc8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x125cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_125ccc:
    // 0x125ccc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x125cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_125cd0:
    // 0x125cd0: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x125cd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_125cd4:
    // 0x125cd4: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x125cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_125cd8:
    // 0x125cd8: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x125cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->pc = 0x125cdcu;
}
