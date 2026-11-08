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

// Function: entry_001cbd34
// Address: 0x1cbd34 - 0x1cbd3c
void entry_001cbd34_0x1cbd34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbd34_0x1cbd34");
#endif

    ctx->pc = 0x1cbd34u;

    // 0x1cbd34: 0x24420c48  addiu       $v0, $v0, 0xC48
    ctx->pc = 0x1cbd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3144));
    // 0x1cbd38: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1cbd38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1cbd3cu;
}
