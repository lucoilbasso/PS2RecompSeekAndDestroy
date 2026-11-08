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

// Function: entry_001a6bcc
// Address: 0x1a6bcc - 0x1a6bd0
void entry_001a6bcc_0x1a6bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6bcc_0x1a6bcc");
#endif

    ctx->pc = 0x1a6bccu;

    // 0x1a6bcc: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    ctx->pc = 0x1a6bd0u;
}
