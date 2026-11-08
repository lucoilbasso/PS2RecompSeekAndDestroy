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

// Function: entry_001713d0
// Address: 0x1713d0 - 0x1713d4
void entry_001713d0_0x1713d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001713d0_0x1713d0");
#endif

    ctx->pc = 0x1713d0u;

    // 0x1713d0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1713d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1713d4u;
}
