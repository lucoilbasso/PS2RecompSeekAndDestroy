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

// Function: entry_0018ee7c
// Address: 0x18ee7c - 0x18ee80
void entry_0018ee7c_0x18ee7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ee7c_0x18ee7c");
#endif

    ctx->pc = 0x18ee7cu;

    // 0x18ee7c: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x18ee7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    ctx->pc = 0x18ee80u;
}
