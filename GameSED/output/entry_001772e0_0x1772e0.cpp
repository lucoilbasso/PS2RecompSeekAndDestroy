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

// Function: entry_001772e0
// Address: 0x1772e0 - 0x1772e4
void entry_001772e0_0x1772e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001772e0_0x1772e0");
#endif

    ctx->pc = 0x1772e0u;

    // 0x1772e0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1772e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1772e4u;
}
