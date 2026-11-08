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

// Function: entry_0018de44
// Address: 0x18de44 - 0x18de48
void entry_0018de44_0x18de44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018de44_0x18de44");
#endif

    ctx->pc = 0x18de44u;

    // 0x18de44: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x18de44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x18de48u;
}
