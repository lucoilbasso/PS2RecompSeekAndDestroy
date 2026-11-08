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

// Function: entry_0011cc30
// Address: 0x11cc30 - 0x11cc34
void entry_0011cc30_0x11cc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc30_0x11cc30");
#endif

    ctx->pc = 0x11cc30u;

    // 0x11cc30: 0x24c6d220  addiu       $a2, $a2, -0x2DE0
    ctx->pc = 0x11cc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955552));
    ctx->pc = 0x11cc34u;
}
