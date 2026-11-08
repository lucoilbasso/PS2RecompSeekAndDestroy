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

// Function: entry_001a6818
// Address: 0x1a6818 - 0x1a681c
void entry_001a6818_0x1a6818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6818_0x1a6818");
#endif

    ctx->pc = 0x1a6818u;

    // 0x1a6818: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1a6818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    ctx->pc = 0x1a681cu;
}
