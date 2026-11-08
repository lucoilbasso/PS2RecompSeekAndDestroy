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

// Function: entry_0011d918
// Address: 0x11d918 - 0x11d91c
void entry_0011d918_0x11d918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d918_0x11d918");
#endif

    ctx->pc = 0x11d918u;

    // 0x11d918: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x11d918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x11d91cu;
}
