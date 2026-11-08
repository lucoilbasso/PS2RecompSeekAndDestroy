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

// Function: entry_0010bb28
// Address: 0x10bb28 - 0x10bb2c
void entry_0010bb28_0x10bb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bb28_0x10bb28");
#endif

    ctx->pc = 0x10bb28u;

    // 0x10bb28: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x10bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    ctx->pc = 0x10bb2cu;
}
