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

// Function: entry_00182114
// Address: 0x182114 - 0x18211c
void entry_00182114_0x182114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182114_0x182114");
#endif

    ctx->pc = 0x182114u;

    // 0x182114: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x182114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x182118: 0xad830028  sw          $v1, 0x28($t4)
    ctx->pc = 0x182118u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 3));
    ctx->pc = 0x18211cu;
}
