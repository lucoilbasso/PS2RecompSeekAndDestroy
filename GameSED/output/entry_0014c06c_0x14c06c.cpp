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

// Function: entry_0014c06c
// Address: 0x14c06c - 0x14c078
void entry_0014c06c_0x14c06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c06c_0x14c06c");
#endif

    ctx->pc = 0x14c06cu;

    // 0x14c06c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x14c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14c070: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14c070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14c074: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14c074u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x14c078u;
}
