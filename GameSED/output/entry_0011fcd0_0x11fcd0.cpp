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

// Function: entry_0011fcd0
// Address: 0x11fcd0 - 0x11fcd4
void entry_0011fcd0_0x11fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fcd0_0x11fcd0");
#endif

    ctx->pc = 0x11fcd0u;

    // 0x11fcd0: 0xe4a40090  swc1        $f4, 0x90($a1)
    ctx->pc = 0x11fcd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 144), bits); }
    ctx->pc = 0x11fcd4u;
}
