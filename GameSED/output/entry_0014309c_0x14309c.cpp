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

// Function: entry_0014309c
// Address: 0x14309c - 0x1430a0
void entry_0014309c_0x14309c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014309c_0x14309c");
#endif

    ctx->pc = 0x14309cu;

    // 0x14309c: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x14309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    ctx->pc = 0x1430a0u;
}
