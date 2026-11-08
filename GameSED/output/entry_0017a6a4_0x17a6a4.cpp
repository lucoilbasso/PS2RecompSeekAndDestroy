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

// Function: entry_0017a6a4
// Address: 0x17a6a4 - 0x17a6a8
void entry_0017a6a4_0x17a6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a6a4_0x17a6a4");
#endif

    ctx->pc = 0x17a6a4u;

    // 0x17a6a4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x17a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->pc = 0x17a6a8u;
}
