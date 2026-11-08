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

// Function: entry_001185b0
// Address: 0x1185b0 - 0x1185b8
void entry_001185b0_0x1185b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001185b0_0x1185b0");
#endif

    ctx->pc = 0x1185b0u;

    // 0x1185b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1185b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1185b4: 0x24821c18  addiu       $v0, $a0, 0x1C18
    ctx->pc = 0x1185b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7192));
    ctx->pc = 0x1185b8u;
}
