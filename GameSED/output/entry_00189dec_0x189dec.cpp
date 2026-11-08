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

// Function: entry_00189dec
// Address: 0x189dec - 0x189df0
void entry_00189dec_0x189dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189dec_0x189dec");
#endif

    ctx->pc = 0x189decu;

    // 0x189dec: 0x24020106  addiu       $v0, $zero, 0x106
    ctx->pc = 0x189decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->pc = 0x189df0u;
}
