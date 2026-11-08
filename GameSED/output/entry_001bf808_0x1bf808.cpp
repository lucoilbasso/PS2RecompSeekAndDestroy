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

// Function: entry_001bf808
// Address: 0x1bf808 - 0x1bf80c
void entry_001bf808_0x1bf808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf808_0x1bf808");
#endif

    ctx->pc = 0x1bf808u;

    // 0x1bf808: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x1bf808u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1bf80cu;
}
