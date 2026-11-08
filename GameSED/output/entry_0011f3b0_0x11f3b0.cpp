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

// Function: entry_0011f3b0
// Address: 0x11f3b0 - 0x11f3b4
void entry_0011f3b0_0x11f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f3b0_0x11f3b0");
#endif

    ctx->pc = 0x11f3b0u;

    // 0x11f3b0: 0xe4410084  swc1        $f1, 0x84($v0)
    ctx->pc = 0x11f3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    ctx->pc = 0x11f3b4u;
}
