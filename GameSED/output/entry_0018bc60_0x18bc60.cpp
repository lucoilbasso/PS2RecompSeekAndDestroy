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

// Function: entry_0018bc60
// Address: 0x18bc60 - 0x18bd78
void entry_0018bc60_0x18bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bc60_0x18bc60");
#endif

    switch (ctx->pc) {
        case 0x18bc6cu: goto label_18bc6c;
        default: break;
    }

    ctx->pc = 0x18bc60u;

    // 0x18bc60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18bc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc64: 0xc061422  jal         func_185088
    ctx->pc = 0x18BC64u;
    SET_GPR_U32(ctx, 31, 0x18BC6Cu);
    ctx->pc = 0x18BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BC64u;
    // 0x18bc68: 0x269400e0  addiu       $s4, $s4, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x18BC64u, 0x18BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BC6Cu;
label_18bc6c:
    // 0x18bc6c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18bc6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18bc70: 0xafb400b0  sw          $s4, 0xB0($sp)
    ctx->pc = 0x18bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 20));
    // 0x18bc74: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18bc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18bc78: 0xc6260068  lwc1        $f6, 0x68($s1)
    ctx->pc = 0x18bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18bc7c: 0xc629006c  lwc1        $f9, 0x6C($s1)
    ctx->pc = 0x18bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x18bc80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x18bc80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18bc84: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18bc84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18bc88: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18bc88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18bc8c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18bc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18bc90: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18bc90u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18bc94: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18bc94u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18bc98: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18bc98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18bc9c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x18bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x18bca0: 0x96c70000  lhu         $a3, 0x0($s6)
    ctx->pc = 0x18bca0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x18bca4: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x18bca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18bca8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18bca8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bcac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18bcacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18bcb0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x18bcb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x18bcb4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18bcb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18bcb8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18bcb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18bcbc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18bcbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18bcc0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18bcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18bcc4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18bcc4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18bcc8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18bcc8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18bccc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18bcccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18bcd0: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x18bcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x18bcd4: 0x96c60002  lhu         $a2, 0x2($s6)
    ctx->pc = 0x18bcd4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x18bcd8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x18bcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18bcdc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x18bcdcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bce0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18bce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18bce4: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x18bce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x18bce8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x18bce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18bcec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18bcecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18bcf0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18bcf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18bcf4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18bcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18bcf8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18bcf8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18bcfc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18bcfcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18bd00: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18bd00u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18bd04: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x18bd04u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x18bd08: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x18bd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18bd0c: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x18bd0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18bd10: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x18bd10u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18bd14: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x18bd14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18bd18: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x18bd1c: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x18bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x18bd20: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x18bd20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18bd24: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18bd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x18bd28: 0x96c40004  lhu         $a0, 0x4($s6)
    ctx->pc = 0x18bd28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x18bd2c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x18bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x18bd30: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x18bd30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18bd34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18bd34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18bd38: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x18bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18bd3c: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x18bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bd40: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x18bd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x18bd44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18bd44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18bd48: 0x18c00147  blez        $a2, . + 4 + (0x147 << 2)
    ctx->pc = 0x18BD48u;
    {
        const bool branch_taken_0x18bd48 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x18BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD48u;
        // 0x18bd4c: 0x46020280  add.s       $f10, $f0, $f2 (Delay Slot)
        ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd48) {
            ctx->pc = 0x18C268u;
            return;
        }
    }
    ctx->pc = 0x18BD50u;
    // 0x18bd50: 0xdfa200a8  ld          $v0, 0xA8($sp)
    ctx->pc = 0x18bd50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x18bd54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18bd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18bd58: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x18bd58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x18bd5c: 0x21bfc  dsll32      $v1, $v0, 15
    ctx->pc = 0x18bd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 15));
    // 0x18bd60: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x18bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x18bd64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18bd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18bd68: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18bd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18bd6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18bd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18bd70: 0xffa300c0  sd          $v1, 0xC0($sp)
    ctx->pc = 0x18bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 3));
    // 0x18bd74: 0x0  nop
    ctx->pc = 0x18bd74u;
    // NOP
    ctx->pc = 0x18bd78u;
}
