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

// Function: entry_00123954
// Address: 0x123954 - 0x1239f8
void entry_00123954_0x123954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123954_0x123954");
#endif

    ctx->pc = 0x123954u;

    // 0x123954: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x123954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x123958: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
    ctx->pc = 0x123958u;
    {
        const bool branch_taken_0x123958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x123958) {
            ctx->pc = 0x12395Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123958u;
            // 0x12395c: 0x8e2400d4  lw          $a0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1239F8u;
            return;
        }
    }
    ctx->pc = 0x123960u;
    // 0x123960: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x123960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x123964: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x123964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x123968: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x123968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12396c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x12396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x123970: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x123970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x123974: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x123974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x123978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x123978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12397c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12397cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x123980: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x123980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x123984: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x123984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x123988: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x123988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12398c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x12398cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x123990: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x123990u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x123994: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x123994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x123998: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x123998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12399c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x12399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1239a0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1239a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1239a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1239a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1239a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1239a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1239ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1239acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1239b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1239b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1239b4: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1239b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1239b8: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x1239b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1239bc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1239bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1239c0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1239c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1239c4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1239c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1239c8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1239c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1239cc: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1239ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1239d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1239d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1239d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1239d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1239d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1239d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1239dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1239dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1239e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1239e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1239e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1239e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1239e8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1239e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1239ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1239ECu;
    {
        const bool branch_taken_0x1239ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1239F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1239ECu;
        // 0x1239f0: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239ec) {
            ctx->pc = 0x123A10u;
            return;
        }
    }
    ctx->pc = 0x1239F4u;
    // 0x1239f4: 0x0  nop
    ctx->pc = 0x1239f4u;
    // NOP
    ctx->pc = 0x1239f8u;
}
