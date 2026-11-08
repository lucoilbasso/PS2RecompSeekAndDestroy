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

// Function: entry_00191cd8
// Address: 0x191cd8 - 0x191cdc
void entry_00191cd8_0x191cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191cd8_0x191cd8");
#endif

    ctx->pc = 0x191cd8u;

    // 0x191cd8: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x191cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    ctx->pc = 0x191cdcu;
}
