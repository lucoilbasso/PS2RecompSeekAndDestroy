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

// Function: entry_0018b2b0
// Address: 0x18b2b0 - 0x18b2b4
void entry_0018b2b0_0x18b2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b2b0_0x18b2b0");
#endif

    ctx->pc = 0x18b2b0u;

    // 0x18b2b0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x18b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    ctx->pc = 0x18b2b4u;
}
