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

// Function: entry_001a7cec
// Address: 0x1a7cec - 0x1a7cf0
void entry_001a7cec_0x1a7cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7cec_0x1a7cec");
#endif

    ctx->pc = 0x1a7cecu;

    // 0x1a7cec: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x1a7cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a7cf0u;
}
