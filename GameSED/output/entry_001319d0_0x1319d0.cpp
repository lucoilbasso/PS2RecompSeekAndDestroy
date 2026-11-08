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

// Function: entry_001319d0
// Address: 0x1319d0 - 0x1319d4
void entry_001319d0_0x1319d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001319d0_0x1319d0");
#endif

    ctx->pc = 0x1319d0u;

    // 0x1319d0: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x1319d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    ctx->pc = 0x1319d4u;
}
