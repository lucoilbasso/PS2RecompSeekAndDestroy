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

// Function: S_Point2Box_Through__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i
// Address: 0x1590d0 - 0x15955c
void S_Point2Box_Through__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i_0x1590d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_Point2Box_Through__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i_0x1590d0");
#endif

    switch (ctx->pc) {
        case 0x159540u: goto label_159540;
        default: break;
    }

    ctx->pc = 0x1590d0u;

    // 0x1590d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1590d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1590d4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1590d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1590d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1590dc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1590dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1590e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1590e4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1590e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1590e8: 0x8d230480  lw          $v1, 0x480($t1)
    ctx->pc = 0x1590e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
    // 0x1590ec: 0x244a0120  addiu       $t2, $v0, 0x120
    ctx->pc = 0x1590ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1590f0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1590F0u;
    {
        const bool branch_taken_0x1590f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1590F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590F0u;
        // 0x1590f4: 0x24480110  addiu       $t0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590f0) {
            ctx->pc = 0x159118u;
            goto label_159118;
        }
    }
    ctx->pc = 0x1590F8u;
    // 0x1590f8: 0x252203e0  addiu       $v0, $t1, 0x3E0
    ctx->pc = 0x1590f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 992));
    // 0x1590fc: 0x252303f0  addiu       $v1, $t1, 0x3F0
    ctx->pc = 0x1590fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1008));
    // 0x159100: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x159100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159104: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x159104u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159108: 0xf8450000  sqc2        $vf5, 0x0($v0)
    ctx->pc = 0x159108u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15910c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15910cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x159110: 0x8d240484  lw          $a0, 0x484($t1)
    ctx->pc = 0x159110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1156)));
    // 0x159114: 0xad240480  sw          $a0, 0x480($t1)
    ctx->pc = 0x159114u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1152), GPR_U32(ctx, 4));
label_159118:
    // 0x159118: 0x8d220480  lw          $v0, 0x480($t1)
    ctx->pc = 0x159118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
    // 0x15911c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15911cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x159120: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x159120u;
    {
        const bool branch_taken_0x159120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159120) {
            ctx->pc = 0x159124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159120u;
            // 0x159124: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159224u;
            goto label_159224;
        }
    }
    ctx->pc = 0x159128u;
    // 0x159128: 0xc52203e0  lwc1        $f2, 0x3E0($t1)
    ctx->pc = 0x159128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15912c: 0xc52603e4  lwc1        $f6, 0x3E4($t1)
    ctx->pc = 0x15912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x159130: 0xc5070000  lwc1        $f7, 0x0($t0)
    ctx->pc = 0x159130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x159134: 0xc52103f4  lwc1        $f1, 0x3F4($t1)
    ctx->pc = 0x159134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159138: 0x460238c1  sub.s       $f3, $f7, $f2
    ctx->pc = 0x159138u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x15913c: 0xc52c03f0  lwc1        $f12, 0x3F0($t1)
    ctx->pc = 0x15913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159140: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x159140u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x159144: 0xc52503e8  lwc1        $f5, 0x3E8($t1)
    ctx->pc = 0x159144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x159148: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x159148u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x15914c: 0xc52003f8  lwc1        $f0, 0x3F8($t1)
    ctx->pc = 0x15914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159150: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x159150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159154: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x159154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x159158: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x159158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15915c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15915cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x159160: 0x0  nop
    ctx->pc = 0x159160u;
    // NOP
    // 0x159164: 0x0  nop
    ctx->pc = 0x159164u;
    // NOP
    // 0x159168: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x159168u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x15916c: 0x0  nop
    ctx->pc = 0x15916cu;
    // NOP
    // 0x159170: 0x0  nop
    ctx->pc = 0x159170u;
    // NOP
    // 0x159174: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x159174u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x159178: 0x46060980  add.s       $f6, $f1, $f6
    ctx->pc = 0x159178u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x15917c: 0x46062036  c.le.s      $f4, $f6
    ctx->pc = 0x15917cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159180: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x159180u;
    {
        const bool branch_taken_0x159180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159180u;
        // 0x159184: 0x46050100  add.s       $f4, $f0, $f5 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159180) {
            ctx->pc = 0x159220u;
            goto label_159220;
        }
    }
    ctx->pc = 0x159188u;
    // 0x159188: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x159188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15918c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x15918cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159190: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x159190u;
    {
        const bool branch_taken_0x159190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159190) {
            ctx->pc = 0x159194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159190u;
            // 0x159194: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159224u;
            goto label_159224;
        }
    }
    ctx->pc = 0x159198u;
    // 0x159198: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x159198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15919c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x15919cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1591a0: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x1591A0u;
    {
        const bool branch_taken_0x1591a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1591a0) {
            ctx->pc = 0x1591A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1591A0u;
            // 0x1591a4: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159224u;
            goto label_159224;
        }
    }
    ctx->pc = 0x1591A8u;
    // 0x1591a8: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x1591a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1591ac: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1591acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1591b0: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x1591B0u;
    {
        const bool branch_taken_0x1591b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1591b0) {
            ctx->pc = 0x1591B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1591B0u;
            // 0x1591b4: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159224u;
            goto label_159224;
        }
    }
    ctx->pc = 0x1591B8u;
    // 0x1591b8: 0x460c3b01  sub.s       $f12, $f7, $f12
    ctx->pc = 0x1591b8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x1591bc: 0x25260410  addiu       $a2, $t1, 0x410
    ctx->pc = 0x1591bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1040));
    // 0x1591c0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1591c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1591c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1591c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1591c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1591c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1591cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1591ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1591d0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1591d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1591d4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1591d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1591d8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1591d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1591dc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1591dcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1591e0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1591e0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1591e4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1591e4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1591e8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1591e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1591ec: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x1591ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1591f0: 0x25260420  addiu       $a2, $t1, 0x420
    ctx->pc = 0x1591f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1056));
    // 0x1591f4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1591f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1591f8: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x1591f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1591fc: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x1591fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x159200: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x159200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x159204: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x159204u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x159208: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x159208u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x15920c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15920cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x159210: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x159210u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x159214: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x159214u;
    {
        const bool branch_taken_0x159214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159214u;
        // 0x159218: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159214) {
            ctx->pc = 0x159534u;
            goto label_159534;
        }
    }
    ctx->pc = 0x15921Cu;
    // 0x15921c: 0x0  nop
    ctx->pc = 0x15921cu;
    // NOP
label_159220:
    // 0x159220: 0x8d220480  lw          $v0, 0x480($t1)
    ctx->pc = 0x159220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
label_159224:
    // 0x159224: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x159224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x159228: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x159228u;
    {
        const bool branch_taken_0x159228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159228) {
            ctx->pc = 0x15922Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159228u;
            // 0x15922c: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15932Cu;
            goto label_15932c;
        }
    }
    ctx->pc = 0x159230u;
    // 0x159230: 0xc52603e4  lwc1        $f6, 0x3E4($t1)
    ctx->pc = 0x159230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x159234: 0xc5230400  lwc1        $f3, 0x400($t1)
    ctx->pc = 0x159234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159238: 0xc5470000  lwc1        $f7, 0x0($t2)
    ctx->pc = 0x159238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15923c: 0xc52103f4  lwc1        $f1, 0x3F4($t1)
    ctx->pc = 0x15923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159240: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x159240u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x159244: 0xc52203e0  lwc1        $f2, 0x3E0($t1)
    ctx->pc = 0x159244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159248: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x159248u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x15924c: 0xc52c03f0  lwc1        $f12, 0x3F0($t1)
    ctx->pc = 0x15924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159250: 0xc52503e8  lwc1        $f5, 0x3E8($t1)
    ctx->pc = 0x159250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x159254: 0x460c1081  sub.s       $f2, $f2, $f12
    ctx->pc = 0x159254u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x159258: 0xc52003f8  lwc1        $f0, 0x3F8($t1)
    ctx->pc = 0x159258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15925c: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x15925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159260: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x159260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x159264: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x159264u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x159268: 0x0  nop
    ctx->pc = 0x159268u;
    // NOP
    // 0x15926c: 0x0  nop
    ctx->pc = 0x15926cu;
    // NOP
    // 0x159270: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x159270u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x159274: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x159274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x159278: 0x0  nop
    ctx->pc = 0x159278u;
    // NOP
    // 0x15927c: 0x0  nop
    ctx->pc = 0x15927cu;
    // NOP
    // 0x159280: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x159280u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x159284: 0x46060980  add.s       $f6, $f1, $f6
    ctx->pc = 0x159284u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x159288: 0x46062036  c.le.s      $f4, $f6
    ctx->pc = 0x159288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15928c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x15928Cu;
    {
        const bool branch_taken_0x15928c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15928Cu;
        // 0x159290: 0x460500c0  add.s       $f3, $f0, $f5 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15928c) {
            ctx->pc = 0x159328u;
            goto label_159328;
        }
    }
    ctx->pc = 0x159294u;
    // 0x159294: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x159294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159298: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x159298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15929c: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
    ctx->pc = 0x15929Cu;
    {
        const bool branch_taken_0x15929c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15929c) {
            ctx->pc = 0x1592A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15929Cu;
            // 0x1592a0: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15932Cu;
            goto label_15932c;
        }
    }
    ctx->pc = 0x1592A4u;
    // 0x1592a4: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1592a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1592a8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1592a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1592ac: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x1592ACu;
    {
        const bool branch_taken_0x1592ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1592ac) {
            ctx->pc = 0x1592B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1592ACu;
            // 0x1592b0: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15932Cu;
            goto label_15932c;
        }
    }
    ctx->pc = 0x1592B4u;
    // 0x1592b4: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x1592b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1592b8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1592b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1592bc: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x1592BCu;
    {
        const bool branch_taken_0x1592bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1592bc) {
            ctx->pc = 0x1592C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1592BCu;
            // 0x1592c0: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15932Cu;
            goto label_15932c;
        }
    }
    ctx->pc = 0x1592C4u;
    // 0x1592c4: 0x46076301  sub.s       $f12, $f12, $f7
    ctx->pc = 0x1592c4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[7]);
    // 0x1592c8: 0x25260410  addiu       $a2, $t1, 0x410
    ctx->pc = 0x1592c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1040));
    // 0x1592cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1592ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1592d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1592d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1592d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1592d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1592d8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1592d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1592dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1592dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1592e0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1592e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1592e4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1592e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1592e8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1592e8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1592ec: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1592ecu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1592f0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1592f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1592f4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1592f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1592f8: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x1592f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1592fc: 0x25260420  addiu       $a2, $t1, 0x420
    ctx->pc = 0x1592fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1056));
    // 0x159300: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x159300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x159304: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x159304u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x159308: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x159308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15930c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15930cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x159310: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x159310u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x159314: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x159314u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x159318: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x159318u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15931c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15931cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x159320: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x159320u;
    {
        const bool branch_taken_0x159320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159320u;
        // 0x159324: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159320) {
            ctx->pc = 0x159534u;
            goto label_159534;
        }
    }
    ctx->pc = 0x159328u;
label_159328:
    // 0x159328: 0x8d220480  lw          $v0, 0x480($t1)
    ctx->pc = 0x159328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
label_15932c:
    // 0x15932c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x159330: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x159330u;
    {
        const bool branch_taken_0x159330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159330) {
            ctx->pc = 0x159334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159330u;
            // 0x159334: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159434u;
            goto label_159434;
        }
    }
    ctx->pc = 0x159338u;
    // 0x159338: 0xc52203e8  lwc1        $f2, 0x3E8($t1)
    ctx->pc = 0x159338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15933c: 0xc52603e4  lwc1        $f6, 0x3E4($t1)
    ctx->pc = 0x15933cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x159340: 0xc5070008  lwc1        $f7, 0x8($t0)
    ctx->pc = 0x159340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x159344: 0xc52103f4  lwc1        $f1, 0x3F4($t1)
    ctx->pc = 0x159344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159348: 0x460238c1  sub.s       $f3, $f7, $f2
    ctx->pc = 0x159348u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x15934c: 0xc52c03f8  lwc1        $f12, 0x3F8($t1)
    ctx->pc = 0x15934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159350: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x159350u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x159354: 0xc52503e0  lwc1        $f5, 0x3E0($t1)
    ctx->pc = 0x159354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x159358: 0x46026081  sub.s       $f2, $f12, $f2
    ctx->pc = 0x159358u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x15935c: 0xc52003f0  lwc1        $f0, 0x3F0($t1)
    ctx->pc = 0x15935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159360: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x159360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159364: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x159364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x159368: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x159368u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15936c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15936cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x159370: 0x0  nop
    ctx->pc = 0x159370u;
    // NOP
    // 0x159374: 0x0  nop
    ctx->pc = 0x159374u;
    // NOP
    // 0x159378: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x159378u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x15937c: 0x0  nop
    ctx->pc = 0x15937cu;
    // NOP
    // 0x159380: 0x0  nop
    ctx->pc = 0x159380u;
    // NOP
    // 0x159384: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x159384u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x159388: 0x46060980  add.s       $f6, $f1, $f6
    ctx->pc = 0x159388u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x15938c: 0x46062036  c.le.s      $f4, $f6
    ctx->pc = 0x15938cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159390: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x159390u;
    {
        const bool branch_taken_0x159390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159390u;
        // 0x159394: 0x46050100  add.s       $f4, $f0, $f5 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159390) {
            ctx->pc = 0x159430u;
            goto label_159430;
        }
    }
    ctx->pc = 0x159398u;
    // 0x159398: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x159398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15939c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x15939cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1593a0: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x1593A0u;
    {
        const bool branch_taken_0x1593a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1593a0) {
            ctx->pc = 0x1593A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1593A0u;
            // 0x1593a4: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159434u;
            goto label_159434;
        }
    }
    ctx->pc = 0x1593A8u;
    // 0x1593a8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1593a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1593ac: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1593acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1593b0: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x1593B0u;
    {
        const bool branch_taken_0x1593b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1593b0) {
            ctx->pc = 0x1593B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1593B0u;
            // 0x1593b4: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159434u;
            goto label_159434;
        }
    }
    ctx->pc = 0x1593B8u;
    // 0x1593b8: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x1593b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1593bc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1593bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1593c0: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x1593C0u;
    {
        const bool branch_taken_0x1593c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1593c0) {
            ctx->pc = 0x1593C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1593C0u;
            // 0x1593c4: 0x8d220480  lw          $v0, 0x480($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159434u;
            goto label_159434;
        }
    }
    ctx->pc = 0x1593C8u;
    // 0x1593c8: 0x460c3b01  sub.s       $f12, $f7, $f12
    ctx->pc = 0x1593c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x1593cc: 0x25260410  addiu       $a2, $t1, 0x410
    ctx->pc = 0x1593ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1040));
    // 0x1593d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1593d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1593d4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1593d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1593d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1593d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1593dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1593dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1593e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1593e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1593e4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1593e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1593e8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1593e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1593ec: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1593ecu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1593f0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1593f0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1593f4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1593f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1593f8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1593f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1593fc: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x1593fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159400: 0x25260420  addiu       $a2, $t1, 0x420
    ctx->pc = 0x159400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1056));
    // 0x159404: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x159404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x159408: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x159408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15940c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15940cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x159410: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x159410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x159414: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x159414u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x159418: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x159418u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x15941c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15941cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x159420: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x159420u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x159424: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x159424u;
    {
        const bool branch_taken_0x159424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159424u;
        // 0x159428: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159424) {
            ctx->pc = 0x159534u;
            goto label_159534;
        }
    }
    ctx->pc = 0x15942Cu;
    // 0x15942c: 0x0  nop
    ctx->pc = 0x15942cu;
    // NOP
label_159430:
    // 0x159430: 0x8d220480  lw          $v0, 0x480($t1)
    ctx->pc = 0x159430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1152)));
label_159434:
    // 0x159434: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x159434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x159438: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x159438u;
    {
        const bool branch_taken_0x159438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159438) {
            ctx->pc = 0x15943Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159438u;
            // 0x15943c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15954Cu;
            goto label_15954c;
        }
    }
    ctx->pc = 0x159440u;
    // 0x159440: 0xc52603e4  lwc1        $f6, 0x3E4($t1)
    ctx->pc = 0x159440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x159444: 0xc5230408  lwc1        $f3, 0x408($t1)
    ctx->pc = 0x159444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159448: 0xc5470008  lwc1        $f7, 0x8($t2)
    ctx->pc = 0x159448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15944c: 0xc52103f4  lwc1        $f1, 0x3F4($t1)
    ctx->pc = 0x15944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159450: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x159450u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x159454: 0xc52203e8  lwc1        $f2, 0x3E8($t1)
    ctx->pc = 0x159454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159458: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x159458u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x15945c: 0xc52c03f8  lwc1        $f12, 0x3F8($t1)
    ctx->pc = 0x15945cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159460: 0xc52503e0  lwc1        $f5, 0x3E0($t1)
    ctx->pc = 0x159460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x159464: 0x460c1081  sub.s       $f2, $f2, $f12
    ctx->pc = 0x159464u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x159468: 0xc52003f0  lwc1        $f0, 0x3F0($t1)
    ctx->pc = 0x159468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15946c: 0xc5040004  lwc1        $f4, 0x4($t0)
    ctx->pc = 0x15946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159470: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x159470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x159474: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x159474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x159478: 0x0  nop
    ctx->pc = 0x159478u;
    // NOP
    // 0x15947c: 0x0  nop
    ctx->pc = 0x15947cu;
    // NOP
    // 0x159480: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x159480u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x159484: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x159484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x159488: 0x0  nop
    ctx->pc = 0x159488u;
    // NOP
    // 0x15948c: 0x0  nop
    ctx->pc = 0x15948cu;
    // NOP
    // 0x159490: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x159490u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x159494: 0x46060980  add.s       $f6, $f1, $f6
    ctx->pc = 0x159494u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x159498: 0x46062036  c.le.s      $f4, $f6
    ctx->pc = 0x159498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15949c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x15949Cu;
    {
        const bool branch_taken_0x15949c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1594A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15949Cu;
        // 0x1594a0: 0x460500c0  add.s       $f3, $f0, $f5 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15949c) {
            ctx->pc = 0x159548u;
            goto label_159548;
        }
    }
    ctx->pc = 0x1594A4u;
    // 0x1594a4: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x1594a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1594a8: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x1594a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1594ac: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x1594ACu;
    {
        const bool branch_taken_0x1594ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1594B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594ACu;
        // 0x1594b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594ac) {
            ctx->pc = 0x15954Cu;
            goto label_15954c;
        }
    }
    ctx->pc = 0x1594B4u;
    // 0x1594b4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1594b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1594b8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1594b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1594bc: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x1594BCu;
    {
        const bool branch_taken_0x1594bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1594bc) {
            ctx->pc = 0x1594C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1594BCu;
            // 0x1594c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159550u;
            goto label_159550;
        }
    }
    ctx->pc = 0x1594C4u;
    // 0x1594c4: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x1594c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1594c8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1594c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1594cc: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
    ctx->pc = 0x1594CCu;
    {
        const bool branch_taken_0x1594cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1594cc) {
            ctx->pc = 0x1594D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1594CCu;
            // 0x1594d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159550u;
            goto label_159550;
        }
    }
    ctx->pc = 0x1594D4u;
    // 0x1594d4: 0x46076301  sub.s       $f12, $f12, $f7
    ctx->pc = 0x1594d4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[7]);
    // 0x1594d8: 0x25260410  addiu       $a2, $t1, 0x410
    ctx->pc = 0x1594d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1040));
    // 0x1594dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1594dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1594e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1594e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1594e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1594e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1594e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1594e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1594ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1594ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1594f0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1594f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1594f4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1594f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1594f8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1594f8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1594fc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1594fcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x159500: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x159500u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x159504: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x159504u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x159508: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x159508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15950c: 0x25260420  addiu       $a2, $t1, 0x420
    ctx->pc = 0x15950cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1056));
    // 0x159510: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x159510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x159514: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x159514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x159518: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x159518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15951c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15951cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x159520: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x159520u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x159524: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x159524u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x159528: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x159528u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15952c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15952cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x159530: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x159530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_159534:
    // 0x159534: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x159534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159538: 0xc0562d2  jal         func_158B48
    ctx->pc = 0x159538u;
    SET_GPR_U32(ctx, 31, 0x159540u);
    ctx->pc = 0x15953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159538u;
    // 0x15953c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158B48u, 0x159538u, 0x159540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159540u;
label_159540:
    // 0x159540: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x159540u;
    {
        const bool branch_taken_0x159540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159540u;
        // 0x159544: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159540) {
            ctx->pc = 0x15954Cu;
            goto label_15954c;
        }
    }
    ctx->pc = 0x159548u;
label_159548:
    // 0x159548: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x159548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15954c:
    // 0x15954c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15954cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159550:
    // 0x159550: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x159550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159554: 0x3e00008  jr          $ra
    ctx->pc = 0x159554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159554u;
        // 0x159558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15955Cu;
}
