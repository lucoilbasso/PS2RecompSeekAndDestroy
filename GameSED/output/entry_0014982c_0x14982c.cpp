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

// Function: entry_0014982c
// Address: 0x14982c - 0x149830
void entry_0014982c_0x14982c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014982c_0x14982c");
#endif

    ctx->pc = 0x14982cu;

    // 0x14982c: 0x245043d0  addiu       $s0, $v0, 0x43D0
    ctx->pc = 0x14982cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    ctx->pc = 0x149830u;
}
