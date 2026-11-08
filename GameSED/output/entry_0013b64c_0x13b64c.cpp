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

// Function: entry_0013b64c
// Address: 0x13b64c - 0x13b650
void entry_0013b64c_0x13b64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b64c_0x13b64c");
#endif

    ctx->pc = 0x13b64cu;

    // 0x13b64c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->pc = 0x13b650u;
}
