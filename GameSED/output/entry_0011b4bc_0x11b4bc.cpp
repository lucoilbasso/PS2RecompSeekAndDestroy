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

// Function: entry_0011b4bc
// Address: 0x11b4bc - 0x11b4c0
void entry_0011b4bc_0x11b4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b4bc_0x11b4bc");
#endif

    ctx->pc = 0x11b4bcu;

    // 0x11b4bc: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    ctx->pc = 0x11b4c0u;
}
