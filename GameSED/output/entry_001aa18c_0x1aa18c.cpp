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

// Function: entry_001aa18c
// Address: 0x1aa18c - 0x1aa214
void entry_001aa18c_0x1aa18c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa18c_0x1aa18c");
#endif

    ctx->pc = 0x1aa18cu;

    // 0x1aa18c: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x1aa18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1aa190: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1aa190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1aa194: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x1aa194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1aa198: 0xc6070004  lwc1        $f7, 0x4($s0)
    ctx->pc = 0x1aa198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1aa19c: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x1aa19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x1aa1a0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1aa1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1aa1a4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1aa1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1aa1a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa1ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1aa1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aa1b0: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x1aa1b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x1aa1b4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1aa1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa1b8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1aa1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa1bc: 0x0  nop
    ctx->pc = 0x1aa1bcu;
    // NOP
    // 0x1aa1c0: 0x0  nop
    ctx->pc = 0x1aa1c0u;
    // NOP
    // 0x1aa1c4: 0x46072103  div.s       $f4, $f4, $f7
    ctx->pc = 0x1aa1c4u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[7]); }
    // 0x1aa1c8: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x1aa1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aa1cc: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1aa1ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1aa1d0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1aa1d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1aa1d4: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x1aa1d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1aa1d8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1aa1d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1aa1dc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1aa1dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1aa1e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1aa1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1aa1e4: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x1aa1e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1aa1e8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1aa1e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1aa1ec: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1aa1ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1aa1f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1aa1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1aa1f4: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x1aa1f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1aa1f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1aa1f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1aa1fc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1aa1fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1aa200: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1aa200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1aa204: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1aa204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1aa208: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aa208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aa20c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1aa20cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1aa210: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x1aa210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    ctx->pc = 0x1aa214u;
}
