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

// Function: entry_0017c990
// Address: 0x17c990 - 0x17c994
void entry_0017c990_0x17c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c990_0x17c990");
#endif

    ctx->pc = 0x17c990u;

    // 0x17c990: 0x2cc200ff  sltiu       $v0, $a2, 0xFF
    ctx->pc = 0x17c990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    ctx->pc = 0x17c994u;
}
