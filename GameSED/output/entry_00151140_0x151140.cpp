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

// Function: entry_00151140
// Address: 0x151140 - 0x151148
void entry_00151140_0x151140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151140_0x151140");
#endif

    ctx->pc = 0x151140u;

    // 0x151140: 0xc7808240  lwc1        $f0, -0x7DC0($gp)
    ctx->pc = 0x151140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151144: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x151144u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x151148u;
}
