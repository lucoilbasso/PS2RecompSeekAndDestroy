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

// Function: entry_0015cd78
// Address: 0x15cd78 - 0x15cd7c
void entry_0015cd78_0x15cd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cd78_0x15cd78");
#endif

    ctx->pc = 0x15cd78u;

    // 0x15cd78: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x15cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    ctx->pc = 0x15cd7cu;
}
