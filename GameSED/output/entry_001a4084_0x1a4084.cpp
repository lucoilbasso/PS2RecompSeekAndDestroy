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

// Function: entry_001a4084
// Address: 0x1a4084 - 0x1a4088
void entry_001a4084_0x1a4084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4084_0x1a4084");
#endif

    ctx->pc = 0x1a4084u;

    // 0x1a4084: 0xaf829180  sw          $v0, -0x6E80($gp)
    ctx->pc = 0x1a4084u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939008), GPR_U32(ctx, 2));
    ctx->pc = 0x1a4088u;
}
