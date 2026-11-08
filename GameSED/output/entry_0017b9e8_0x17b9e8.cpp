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

// Function: entry_0017b9e8
// Address: 0x17b9e8 - 0x17b9ec
void entry_0017b9e8_0x17b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b9e8_0x17b9e8");
#endif

    ctx->pc = 0x17b9e8u;

    // 0x17b9e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x17b9ecu;
}
