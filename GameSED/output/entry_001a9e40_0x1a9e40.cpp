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

// Function: entry_001a9e40
// Address: 0x1a9e40 - 0x1a9e48
void entry_001a9e40_0x1a9e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9e40_0x1a9e40");
#endif

    ctx->pc = 0x1a9e40u;

    // 0x1a9e40: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1a9e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1a9e44: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1a9e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->pc = 0x1a9e48u;
}
