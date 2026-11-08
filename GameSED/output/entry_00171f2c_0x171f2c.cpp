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

// Function: entry_00171f2c
// Address: 0x171f2c - 0x171f30
void entry_00171f2c_0x171f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171f2c_0x171f2c");
#endif

    ctx->pc = 0x171f2cu;

    // 0x171f2c: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x171f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    ctx->pc = 0x171f30u;
}
