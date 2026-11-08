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

// Function: entry_001aa0fc
// Address: 0x1aa0fc - 0x1aa100
void entry_001aa0fc_0x1aa0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa0fc_0x1aa0fc");
#endif

    ctx->pc = 0x1aa0fcu;

    // 0x1aa0fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1aa0fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1aa100u;
}
