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

// Function: entry_001454c0
// Address: 0x1454c0 - 0x1454d0
void entry_001454c0_0x1454c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001454c0_0x1454c0");
#endif

    ctx->pc = 0x1454c0u;

    // 0x1454c0: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x1454c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x1454c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1454c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1454c8: 0xc7818170  lwc1        $f1, -0x7E90($gp)
    ctx->pc = 0x1454c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1454cc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1454ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    ctx->pc = 0x1454d0u;
}
