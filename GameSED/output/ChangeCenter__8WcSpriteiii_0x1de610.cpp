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

// Function: ChangeCenter__8WcSpriteiii
// Address: 0x1de610 - 0x1de7b8
void ChangeCenter__8WcSpriteiii_0x1de610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeCenter__8WcSpriteiii_0x1de610");
#endif

    switch (ctx->pc) {
        case 0x1de738u: goto label_1de738;
        default: break;
    }

    ctx->pc = 0x1de610u;

    // 0x1de610: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1de610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1de614: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1de614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de618: 0x14a20027  bne         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1DE618u;
    {
        const bool branch_taken_0x1de618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE618u;
        // 0x1de61c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de618) {
            ctx->pc = 0x1DE6B8u;
            goto label_1de6b8;
        }
    }
    ctx->pc = 0x1DE620u;
    // 0x1de620: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1de620u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de624: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1de624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1de628: 0x25270150  addiu       $a3, $t1, 0x150
    ctx->pc = 0x1de628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x1de62c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de62cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de630: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1de634: 0xa4e5000e  sh          $a1, 0xE($a3)
    ctx->pc = 0x1de634u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x1de638: 0x25280180  addiu       $t0, $t1, 0x180
    ctx->pc = 0x1de638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 384));
    // 0x1de63c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1de63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1de640: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x1de640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x1de644: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1de644u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1de648: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x1de648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x1de64c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1de64cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1de650: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1de650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de654: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1de654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de658: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1de658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1de65c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1de65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1de660: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1de660u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1de664: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1de664u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1de668: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1de668u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1de66c: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x1de66cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x1de670: 0x25260190  addiu       $a2, $t1, 0x190
    ctx->pc = 0x1de670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 400));
    // 0x1de674: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x1de674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de678: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x1de678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de67c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1de67cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de680: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1de680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de684: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1de684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1de688: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1de688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1de68c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1de68cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1de690: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1de690u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1de694: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1de694u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1de698: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1de698u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1de69c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1de69cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1de6a0: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x1de6a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1de6a4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1de6a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de6a8: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1de6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1de6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE6B4u;
    // 0x1de6b4: 0x0  nop
    ctx->pc = 0x1de6b4u;
    // NOP
label_1de6b8:
    // 0x1de6b8: 0x25280150  addiu       $t0, $t1, 0x150
    ctx->pc = 0x1de6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x1de6bc: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1de6bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1de6c0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DE6C0u;
    {
        const bool branch_taken_0x1de6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6C0u;
        // 0x1de6c4: 0xa505000e  sh          $a1, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6c0) {
            ctx->pc = 0x1DE73Cu;
            goto label_1de73c;
        }
    }
    ctx->pc = 0x1DE6C8u;
    // 0x1de6c8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1de6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1de6cc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1de6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1de6d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1de6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1de6d4: 0x8c637fc0  lw          $v1, 0x7FC0($v1)
    ctx->pc = 0x1de6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32704)));
    // 0x1de6d8: 0x600008  jr          $v1
    ctx->pc = 0x1DE6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE6E0u: goto label_1de6e0;
            case 0x1DE708u: goto label_1de708;
            case 0x1DE710u: goto label_1de710;
            case 0x1DE718u: goto label_1de718;
            case 0x1DE720u: goto label_1de720;
            case 0x1DE730u: goto label_1de730;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE6D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DE6E0u;
label_1de6e0:
    // 0x1de6e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1de6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1de6e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1de6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de6e8: 0xc5010028  lwc1        $f1, 0x28($t0)
    ctx->pc = 0x1de6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de6ec: 0xc502002c  lwc1        $f2, 0x2C($t0)
    ctx->pc = 0x1de6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de6f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1de6f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1de6f4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1de6f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1de6f8: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x1de6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x1de6fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DE6FCu;
    {
        const bool branch_taken_0x1de6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6FCu;
        // 0x1de700: 0xe5020024  swc1        $f2, 0x24($t0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6fc) {
            ctx->pc = 0x1DE73Cu;
            goto label_1de73c;
        }
    }
    ctx->pc = 0x1DE704u;
    // 0x1de704: 0x0  nop
    ctx->pc = 0x1de704u;
    // NOP
label_1de708:
    // 0x1de708: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DE708u;
    {
        const bool branch_taken_0x1de708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE708u;
        // 0x1de70c: 0xad000020  sw          $zero, 0x20($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de708) {
            ctx->pc = 0x1DE73Cu;
            goto label_1de73c;
        }
    }
    ctx->pc = 0x1DE710u;
label_1de710:
    // 0x1de710: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE710u;
    {
        const bool branch_taken_0x1de710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE710u;
        // 0x1de714: 0xc5000028  lwc1        $f0, 0x28($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de710) {
            ctx->pc = 0x1DE738u;
            goto label_1de738;
        }
    }
    ctx->pc = 0x1DE718u;
label_1de718:
    // 0x1de718: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE718u;
    {
        const bool branch_taken_0x1de718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE718u;
        // 0x1de71c: 0xad000024  sw          $zero, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de718) {
            ctx->pc = 0x1DE73Cu;
            goto label_1de73c;
        }
    }
    ctx->pc = 0x1DE720u;
label_1de720:
    // 0x1de720: 0xc500002c  lwc1        $f0, 0x2C($t0)
    ctx->pc = 0x1de720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de724: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE724u;
    {
        const bool branch_taken_0x1de724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE724u;
        // 0x1de728: 0xe5000024  swc1        $f0, 0x24($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de724) {
            ctx->pc = 0x1DE73Cu;
            goto label_1de73c;
        }
    }
    ctx->pc = 0x1DE72Cu;
    // 0x1de72c: 0x0  nop
    ctx->pc = 0x1de72cu;
    // NOP
label_1de730:
    // 0x1de730: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de734: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x1de734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_1de738:
    // 0x1de738: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x1de738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_1de73c:
    // 0x1de73c: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x1de73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de740: 0x25070030  addiu       $a3, $t0, 0x30
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x1de744: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x1de744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de748: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1de748u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1de74c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1de74cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1de750: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1de750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de754: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1de754u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de758: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1de758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de75c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1de75cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1de760: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1de760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1de764: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1de764u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1de768: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1de768u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1de76c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1de76cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1de770: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1de770u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1de774: 0xc503002c  lwc1        $f3, 0x2C($t0)
    ctx->pc = 0x1de774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1de778: 0x25060040  addiu       $a2, $t0, 0x40
    ctx->pc = 0x1de778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x1de77c: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x1de77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de780: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1de780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de784: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x1de784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de788: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1de788u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1de78c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1de78cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1de790: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1de790u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1de794: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1de794u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1de798: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1de798u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1de79c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1de79cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1de7a0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1de7a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1de7a4: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x1de7a4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1de7a8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1de7a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1de7ac: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1de7acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1de7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE7B8u;
}
