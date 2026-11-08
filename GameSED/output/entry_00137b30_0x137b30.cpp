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

// Function: entry_00137b30
// Address: 0x137b30 - 0x137b34
void entry_00137b30_0x137b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137b30_0x137b30");
#endif

    ctx->pc = 0x137b30u;

    // 0x137b30: 0x8e420400  lw          $v0, 0x400($s2)
    ctx->pc = 0x137b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
    ctx->pc = 0x137b34u;
}
