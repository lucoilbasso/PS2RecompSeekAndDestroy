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

// Function: entry_001321c0
// Address: 0x1321c0 - 0x1321c4
void entry_001321c0_0x1321c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001321c0_0x1321c0");
#endif

    ctx->pc = 0x1321c0u;

    // 0x1321c0: 0xaca30060  sw          $v1, 0x60($a1)
    ctx->pc = 0x1321c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
    ctx->pc = 0x1321c4u;
}
