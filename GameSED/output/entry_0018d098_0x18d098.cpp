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

// Function: entry_0018d098
// Address: 0x18d098 - 0x18d0d0
void entry_0018d098_0x18d098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d098_0x18d098");
#endif

    ctx->pc = 0x18d098u;

    // 0x18d098: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d09c: 0xc60201b8  lwc1        $f2, 0x1B8($s0)
    ctx->pc = 0x18d09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18d0a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18d0a4: 0x86030246  lh          $v1, 0x246($s0)
    ctx->pc = 0x18d0a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
    // 0x18d0a8: 0x80440007  lb          $a0, 0x7($v0)
    ctx->pc = 0x18d0a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x18d0ac: 0x8e050254  lw          $a1, 0x254($s0)
    ctx->pc = 0x18d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x18d0b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d0b4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x18d0b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d0b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18d0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18d0bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18d0c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18d0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d0c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18d0c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18d0c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18d0c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18d0cc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x18d0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x18d0d0u;
}
