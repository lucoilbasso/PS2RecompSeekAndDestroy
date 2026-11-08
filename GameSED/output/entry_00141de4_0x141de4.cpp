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

// Function: entry_00141de4
// Address: 0x141de4 - 0x141de8
void entry_00141de4_0x141de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141de4_0x141de4");
#endif

    ctx->pc = 0x141de4u;

    // 0x141de4: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x141de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    ctx->pc = 0x141de8u;
}
