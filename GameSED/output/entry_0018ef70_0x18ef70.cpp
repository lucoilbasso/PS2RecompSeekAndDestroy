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

// Function: entry_0018ef70
// Address: 0x18ef70 - 0x18ef74
void entry_0018ef70_0x18ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ef70_0x18ef70");
#endif

    ctx->pc = 0x18ef70u;

    // 0x18ef70: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x18ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    ctx->pc = 0x18ef74u;
}
