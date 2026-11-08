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

// Function: entry_0018e6e8
// Address: 0x18e6e8 - 0x18e6ec
void entry_0018e6e8_0x18e6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e6e8_0x18e6e8");
#endif

    ctx->pc = 0x18e6e8u;

    // 0x18e6e8: 0x8d230208  lw          $v1, 0x208($t1)
    ctx->pc = 0x18e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 520)));
    ctx->pc = 0x18e6ecu;
}
