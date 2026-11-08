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

// Function: entry_0019f41c
// Address: 0x19f41c - 0x19f420
void entry_0019f41c_0x19f41c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f41c_0x19f41c");
#endif

    ctx->pc = 0x19f41cu;

    // 0x19f41c: 0xad850014  sw          $a1, 0x14($t4)
    ctx->pc = 0x19f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 5));
    ctx->pc = 0x19f420u;
}
