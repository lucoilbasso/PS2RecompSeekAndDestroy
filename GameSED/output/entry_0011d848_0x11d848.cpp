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

// Function: entry_0011d848
// Address: 0x11d848 - 0x11d84c
void entry_0011d848_0x11d848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d848_0x11d848");
#endif

    ctx->pc = 0x11d848u;

    // 0x11d848: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x11d848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x11d84cu;
}
