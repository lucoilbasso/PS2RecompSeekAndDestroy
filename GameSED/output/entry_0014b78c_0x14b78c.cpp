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

// Function: entry_0014b78c
// Address: 0x14b78c - 0x14b790
void entry_0014b78c_0x14b78c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b78c_0x14b78c");
#endif

    ctx->pc = 0x14b78cu;

    // 0x14b78c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x14b78cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x14b790u;
}
