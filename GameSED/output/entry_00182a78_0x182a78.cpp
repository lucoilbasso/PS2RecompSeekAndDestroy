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

// Function: entry_00182a78
// Address: 0x182a78 - 0x182a7c
void entry_00182a78_0x182a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182a78_0x182a78");
#endif

    ctx->pc = 0x182a78u;

    // 0x182a78: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x182a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    ctx->pc = 0x182a7cu;
}
