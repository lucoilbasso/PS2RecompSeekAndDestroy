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

// Function: MainWeaponReaction__7ApcTank
// Address: 0x152d68 - 0x152e58
void MainWeaponReaction__7ApcTank_0x152d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MainWeaponReaction__7ApcTank_0x152d68");
#endif

    switch (ctx->pc) {
        case 0x152d84u: goto label_152d84;
        case 0x152decu: goto label_152dec;
        case 0x152e1cu: goto label_152e1c;
        default: break;
    }

    ctx->pc = 0x152d68u;

    // 0x152d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152d6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x152d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152d70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x152d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x152d74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x152d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x152d7c: 0xc058602  jal         func_161808
    ctx->pc = 0x152D7Cu;
    SET_GPR_U32(ctx, 31, 0x152D84u);
    ctx->pc = 0x152D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D7Cu;
    // 0x152d80: 0x8e040690  lw          $a0, 0x690($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161808u, 0x152D7Cu, 0x152D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D84u;
label_152d84:
    // 0x152d84: 0xc6000268  lwc1        $f0, 0x268($s0)
    ctx->pc = 0x152d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152d88: 0x3c014451  lui         $at, 0x4451
    ctx->pc = 0x152d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17489 << 16));
    // 0x152d8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x152d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152d90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x152d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d94: 0xc78482bc  lwc1        $f4, -0x7D44($gp)
    ctx->pc = 0x152d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152d98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x152d98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x152d9c: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x152d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x152da0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x152da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x152da4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x152da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152da8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x152da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x152dac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x152dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x152db0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x152db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x152db4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x152db4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x152db8: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x152db8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x152dbc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x152dbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x152dc0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x152dc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x152dc4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x152dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x152dc8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x152dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x152dcc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x152dccu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x152dd0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x152dd0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x152dd4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x152dd4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x152dd8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x152dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x152ddc: 0x8e060694  lw          $a2, 0x694($s0)
    ctx->pc = 0x152ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x152de0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x152de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152de4: 0xc06760e  jal         func_19D838
    ctx->pc = 0x152DE4u;
    SET_GPR_U32(ctx, 31, 0x152DECu);
    ctx->pc = 0x152DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DE4u;
    // 0x152de8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D838u, 0x152DE4u, 0x152DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DECu;
label_152dec:
    // 0x152dec: 0x26030630  addiu       $v1, $s0, 0x630
    ctx->pc = 0x152decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x152df0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x152df0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152df4: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x152df4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152df8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x152df8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x152dfc: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x152dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x152e00: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x152e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x152e04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x152e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x152e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x152e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x152e10: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x152e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x152e14: 0xc06760e  jal         func_19D838
    ctx->pc = 0x152E14u;
    SET_GPR_U32(ctx, 31, 0x152E1Cu);
    ctx->pc = 0x152E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E14u;
    // 0x152e18: 0x63023  negu        $a2, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D838u, 0x152E14u, 0x152E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E1Cu;
label_152e1c:
    // 0x152e1c: 0xc78482c0  lwc1        $f4, -0x7D40($gp)
    ctx->pc = 0x152e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152e20: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x152e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152e24: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x152e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152e28: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x152e28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x152e2c: 0xc6010640  lwc1        $f1, 0x640($s0)
    ctx->pc = 0x152e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152e30: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x152e30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x152e34: 0xc6000648  lwc1        $f0, 0x648($s0)
    ctx->pc = 0x152e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152e38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x152e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x152e3c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x152e3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x152e40: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x152e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x152e44: 0xe6010640  swc1        $f1, 0x640($s0)
    ctx->pc = 0x152e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x152e48: 0xe6000648  swc1        $f0, 0x648($s0)
    ctx->pc = 0x152e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1608), bits); }
    // 0x152e4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x152e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152e50: 0x3e00008  jr          $ra
    ctx->pc = 0x152E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E50u;
        // 0x152e54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152E58u;
}
