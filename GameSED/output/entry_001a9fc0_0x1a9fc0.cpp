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

// Function: entry_001a9fc0
// Address: 0x1a9fc0 - 0x1a9fc4
void entry_001a9fc0_0x1a9fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9fc0_0x1a9fc0");
#endif

    ctx->pc = 0x1a9fc0u;

    // 0x1a9fc0: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x1a9fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    ctx->pc = 0x1a9fc4u;
}
