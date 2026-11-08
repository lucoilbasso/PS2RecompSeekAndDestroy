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

// Function: entry_00199ad8
// Address: 0x199ad8 - 0x199adc
void entry_00199ad8_0x199ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199ad8_0x199ad8");
#endif

    ctx->pc = 0x199ad8u;

    // 0x199ad8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x199ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x199adcu;
}
