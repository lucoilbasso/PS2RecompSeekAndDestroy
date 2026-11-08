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

// Function: entry_0017b51c
// Address: 0x17b51c - 0x17b520
void entry_0017b51c_0x17b51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b51c_0x17b51c");
#endif

    ctx->pc = 0x17b51cu;

    // 0x17b51c: 0x26420500  addiu       $v0, $s2, 0x500
    ctx->pc = 0x17b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1280));
    ctx->pc = 0x17b520u;
}
