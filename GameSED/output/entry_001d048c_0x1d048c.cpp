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

// Function: entry_001d048c
// Address: 0x1d048c - 0x1d0490
void entry_001d048c_0x1d048c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d048c_0x1d048c");
#endif

    ctx->pc = 0x1d048cu;

    // 0x1d048c: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x1d048cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    ctx->pc = 0x1d0490u;
}
