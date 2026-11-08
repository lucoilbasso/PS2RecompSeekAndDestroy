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

// Function: entry_0012e050
// Address: 0x12e050 - 0x12e058
void entry_0012e050_0x12e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e050_0x12e050");
#endif

    ctx->pc = 0x12e050u;

    // 0x12e050: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12e050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e054: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x12e054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    ctx->pc = 0x12e058u;
}
