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

// Function: entry_001cf368
// Address: 0x1cf368 - 0x1cf36c
void entry_001cf368_0x1cf368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf368_0x1cf368");
#endif

    ctx->pc = 0x1cf368u;

    // 0x1cf368: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1cf368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x1cf36cu;
}
