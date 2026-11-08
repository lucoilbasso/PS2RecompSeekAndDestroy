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

// Function: entry_0016b004
// Address: 0x16b004 - 0x16b008
void entry_0016b004_0x16b004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b004_0x16b004");
#endif

    ctx->pc = 0x16b004u;

    // 0x16b004: 0x244297d8  addiu       $v0, $v0, -0x6828
    ctx->pc = 0x16b004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940632));
    ctx->pc = 0x16b008u;
}
