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

// Function: entry_00121b9c
// Address: 0x121b9c - 0x121bbc
void entry_00121b9c_0x121b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121b9c_0x121b9c");
#endif

    ctx->pc = 0x121b9cu;

    // 0x121b9c: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x121b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121ba4: 0xc6020100  lwc1        $f2, 0x100($s0)
    ctx->pc = 0x121ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x121ba8: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x121ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121bac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x121bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x121bb0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x121bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x121bb4: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x121bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x121bb8: 0xe6010114  swc1        $f1, 0x114($s0)
    ctx->pc = 0x121bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    ctx->pc = 0x121bbcu;
}
