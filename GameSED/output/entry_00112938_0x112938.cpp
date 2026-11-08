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

// Function: entry_00112938
// Address: 0x112938 - 0x11293c
void entry_00112938_0x112938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112938_0x112938");
#endif

    ctx->pc = 0x112938u;

    // 0x112938: 0x2610f700  addiu       $s0, $s0, -0x900
    ctx->pc = 0x112938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964992));
    ctx->pc = 0x11293cu;
}
