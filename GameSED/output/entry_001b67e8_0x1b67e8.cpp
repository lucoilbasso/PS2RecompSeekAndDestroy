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

// Function: entry_001b67e8
// Address: 0x1b67e8 - 0x1b67ec
void entry_001b67e8_0x1b67e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b67e8_0x1b67e8");
#endif

    ctx->pc = 0x1b67e8u;

    // 0x1b67e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1b67ecu;
}
