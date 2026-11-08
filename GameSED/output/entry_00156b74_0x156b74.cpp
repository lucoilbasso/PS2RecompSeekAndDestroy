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

// Function: entry_00156b74
// Address: 0x156b74 - 0x156b78
void entry_00156b74_0x156b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156b74_0x156b74");
#endif

    ctx->pc = 0x156b74u;

    // 0x156b74: 0x246335e0  addiu       $v1, $v1, 0x35E0
    ctx->pc = 0x156b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13792));
    ctx->pc = 0x156b78u;
}
