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

// Function: entry_00195324
// Address: 0x195324 - 0x195328
void entry_00195324_0x195324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195324_0x195324");
#endif

    ctx->pc = 0x195324u;

    // 0x195324: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x195324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    ctx->pc = 0x195328u;
}
