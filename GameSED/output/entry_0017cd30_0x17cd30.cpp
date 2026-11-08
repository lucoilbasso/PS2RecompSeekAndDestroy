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

// Function: entry_0017cd30
// Address: 0x17cd30 - 0x17cd38
void entry_0017cd30_0x17cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cd30_0x17cd30");
#endif

    ctx->pc = 0x17cd30u;

    // 0x17cd30: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cd34: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x17cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    ctx->pc = 0x17cd38u;
}
