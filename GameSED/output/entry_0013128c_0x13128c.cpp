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

// Function: entry_0013128c
// Address: 0x13128c - 0x131290
void entry_0013128c_0x13128c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013128c_0x13128c");
#endif

    ctx->pc = 0x13128cu;

    // 0x13128c: 0x8f858d10  lw          $a1, -0x72F0($gp)
    ctx->pc = 0x13128cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x131290u;
}
