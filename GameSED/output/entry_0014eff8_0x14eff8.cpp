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

// Function: entry_0014eff8
// Address: 0x14eff8 - 0x14effc
void entry_0014eff8_0x14eff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eff8_0x14eff8");
#endif

    ctx->pc = 0x14eff8u;

    // 0x14eff8: 0x26020820  addiu       $v0, $s0, 0x820
    ctx->pc = 0x14eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    ctx->pc = 0x14effcu;
}
