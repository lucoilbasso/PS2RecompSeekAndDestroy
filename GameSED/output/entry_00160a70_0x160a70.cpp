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

// Function: entry_00160a70
// Address: 0x160a70 - 0x160a78
void entry_00160a70_0x160a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160a70_0x160a70");
#endif

    ctx->pc = 0x160a70u;

    // 0x160a70: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x160a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x160a74: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x160a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x160a78u;
}
