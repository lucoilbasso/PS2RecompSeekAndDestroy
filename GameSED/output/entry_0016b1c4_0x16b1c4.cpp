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

// Function: entry_0016b1c4
// Address: 0x16b1c4 - 0x16b1c8
void entry_0016b1c4_0x16b1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b1c4_0x16b1c4");
#endif

    ctx->pc = 0x16b1c4u;

    // 0x16b1c4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x16b1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x16b1c8u;
}
