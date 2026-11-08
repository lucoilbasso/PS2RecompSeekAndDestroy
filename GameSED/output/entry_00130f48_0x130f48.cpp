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

// Function: entry_00130f48
// Address: 0x130f48 - 0x130f4c
void entry_00130f48_0x130f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130f48_0x130f48");
#endif

    ctx->pc = 0x130f48u;

    // 0x130f48: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x130f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->pc = 0x130f4cu;
}
