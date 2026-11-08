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

// Function: entry_0019b8dc
// Address: 0x19b8dc - 0x19b8e0
void entry_0019b8dc_0x19b8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b8dc_0x19b8dc");
#endif

    ctx->pc = 0x19b8dcu;

    // 0x19b8dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19b8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x19b8e0u;
}
