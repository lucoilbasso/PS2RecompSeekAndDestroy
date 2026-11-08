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

// Function: entry_0012f0f8
// Address: 0x12f0f8 - 0x12f0fc
void entry_0012f0f8_0x12f0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f0f8_0x12f0f8");
#endif

    ctx->pc = 0x12f0f8u;

    // 0x12f0f8: 0xa480011a  sh          $zero, 0x11A($a0)
    ctx->pc = 0x12f0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 282), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12f0fcu;
}
