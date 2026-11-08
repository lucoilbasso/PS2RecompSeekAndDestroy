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

// Function: entry_001246f8
// Address: 0x1246f8 - 0x12471c
void entry_001246f8_0x1246f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001246f8_0x1246f8");
#endif

    ctx->pc = 0x1246f8u;

    // 0x1246f8: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x1246f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x1246fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1246fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x124700: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x124700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x124704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x124708: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x124708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12470c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12470cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x124710: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x124710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x124714: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x124714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x124718: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x124718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->pc = 0x12471cu;
}
