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

// Function: entry_0011081c
// Address: 0x11081c - 0x110820
void entry_0011081c_0x11081c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011081c_0x11081c");
#endif

    ctx->pc = 0x11081cu;

    // 0x11081c: 0xaf80911c  sw          $zero, -0x6EE4($gp)
    ctx->pc = 0x11081cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 0));
    ctx->pc = 0x110820u;
}
