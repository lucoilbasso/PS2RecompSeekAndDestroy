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

// Function: entry_00182fc0
// Address: 0x182fc0 - 0x182fc8
void entry_00182fc0_0x182fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182fc0_0x182fc0");
#endif

    ctx->pc = 0x182fc0u;

    // 0x182fc0: 0x8c83dc08  lw          $v1, -0x23F8($a0)
    ctx->pc = 0x182fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958088)));
    // 0x182fc4: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x182fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    ctx->pc = 0x182fc8u;
}
