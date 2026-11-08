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

// Function: entry_001ba078
// Address: 0x1ba078 - 0x1ba080
void entry_001ba078_0x1ba078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba078_0x1ba078");
#endif

    ctx->pc = 0x1ba078u;

    // 0x1ba078: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1ba078u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1ba07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ba080u;
}
