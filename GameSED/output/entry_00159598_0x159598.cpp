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

// Function: entry_00159598
// Address: 0x159598 - 0x15959c
void entry_00159598_0x159598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159598_0x159598");
#endif

    ctx->pc = 0x159598u;

    // 0x159598: 0x26a203b0  addiu       $v0, $s5, 0x3B0
    ctx->pc = 0x159598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 944));
    ctx->pc = 0x15959cu;
}
