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

// Function: entry_0016b078
// Address: 0x16b078 - 0x16b07c
void entry_0016b078_0x16b078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b078_0x16b078");
#endif

    ctx->pc = 0x16b078u;

    // 0x16b078: 0x2483120c  addiu       $v1, $a0, 0x120C
    ctx->pc = 0x16b078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4620));
    ctx->pc = 0x16b07cu;
}
