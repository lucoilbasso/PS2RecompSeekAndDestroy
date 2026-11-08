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

// Function: entry_00182108
// Address: 0x182108 - 0x182110
void entry_00182108_0x182108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182108_0x182108");
#endif

    ctx->pc = 0x182108u;

    // 0x182108: 0x8d830028  lw          $v1, 0x28($t4)
    ctx->pc = 0x182108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x18210c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x182110u;
}
