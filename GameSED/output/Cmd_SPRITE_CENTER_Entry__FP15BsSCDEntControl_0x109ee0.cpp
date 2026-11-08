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

// Function: Cmd_SPRITE_CENTER_Entry__FP15BsSCDEntControl
// Address: 0x109ee0 - 0x109fc4
void Cmd_SPRITE_CENTER_Entry__FP15BsSCDEntControl_0x109ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SPRITE_CENTER_Entry__FP15BsSCDEntControl_0x109ee0");
#endif

    switch (ctx->pc) {
        case 0x109f08u: goto label_109f08;
        case 0x109f1cu: goto label_109f1c;
        default: break;
    }

    ctx->pc = 0x109ee0u;

    // 0x109ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x109ee4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x109ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109ee8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x109ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x109eec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x109eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x109ef0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x109ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x109ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x109ef8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109efc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x109efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x109f00: 0xc04110c  jal         func_104430
    ctx->pc = 0x109F00u;
    SET_GPR_U32(ctx, 31, 0x109F08u);
    ctx->pc = 0x109F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F00u;
    // 0x109f04: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x109F00u, 0x109F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F08u;
label_109f08:
    // 0x109f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x109f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109f14: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x109F14u;
    SET_GPR_U32(ctx, 31, 0x109F1Cu);
    ctx->pc = 0x109F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F14u;
    // 0x109f18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x109F14u, 0x109F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F1Cu;
label_109f1c:
    // 0x109f1c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x109f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x109f20: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x109f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x109f24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x109f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x109f28: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x109f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x109f2c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x109f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x109f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109f34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x109f34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x109f38: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x109f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x109f3c: 0xa4c3000e  sh          $v1, 0xE($a2)
    ctx->pc = 0x109f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x109f40: 0xe4c10020  swc1        $f1, 0x20($a2)
    ctx->pc = 0x109f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x109f44: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x109f44u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x109f48: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x109f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x109f4c: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x109f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x109f50: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x109f50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x109f54: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x109f54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x109f58: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x109f58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x109f5c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x109f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x109f60: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x109f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x109f64: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x109f64u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x109f68: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x109f68u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x109f6c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x109f6cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x109f70: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x109f70u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x109f74: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x109f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x109f78: 0xc4c1002c  lwc1        $f1, 0x2C($a2)
    ctx->pc = 0x109f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x109f7c: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x109f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x109f80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x109f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x109f84: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x109f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x109f88: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x109f88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x109f8c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x109f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x109f90: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x109f90u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x109f94: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x109f94u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x109f98: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x109f98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x109f9c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x109f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x109fa0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x109fa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x109fa4: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x109fa4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x109fa8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x109fa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x109fac: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x109facu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x109fb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x109fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109fb4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x109fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109fb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x109fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x109FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FBCu;
        // 0x109fc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109FC4u;
}
