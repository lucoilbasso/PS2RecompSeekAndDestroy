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

// Function: entry_0017bb38
// Address: 0x17bb38 - 0x17bb3c
void entry_0017bb38_0x17bb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bb38_0x17bb38");
#endif

    ctx->pc = 0x17bb38u;

    // 0x17bb38: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x17bb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x17bb3cu;
}
