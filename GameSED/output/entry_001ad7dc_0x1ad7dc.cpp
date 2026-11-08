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

// Function: entry_001ad7dc
// Address: 0x1ad7dc - 0x1ad7e0
void entry_001ad7dc_0x1ad7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad7dc_0x1ad7dc");
#endif

    ctx->pc = 0x1ad7dcu;

    // 0x1ad7dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ad7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ad7e0u;
}
