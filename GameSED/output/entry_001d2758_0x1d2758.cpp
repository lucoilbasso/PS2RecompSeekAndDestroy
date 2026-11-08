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

// Function: entry_001d2758
// Address: 0x1d2758 - 0x1d275c
void entry_001d2758_0x1d2758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2758_0x1d2758");
#endif

    ctx->pc = 0x1d2758u;

    // 0x1d2758: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x1d2758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->pc = 0x1d275cu;
}
