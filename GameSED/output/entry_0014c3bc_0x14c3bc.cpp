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

// Function: entry_0014c3bc
// Address: 0x14c3bc - 0x14c3c0
void entry_0014c3bc_0x14c3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c3bc_0x14c3bc");
#endif

    ctx->pc = 0x14c3bcu;

    // 0x14c3bc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x14c3c0u;
}
