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

// Function: entry_00150100
// Address: 0x150100 - 0x150104
void entry_00150100_0x150100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150100_0x150100");
#endif

    ctx->pc = 0x150100u;

    // 0x150100: 0xad02003c  sw          $v0, 0x3C($t0)
    ctx->pc = 0x150100u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x150104u;
}
