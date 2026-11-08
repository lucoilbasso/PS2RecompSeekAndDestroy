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

// Function: entry_0012fd00
// Address: 0x12fd00 - 0x12fd04
void entry_0012fd00_0x12fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fd00_0x12fd00");
#endif

    ctx->pc = 0x12fd00u;

    // 0x12fd00: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x12fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    ctx->pc = 0x12fd04u;
}
