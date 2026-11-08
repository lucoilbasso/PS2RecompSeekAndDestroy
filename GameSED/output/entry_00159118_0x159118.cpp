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

// Function: entry_00159118
// Address: 0x159118 - 0x159220
void entry_00159118_0x159118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159118_0x159118");
#endif

    ctx->pc = 0x159118u;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x15921Cu;
    // 0x15921c: 0x0  nop
    ctx->pc = 0x15921cu;
    // NOP
    ctx->pc = 0x159220u;
}
