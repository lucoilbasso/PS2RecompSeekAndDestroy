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

// Function: entry_001401b0
// Address: 0x1401b0 - 0x1401bc
void entry_001401b0_0x1401b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001401b0_0x1401b0");
#endif

    ctx->pc = 0x1401b0u;

    // 0x1401b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1401b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1401b4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1401b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1401b8: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x1401b8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1401bcu;
}
