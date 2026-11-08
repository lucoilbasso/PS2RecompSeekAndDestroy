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

// Function: entry_00171f28
// Address: 0x171f28 - 0x171f2c
void entry_00171f28_0x171f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171f28_0x171f28");
#endif

    ctx->pc = 0x171f28u;

    // 0x171f28: 0x34c69030  ori         $a2, $a2, 0x9030
    ctx->pc = 0x171f28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36912);
    ctx->pc = 0x171f2cu;
}
