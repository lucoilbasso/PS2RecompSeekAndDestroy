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

// Function: entry_00174a04
// Address: 0x174a04 - 0x174a08
void entry_00174a04_0x174a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174a04_0x174a04");
#endif

    ctx->pc = 0x174a04u;

    // 0x174a04: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x174a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    ctx->pc = 0x174a08u;
}
