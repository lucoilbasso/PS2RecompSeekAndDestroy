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

// Function: entry_001a9fb4
// Address: 0x1a9fb4 - 0x1a9fb8
void entry_001a9fb4_0x1a9fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9fb4_0x1a9fb4");
#endif

    ctx->pc = 0x1a9fb4u;

    // 0x1a9fb4: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x1a9fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x1a9fb8u;
}
