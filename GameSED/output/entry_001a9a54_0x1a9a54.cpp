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

// Function: entry_001a9a54
// Address: 0x1a9a54 - 0x1a9b8c
void entry_001a9a54_0x1a9a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9a54_0x1a9a54");
#endif

    ctx->pc = 0x1a9a54u;

    // 0x1a9a54: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x1a9a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a9a58: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1a9a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1a9a5c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a9a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1a9a60: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1a9a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1a9a64: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x1a9a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a9a68: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1a9a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1a9a6c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x1a9a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9a70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9a74: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1a9a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a9a78: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x1a9a78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x1a9a7c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1a9a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9a80: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1a9a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9a84: 0x0  nop
    ctx->pc = 0x1a9a84u;
    // NOP
    // 0x1a9a88: 0x0  nop
    ctx->pc = 0x1a9a88u;
    // NOP
    // 0x1a9a8c: 0x46062103  div.s       $f4, $f4, $f6
    ctx->pc = 0x1a9a8cu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[6]); }
    // 0x1a9a90: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x1a9a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9a94: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1a9a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1a9a98: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x1a9a98u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1a9a9c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a9a9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a9aa0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9aa4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9aa4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9aa8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9aac: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9aacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9ab0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9ab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9ab4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9ab4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9ab8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9abc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9abcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9ac0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a9ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a9ac4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9ac4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9ac8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9acc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9ad0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9ad4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a9ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a9ad8: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1a9ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1a9adc: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x1a9adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9ae0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1a9ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9ae4: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x1a9ae4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x1a9ae8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1a9ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9aec: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9af0: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x1a9af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9af4: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1a9af4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1a9af8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9af8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9afc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a9afcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a9b00: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9b00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9b04: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9b04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9b08: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9b08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9b0c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9b0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9b10: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9b14: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9b14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9b18: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9b18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9b1c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9b1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9b20: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a9b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a9b24: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9b24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9b28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9b2c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a9b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a9b30: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x1a9b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x1a9b34: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x1a9b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9b38: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1a9b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9b3c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x1a9b3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x1a9b40: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1a9b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9b44: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9b48: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x1a9b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9b4c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1a9b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1a9b50: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9b50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9b54: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a9b54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a9b58: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9b5c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9b5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9b60: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9b60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9b64: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9b64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9b68: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1a9b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1a9b6c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9b6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9b70: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1a9b70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1a9b74: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9b74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9b78: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a9b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a9b7c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9b80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9b84: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a9b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a9b88: 0xe64000f8  swc1        $f0, 0xF8($s2)
    ctx->pc = 0x1a9b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 248), bits); }
    ctx->pc = 0x1a9b8cu;
}
