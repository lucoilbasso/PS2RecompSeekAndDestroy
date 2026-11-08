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

// Function: entry_001861c0
// Address: 0x1861c0 - 0x1861c4
void entry_001861c0_0x1861c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001861c0_0x1861c0");
#endif

    ctx->pc = 0x1861c0u;

    // 0x1861c0: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x1861c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x1861c4u;
}
