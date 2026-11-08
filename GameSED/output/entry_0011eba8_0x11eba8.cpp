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

// Function: entry_0011eba8
// Address: 0x11eba8 - 0x11ec00
void entry_0011eba8_0x11eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eba8_0x11eba8");
#endif

    ctx->pc = 0x11eba8u;

    // 0x11eba8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x11eba8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ebac: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x11ebacu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ebb0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x11ebb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11ebb4: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x11ebb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11ebb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ebbc: 0x94c2002a  lhu         $v0, 0x2A($a2)
    ctx->pc = 0x11ebbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x11ebc0: 0x54430037  bnel        $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x11EBC0u;
    {
        const bool branch_taken_0x11ebc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11ebc0) {
            ctx->pc = 0x11EBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EBC0u;
            // 0x11ebc4: 0x24c200a0  addiu       $v0, $a2, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ECA0u;
            return;
        }
    }
    ctx->pc = 0x11EBC8u;
    // 0x11ebc8: 0xc4c000a0  lwc1        $f0, 0xA0($a2)
    ctx->pc = 0x11ebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ebcc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x11ebccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ebd0: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x11ebd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ebd4: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x11EBD4u;
    {
        const bool branch_taken_0x11ebd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ebd4) {
            ctx->pc = 0x11EBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EBD4u;
            // 0x11ebd8: 0xc4c00090  lwc1        $f0, 0x90($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC00u;
            return;
        }
    }
    ctx->pc = 0x11EBDCu;
    // 0x11ebdc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x11ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ebe0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ebe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ebe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11ebe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11ebe8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x11ebe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ebec: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x11EBECu;
    {
        const bool branch_taken_0x11ebec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ebec) {
            ctx->pc = 0x11EBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EBECu;
            // 0x11ebf0: 0xc4c00090  lwc1        $f0, 0x90($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EC00u;
            return;
        }
    }
    ctx->pc = 0x11EBF4u;
    // 0x11ebf4: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x11ebf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x11ebf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11EBF8u;
    {
        const bool branch_taken_0x11ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBF8u;
        // 0x11ebfc: 0xe4c200a0  swc1        $f2, 0xA0($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebf8) {
            ctx->pc = 0x11EC0Cu;
            return;
        }
    }
    ctx->pc = 0x11EC00u;
}
