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

// Function: entry_0017730c
// Address: 0x17730c - 0x177310
void entry_0017730c_0x17730c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017730c_0x17730c");
#endif

    ctx->pc = 0x17730cu;

    // 0x17730c: 0x8f848c98  lw          $a0, -0x7368($gp)
    ctx->pc = 0x17730cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
    ctx->pc = 0x177310u;
}
