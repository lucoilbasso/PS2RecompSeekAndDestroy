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

// Function: entry_0011a3e0
// Address: 0x11a3e0 - 0x11a3e8
void entry_0011a3e0_0x11a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a3e0_0x11a3e0");
#endif

    ctx->pc = 0x11a3e0u;

    // 0x11a3e0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x11a3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a3e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11a3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x11a3e8u;
}
