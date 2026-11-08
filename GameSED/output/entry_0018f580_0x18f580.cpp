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

// Function: entry_0018f580
// Address: 0x18f580 - 0x18f584
void entry_0018f580_0x18f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f580_0x18f580");
#endif

    ctx->pc = 0x18f580u;

    // 0x18f580: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x18f580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    ctx->pc = 0x18f584u;
}
