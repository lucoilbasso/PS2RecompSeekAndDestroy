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

// Function: entry_00192a0c
// Address: 0x192a0c - 0x192a10
void entry_00192a0c_0x192a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192a0c_0x192a0c");
#endif

    ctx->pc = 0x192a0cu;

    // 0x192a0c: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x192a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    ctx->pc = 0x192a10u;
}
