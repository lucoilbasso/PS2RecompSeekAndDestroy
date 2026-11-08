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

// Function: entry_0012c4b4
// Address: 0x12c4b4 - 0x12c4b8
void entry_0012c4b4_0x12c4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c4b4_0x12c4b4");
#endif

    ctx->pc = 0x12c4b4u;

    // 0x12c4b4: 0x248501d4  addiu       $a1, $a0, 0x1D4
    ctx->pc = 0x12c4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 468));
    ctx->pc = 0x12c4b8u;
}
