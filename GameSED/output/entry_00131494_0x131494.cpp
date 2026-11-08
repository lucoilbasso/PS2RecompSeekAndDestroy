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

// Function: entry_00131494
// Address: 0x131494 - 0x131498
void entry_00131494_0x131494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131494_0x131494");
#endif

    ctx->pc = 0x131494u;

    // 0x131494: 0xaf828a08  sw          $v0, -0x75F8($gp)
    ctx->pc = 0x131494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 2));
    ctx->pc = 0x131498u;
}
