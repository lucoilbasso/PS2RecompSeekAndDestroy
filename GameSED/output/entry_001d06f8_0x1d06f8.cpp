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

// Function: entry_001d06f8
// Address: 0x1d06f8 - 0x1d06fc
void entry_001d06f8_0x1d06f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d06f8_0x1d06f8");
#endif

    ctx->pc = 0x1d06f8u;

    // 0x1d06f8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1d06f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d06fcu;
}
