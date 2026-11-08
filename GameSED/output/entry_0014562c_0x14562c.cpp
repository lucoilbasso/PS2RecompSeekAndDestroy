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

// Function: entry_0014562c
// Address: 0x14562c - 0x145630
void entry_0014562c_0x14562c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014562c_0x14562c");
#endif

    ctx->pc = 0x14562cu;

    // 0x14562c: 0x27918a70  addiu       $s1, $gp, -0x7590
    ctx->pc = 0x14562cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937200));
    ctx->pc = 0x145630u;
}
