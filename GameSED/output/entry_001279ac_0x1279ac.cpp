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

// Function: entry_001279ac
// Address: 0x1279ac - 0x1279b0
void entry_001279ac_0x1279ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001279ac_0x1279ac");
#endif

    ctx->pc = 0x1279acu;

    // 0x1279ac: 0xaf8289d8  sw          $v0, -0x7628($gp)
    ctx->pc = 0x1279acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937048), GPR_U32(ctx, 2));
    ctx->pc = 0x1279b0u;
}
