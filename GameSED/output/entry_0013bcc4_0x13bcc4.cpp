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

// Function: entry_0013bcc4
// Address: 0x13bcc4 - 0x13bcc8
void entry_0013bcc4_0x13bcc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bcc4_0x13bcc4");
#endif

    ctx->pc = 0x13bcc4u;

    // 0x13bcc4: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x13bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    ctx->pc = 0x13bcc8u;
}
