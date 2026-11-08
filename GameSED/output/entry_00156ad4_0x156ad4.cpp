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

// Function: entry_00156ad4
// Address: 0x156ad4 - 0x156ad8
void entry_00156ad4_0x156ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156ad4_0x156ad4");
#endif

    ctx->pc = 0x156ad4u;

    // 0x156ad4: 0x8f8288cc  lw          $v0, -0x7734($gp)
    ctx->pc = 0x156ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
    ctx->pc = 0x156ad8u;
}
