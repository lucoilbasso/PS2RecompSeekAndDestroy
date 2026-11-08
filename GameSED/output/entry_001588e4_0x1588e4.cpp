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

// Function: entry_001588e4
// Address: 0x1588e4 - 0x1588e8
void entry_001588e4_0x1588e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001588e4_0x1588e4");
#endif

    ctx->pc = 0x1588e4u;

    // 0x1588e4: 0xace5009c  sw          $a1, 0x9C($a3)
    ctx->pc = 0x1588e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 5));
    ctx->pc = 0x1588e8u;
}
