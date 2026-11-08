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

// Function: entry_001a3fb0
// Address: 0x1a3fb0 - 0x1a3fb4
void entry_001a3fb0_0x1a3fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3fb0_0x1a3fb0");
#endif

    ctx->pc = 0x1a3fb0u;

    // 0x1a3fb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1a3fb4u;
}
