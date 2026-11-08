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

// Function: entry_00106814
// Address: 0x106814 - 0x106818
void entry_00106814_0x106814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106814_0x106814");
#endif

    ctx->pc = 0x106814u;

    // 0x106814: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x106814u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x106818u;
}
