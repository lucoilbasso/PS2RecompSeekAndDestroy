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

// Function: entry_0011cc24
// Address: 0x11cc24 - 0x11cc28
void entry_0011cc24_0x11cc24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc24_0x11cc24");
#endif

    ctx->pc = 0x11cc24u;

    // 0x11cc24: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x11cc24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x11cc28u;
}
