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

// Function: entry_0016aa48
// Address: 0x16aa48 - 0x16aa4c
void entry_0016aa48_0x16aa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aa48_0x16aa48");
#endif

    ctx->pc = 0x16aa48u;

    // 0x16aa48: 0x2630120c  addiu       $s0, $s1, 0x120C
    ctx->pc = 0x16aa48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4620));
    ctx->pc = 0x16aa4cu;
}
