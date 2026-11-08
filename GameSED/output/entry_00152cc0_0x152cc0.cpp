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

// Function: entry_00152cc0
// Address: 0x152cc0 - 0x152cc4
void entry_00152cc0_0x152cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152cc0_0x152cc0");
#endif

    ctx->pc = 0x152cc0u;

    // 0x152cc0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x152cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->pc = 0x152cc4u;
}
