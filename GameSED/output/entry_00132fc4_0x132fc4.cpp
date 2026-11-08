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

// Function: entry_00132fc4
// Address: 0x132fc4 - 0x132fc8
void entry_00132fc4_0x132fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132fc4_0x132fc4");
#endif

    ctx->pc = 0x132fc4u;

    // 0x132fc4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x132fc8u;
}
