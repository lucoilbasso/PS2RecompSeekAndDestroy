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

// Function: entry_00141f1c
// Address: 0x141f1c - 0x141f20
void entry_00141f1c_0x141f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141f1c_0x141f1c");
#endif

    ctx->pc = 0x141f1cu;

    // 0x141f1c: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x141f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    ctx->pc = 0x141f20u;
}
