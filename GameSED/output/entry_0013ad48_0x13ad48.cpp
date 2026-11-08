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

// Function: entry_0013ad48
// Address: 0x13ad48 - 0x13ad4c
void entry_0013ad48_0x13ad48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ad48_0x13ad48");
#endif

    ctx->pc = 0x13ad48u;

    // 0x13ad48: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x13ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    ctx->pc = 0x13ad4cu;
}
