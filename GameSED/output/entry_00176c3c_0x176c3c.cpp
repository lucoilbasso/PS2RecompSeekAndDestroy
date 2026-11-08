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

// Function: entry_00176c3c
// Address: 0x176c3c - 0x176c40
void entry_00176c3c_0x176c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176c3c_0x176c3c");
#endif

    ctx->pc = 0x176c3cu;

    // 0x176c3c: 0x26510250  addiu       $s1, $s2, 0x250
    ctx->pc = 0x176c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    ctx->pc = 0x176c40u;
}
