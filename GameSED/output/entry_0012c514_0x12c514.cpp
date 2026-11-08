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

// Function: entry_0012c514
// Address: 0x12c514 - 0x12c518
void entry_0012c514_0x12c514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c514_0x12c514");
#endif

    ctx->pc = 0x12c514u;

    // 0x12c514: 0x248501cc  addiu       $a1, $a0, 0x1CC
    ctx->pc = 0x12c514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 460));
    ctx->pc = 0x12c518u;
}
