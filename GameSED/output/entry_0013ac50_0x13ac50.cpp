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

// Function: entry_0013ac50
// Address: 0x13ac50 - 0x13ac54
void entry_0013ac50_0x13ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ac50_0x13ac50");
#endif

    ctx->pc = 0x13ac50u;

    // 0x13ac50: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x13ac50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    ctx->pc = 0x13ac54u;
}
