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

// Function: entry_0011ef70
// Address: 0x11ef70 - 0x11ef74
void entry_0011ef70_0x11ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ef70_0x11ef70");
#endif

    ctx->pc = 0x11ef70u;

    // 0x11ef70: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x11ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
    ctx->pc = 0x11ef74u;
}
