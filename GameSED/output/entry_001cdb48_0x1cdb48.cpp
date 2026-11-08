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

// Function: entry_001cdb48
// Address: 0x1cdb48 - 0x1cdb4c
void entry_001cdb48_0x1cdb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdb48_0x1cdb48");
#endif

    ctx->pc = 0x1cdb48u;

    // 0x1cdb48: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x1cdb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    ctx->pc = 0x1cdb4cu;
}
