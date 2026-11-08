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

// Function: entry_0012cd18
// Address: 0x12cd18 - 0x12cd3c
void entry_0012cd18_0x12cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cd18_0x12cd18");
#endif

    ctx->pc = 0x12cd18u;

    // 0x12cd18: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x12cd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x12cd1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12cd1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12cd20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12cd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cd24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12cd24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12cd28: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12cd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cd2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12cd2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12cd30: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12cd30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12cd34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12cd34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12cd38: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x12cd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    ctx->pc = 0x12cd3cu;
}
