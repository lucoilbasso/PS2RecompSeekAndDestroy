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

// Function: entry_0016b30c
// Address: 0x16b30c - 0x16b310
void entry_0016b30c_0x16b30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b30c_0x16b30c");
#endif

    ctx->pc = 0x16b30cu;

    // 0x16b30c: 0x262301f0  addiu       $v1, $s1, 0x1F0
    ctx->pc = 0x16b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    ctx->pc = 0x16b310u;
}
