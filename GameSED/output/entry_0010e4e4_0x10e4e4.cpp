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

// Function: entry_0010e4e4
// Address: 0x10e4e4 - 0x10e4e8
void entry_0010e4e4_0x10e4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e4e4_0x10e4e4");
#endif

    ctx->pc = 0x10e4e4u;

    // 0x10e4e4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x10e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->pc = 0x10e4e8u;
}
