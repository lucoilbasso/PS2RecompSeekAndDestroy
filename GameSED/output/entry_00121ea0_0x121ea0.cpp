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

// Function: entry_00121ea0
// Address: 0x121ea0 - 0x121ec4
void entry_00121ea0_0x121ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121ea0_0x121ea0");
#endif

    ctx->pc = 0x121ea0u;

    // 0x121ea0: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x121ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x121ea4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121ea8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x121ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121eac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x121eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x121eb0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x121eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121eb4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x121eb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x121eb8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x121eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x121ebc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x121ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x121ec0: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x121ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    ctx->pc = 0x121ec4u;
}
