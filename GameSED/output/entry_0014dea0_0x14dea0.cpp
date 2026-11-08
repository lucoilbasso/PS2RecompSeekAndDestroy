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

// Function: entry_0014dea0
// Address: 0x14dea0 - 0x14deb8
void entry_0014dea0_0x14dea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dea0_0x14dea0");
#endif

    ctx->pc = 0x14dea0u;

    // 0x14dea0: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x14dea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x14dea4: 0xc78281d8  lwc1        $f2, -0x7E28($gp)
    ctx->pc = 0x14dea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14dea8: 0xc78181dc  lwc1        $f1, -0x7E24($gp)
    ctx->pc = 0x14dea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14deac: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x14deacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x14deb0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14deb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14deb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14deb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x14deb8u;
}
