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

// Function: entry_0017bf04
// Address: 0x17bf04 - 0x17bf08
void entry_0017bf04_0x17bf04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bf04_0x17bf04");
#endif

    ctx->pc = 0x17bf04u;

    // 0x17bf04: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x17bf04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x17bf08u;
}
