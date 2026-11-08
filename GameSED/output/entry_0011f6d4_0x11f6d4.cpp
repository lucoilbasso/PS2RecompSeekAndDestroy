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

// Function: entry_0011f6d4
// Address: 0x11f6d4 - 0x11f6d8
void entry_0011f6d4_0x11f6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f6d4_0x11f6d4");
#endif

    ctx->pc = 0x11f6d4u;

    // 0x11f6d4: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x11f6d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    ctx->pc = 0x11f6d8u;
}
