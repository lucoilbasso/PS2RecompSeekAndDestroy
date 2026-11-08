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

// Function: entry_001605f0
// Address: 0x1605f0 - 0x1605f8
void entry_001605f0_0x1605f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001605f0_0x1605f0");
#endif

    ctx->pc = 0x1605f0u;

    // 0x1605f0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1605f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1605f4: 0x0  nop
    ctx->pc = 0x1605f4u;
    // NOP
    ctx->pc = 0x1605f8u;
}
