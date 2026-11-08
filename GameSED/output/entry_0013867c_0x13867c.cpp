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

// Function: entry_0013867c
// Address: 0x13867c - 0x138680
void entry_0013867c_0x13867c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013867c_0x13867c");
#endif

    ctx->pc = 0x13867cu;

    // 0x13867c: 0xaf888a24  sw          $t0, -0x75DC($gp)
    ctx->pc = 0x13867cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937124), GPR_U32(ctx, 8));
    ctx->pc = 0x138680u;
}
