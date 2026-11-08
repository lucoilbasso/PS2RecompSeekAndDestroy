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

// Function: entry_0017cef8
// Address: 0x17cef8 - 0x17cefc
void entry_0017cef8_0x17cef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cef8_0x17cef8");
#endif

    ctx->pc = 0x17cef8u;

    // 0x17cef8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x17cefcu;
}
