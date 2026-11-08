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

// Function: entry_00156ea0
// Address: 0x156ea0 - 0x156ea4
void entry_00156ea0_0x156ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ea0_0x156ea0");
#endif

    ctx->pc = 0x156ea0u;

    // 0x156ea0: 0x244235e0  addiu       $v0, $v0, 0x35E0
    ctx->pc = 0x156ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13792));
    ctx->pc = 0x156ea4u;
}
