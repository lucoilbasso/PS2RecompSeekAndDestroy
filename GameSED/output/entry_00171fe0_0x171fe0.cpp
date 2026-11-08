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

// Function: entry_00171fe0
// Address: 0x171fe0 - 0x171fe4
void entry_00171fe0_0x171fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171fe0_0x171fe0");
#endif

    ctx->pc = 0x171fe0u;

    // 0x171fe0: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x171fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    ctx->pc = 0x171fe4u;
}
