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

// Function: entry_0018e234
// Address: 0x18e234 - 0x18e238
void entry_0018e234_0x18e234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e234_0x18e234");
#endif

    ctx->pc = 0x18e234u;

    // 0x18e234: 0x2502023c  addiu       $v0, $t0, 0x23C
    ctx->pc = 0x18e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 572));
    ctx->pc = 0x18e238u;
}
