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

// Function: entry_00114268
// Address: 0x114268 - 0x11426c
void entry_00114268_0x114268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114268_0x114268");
#endif

    ctx->pc = 0x114268u;

    // 0x114268: 0xaf838924  sw          $v1, -0x76DC($gp)
    ctx->pc = 0x114268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936868), GPR_U32(ctx, 3));
    ctx->pc = 0x11426cu;
}
