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

// Function: entry_001108bc
// Address: 0x1108bc - 0x1108c0
void entry_001108bc_0x1108bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001108bc_0x1108bc");
#endif

    ctx->pc = 0x1108bcu;

    // 0x1108bc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1108bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1108c0u;
}
