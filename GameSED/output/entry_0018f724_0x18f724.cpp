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

// Function: entry_0018f724
// Address: 0x18f724 - 0x18f728
void entry_0018f724_0x18f724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f724_0x18f724");
#endif

    ctx->pc = 0x18f724u;

    // 0x18f724: 0x8e0401d0  lw          $a0, 0x1D0($s0)
    ctx->pc = 0x18f724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    ctx->pc = 0x18f728u;
}
