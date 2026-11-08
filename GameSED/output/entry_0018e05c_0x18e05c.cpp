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

// Function: entry_0018e05c
// Address: 0x18e05c - 0x18e064
void entry_0018e05c_0x18e05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e05c_0x18e05c");
#endif

    ctx->pc = 0x18e05cu;

    // 0x18e05c: 0x2482023c  addiu       $v0, $a0, 0x23C
    ctx->pc = 0x18e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
    // 0x18e060: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x18e060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x18e064u;
}
