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

// Function: entry_0016a32c
// Address: 0x16a32c - 0x16a334
void entry_0016a32c_0x16a32c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a32c_0x16a32c");
#endif

    ctx->pc = 0x16a32cu;

    // 0x16a32c: 0x8e130008  lw          $s3, 0x8($s0)
    ctx->pc = 0x16a32cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16a330: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x16a330u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x16a334u;
}
