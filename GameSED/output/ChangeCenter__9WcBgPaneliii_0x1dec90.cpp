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

// Function: ChangeCenter__9WcBgPaneliii
// Address: 0x1dec90 - 0x1dee38
void ChangeCenter__9WcBgPaneliii_0x1dec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeCenter__9WcBgPaneliii_0x1dec90");
#endif

    switch (ctx->pc) {
        case 0x1dedb8u: goto label_1dedb8;
        default: break;
    }

    ctx->pc = 0x1dec90u;

    // 0x1dec90: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1dec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dec94: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1dec94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec98: 0x14a20027  bne         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1DEC98u;
    {
        const bool branch_taken_0x1dec98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DEC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC98u;
        // 0x1dec9c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec98) {
            ctx->pc = 0x1DED38u;
            goto label_1ded38;
        }
    }
    ctx->pc = 0x1DECA0u;
    // 0x1deca0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1deca0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1deca4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1deca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1deca8: 0x25270150  addiu       $a3, $t1, 0x150
    ctx->pc = 0x1deca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x1decac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1decacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1decb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1decb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1decb4: 0xa4e5000e  sh          $a1, 0xE($a3)
    ctx->pc = 0x1decb4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x1decb8: 0x25280180  addiu       $t0, $t1, 0x180
    ctx->pc = 0x1decb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 384));
    // 0x1decbc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1decbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1decc0: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x1decc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x1decc4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1decc4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1decc8: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x1decc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x1deccc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1decccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1decd0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1decd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1decd4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1decd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1decd8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1decd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1decdc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1decdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1dece0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1dece0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1dece4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1dece4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1dece8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1dece8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1decec: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x1dececu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x1decf0: 0x25260190  addiu       $a2, $t1, 0x190
    ctx->pc = 0x1decf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 400));
    // 0x1decf4: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x1decf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1decf8: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x1decf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1decfc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1decfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ded00: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1ded00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ded04: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1ded04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ded08: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1ded08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1ded0c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1ded0cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ded10: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1ded10u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1ded14: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1ded14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1ded18: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1ded18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1ded1c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1ded1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ded20: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x1ded20u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ded24: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1ded24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ded28: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1ded28u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ded2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DED2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DED2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DED34u;
    // 0x1ded34: 0x0  nop
    ctx->pc = 0x1ded34u;
    // NOP
label_1ded38:
    // 0x1ded38: 0x25280150  addiu       $t0, $t1, 0x150
    ctx->pc = 0x1ded38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x1ded3c: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1ded3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ded40: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DED40u;
    {
        const bool branch_taken_0x1ded40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED40u;
        // 0x1ded44: 0xa505000e  sh          $a1, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded40) {
            ctx->pc = 0x1DEDBCu;
            goto label_1dedbc;
        }
    }
    ctx->pc = 0x1DED48u;
    // 0x1ded48: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1ded48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ded4c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1ded4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1ded50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ded50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ded54: 0x8c638010  lw          $v1, -0x7FF0($v1)
    ctx->pc = 0x1ded54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934544)));
    // 0x1ded58: 0x600008  jr          $v1
    ctx->pc = 0x1DED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DED60u: goto label_1ded60;
            case 0x1DED88u: goto label_1ded88;
            case 0x1DED90u: goto label_1ded90;
            case 0x1DED98u: goto label_1ded98;
            case 0x1DEDA0u: goto label_1deda0;
            case 0x1DEDB0u: goto label_1dedb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DED58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DED60u;
label_1ded60:
    // 0x1ded60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ded60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ded64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ded64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ded68: 0xc5010028  lwc1        $f1, 0x28($t0)
    ctx->pc = 0x1ded68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ded6c: 0xc502002c  lwc1        $f2, 0x2C($t0)
    ctx->pc = 0x1ded6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ded70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ded70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ded74: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1ded74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ded78: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x1ded78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x1ded7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DED7Cu;
    {
        const bool branch_taken_0x1ded7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED7Cu;
        // 0x1ded80: 0xe5020024  swc1        $f2, 0x24($t0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded7c) {
            ctx->pc = 0x1DEDBCu;
            goto label_1dedbc;
        }
    }
    ctx->pc = 0x1DED84u;
    // 0x1ded84: 0x0  nop
    ctx->pc = 0x1ded84u;
    // NOP
label_1ded88:
    // 0x1ded88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DED88u;
    {
        const bool branch_taken_0x1ded88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED88u;
        // 0x1ded8c: 0xad000020  sw          $zero, 0x20($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded88) {
            ctx->pc = 0x1DEDBCu;
            goto label_1dedbc;
        }
    }
    ctx->pc = 0x1DED90u;
label_1ded90:
    // 0x1ded90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DED90u;
    {
        const bool branch_taken_0x1ded90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED90u;
        // 0x1ded94: 0xc5000028  lwc1        $f0, 0x28($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded90) {
            ctx->pc = 0x1DEDB8u;
            goto label_1dedb8;
        }
    }
    ctx->pc = 0x1DED98u;
label_1ded98:
    // 0x1ded98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DED98u;
    {
        const bool branch_taken_0x1ded98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED98u;
        // 0x1ded9c: 0xad000024  sw          $zero, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded98) {
            ctx->pc = 0x1DEDBCu;
            goto label_1dedbc;
        }
    }
    ctx->pc = 0x1DEDA0u;
label_1deda0:
    // 0x1deda0: 0xc500002c  lwc1        $f0, 0x2C($t0)
    ctx->pc = 0x1deda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deda4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEDA4u;
    {
        const bool branch_taken_0x1deda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDA4u;
        // 0x1deda8: 0xe5000024  swc1        $f0, 0x24($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deda4) {
            ctx->pc = 0x1DEDBCu;
            goto label_1dedbc;
        }
    }
    ctx->pc = 0x1DEDACu;
    // 0x1dedac: 0x0  nop
    ctx->pc = 0x1dedacu;
    // NOP
label_1dedb0:
    // 0x1dedb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dedb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dedb4: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x1dedb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_1dedb8:
    // 0x1dedb8: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x1dedb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_1dedbc:
    // 0x1dedbc: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x1dedbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dedc0: 0x25070030  addiu       $a3, $t0, 0x30
    ctx->pc = 0x1dedc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x1dedc4: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x1dedc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dedc8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1dedc8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1dedcc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1dedccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1dedd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dedd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dedd4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1dedd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1dedd8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1dedd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1deddc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1deddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1dede0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1dede0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1dede4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1dede4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1dede8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1dede8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1dedec: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1dedecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1dedf0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1dedf0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1dedf4: 0xc503002c  lwc1        $f3, 0x2C($t0)
    ctx->pc = 0x1dedf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dedf8: 0x25060040  addiu       $a2, $t0, 0x40
    ctx->pc = 0x1dedf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x1dedfc: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x1dedfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dee00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1dee00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1dee04: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x1dee04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1dee08: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1dee08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1dee0c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1dee0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1dee10: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1dee10u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1dee14: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1dee14u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1dee18: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1dee18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1dee1c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1dee1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1dee20: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1dee20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dee24: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x1dee24u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dee28: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1dee28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1dee2c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1dee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1dee30: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEE38u;
}
