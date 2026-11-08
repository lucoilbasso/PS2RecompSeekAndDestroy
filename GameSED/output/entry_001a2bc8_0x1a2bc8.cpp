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

// Function: entry_001a2bc8
// Address: 0x1a2bc8 - 0x1a2bd0
void entry_001a2bc8_0x1a2bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2bc8_0x1a2bc8");
#endif

    ctx->pc = 0x1a2bc8u;

    // 0x1a2bc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a2bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a2bcc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1a2bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->pc = 0x1a2bd0u;
}
