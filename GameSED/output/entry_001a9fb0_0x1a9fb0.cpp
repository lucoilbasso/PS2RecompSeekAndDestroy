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

// Function: entry_001a9fb0
// Address: 0x1a9fb0 - 0x1a9fb4
void entry_001a9fb0_0x1a9fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9fb0_0x1a9fb0");
#endif

    ctx->pc = 0x1a9fb0u;

    // 0x1a9fb0: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x1a9fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1a9fb4u;
}
