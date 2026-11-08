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

// Function: entry_00124684
// Address: 0x124684 - 0x1246f8
void entry_00124684_0x124684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124684_0x124684");
#endif

    ctx->pc = 0x124684u;

    // 0x124684: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x124684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124688: 0x46002832  c.eq.s      $f5, $f0
    ctx->pc = 0x124688u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12468c: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x12468Cu;
    {
        const bool branch_taken_0x12468c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12468c) {
            ctx->pc = 0x124690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12468Cu;
            // 0x124690: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1246F8u;
            return;
        }
    }
    ctx->pc = 0x124694u;
    // 0x124694: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x124694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x124698: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x124698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12469c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1246a0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1246a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1246a4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1246a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1246a8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1246a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1246ac: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1246acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1246b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1246b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1246b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1246b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1246b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1246b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1246bc: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x1246bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x1246c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1246c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1246c4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1246c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1246c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1246c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1246cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1246ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1246d0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x1246d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1246d4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1246d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1246d8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1246d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1246dc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1246dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1246e0: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1246e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1246e4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1246e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1246e8: 0xe6030010  swc1        $f3, 0x10($s0)
    ctx->pc = 0x1246e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1246ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1246ECu;
    {
        const bool branch_taken_0x1246ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246ECu;
        // 0x1246f0: 0xe6020014  swc1        $f2, 0x14($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246ec) {
            ctx->pc = 0x12471Cu;
            return;
        }
    }
    ctx->pc = 0x1246F4u;
    // 0x1246f4: 0x0  nop
    ctx->pc = 0x1246f4u;
    // NOP
    ctx->pc = 0x1246f8u;
}
