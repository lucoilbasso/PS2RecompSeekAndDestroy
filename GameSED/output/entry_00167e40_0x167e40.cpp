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

// Function: entry_00167e40
// Address: 0x167e40 - 0x167e44
void entry_00167e40_0x167e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167e40_0x167e40");
#endif

    ctx->pc = 0x167e40u;

    // 0x167e40: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x167e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    ctx->pc = 0x167e44u;
}
