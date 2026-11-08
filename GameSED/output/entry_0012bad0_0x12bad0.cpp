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

// Function: entry_0012bad0
// Address: 0x12bad0 - 0x12bad4
void entry_0012bad0_0x12bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bad0_0x12bad0");
#endif

    ctx->pc = 0x12bad0u;

    // 0x12bad0: 0xa3a200c3  sb          $v0, 0xC3($sp)
    ctx->pc = 0x12bad0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12bad4u;
}
