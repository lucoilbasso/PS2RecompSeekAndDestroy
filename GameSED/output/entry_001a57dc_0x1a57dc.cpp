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

// Function: entry_001a57dc
// Address: 0x1a57dc - 0x1a57e0
void entry_001a57dc_0x1a57dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a57dc_0x1a57dc");
#endif

    ctx->pc = 0x1a57dcu;

    // 0x1a57dc: 0x8f84918c  lw          $a0, -0x6E74($gp)
    ctx->pc = 0x1a57dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
    ctx->pc = 0x1a57e0u;
}
