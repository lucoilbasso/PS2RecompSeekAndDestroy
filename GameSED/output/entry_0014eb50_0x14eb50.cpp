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

// Function: entry_0014eb50
// Address: 0x14eb50 - 0x14eb68
void entry_0014eb50_0x14eb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eb50_0x14eb50");
#endif

    ctx->pc = 0x14eb50u;

    // 0x14eb50: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x14eb50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x14eb54: 0xc78281f8  lwc1        $f2, -0x7E08($gp)
    ctx->pc = 0x14eb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14eb58: 0xc78181fc  lwc1        $f1, -0x7E04($gp)
    ctx->pc = 0x14eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14eb5c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x14eb5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x14eb60: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14eb60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14eb64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14eb64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x14eb68u;
}
