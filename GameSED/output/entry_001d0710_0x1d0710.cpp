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

// Function: entry_001d0710
// Address: 0x1d0710 - 0x1d0714
void entry_001d0710_0x1d0710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0710_0x1d0710");
#endif

    ctx->pc = 0x1d0710u;

    // 0x1d0710: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1d0710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->pc = 0x1d0714u;
}
