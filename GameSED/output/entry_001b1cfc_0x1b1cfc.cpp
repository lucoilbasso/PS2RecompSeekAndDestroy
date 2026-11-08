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

// Function: entry_001b1cfc
// Address: 0x1b1cfc - 0x1b1d00
void entry_001b1cfc_0x1b1cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1cfc_0x1b1cfc");
#endif

    ctx->pc = 0x1b1cfcu;

    // 0x1b1cfc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1b1cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x1b1d00u;
}
