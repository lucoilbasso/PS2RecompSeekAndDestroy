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

// Function: entry_00198ee4
// Address: 0x198ee4 - 0x198ee8
void entry_00198ee4_0x198ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198ee4_0x198ee4");
#endif

    ctx->pc = 0x198ee4u;

    // 0x198ee4: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x198ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->pc = 0x198ee8u;
}
