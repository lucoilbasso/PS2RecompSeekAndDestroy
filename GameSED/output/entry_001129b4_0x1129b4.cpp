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

// Function: entry_001129b4
// Address: 0x1129b4 - 0x1129b8
void entry_001129b4_0x1129b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001129b4_0x1129b4");
#endif

    ctx->pc = 0x1129b4u;

    // 0x1129b4: 0x248600a0  addiu       $a2, $a0, 0xA0
    ctx->pc = 0x1129b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->pc = 0x1129b8u;
}
