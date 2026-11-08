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

// Function: entry_0014b51c
// Address: 0x14b51c - 0x14b520
void entry_0014b51c_0x14b51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b51c_0x14b51c");
#endif

    ctx->pc = 0x14b51cu;

    // 0x14b51c: 0x24050118  addiu       $a1, $zero, 0x118
    ctx->pc = 0x14b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    ctx->pc = 0x14b520u;
}
