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

// Function: entry_00159224
// Address: 0x159224 - 0x159328
void entry_00159224_0x159224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159224_0x159224");
#endif

    ctx->pc = 0x159224u;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x159328u;
}
