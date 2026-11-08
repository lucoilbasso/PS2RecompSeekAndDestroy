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

// Function: entry_0017618c
// Address: 0x17618c - 0x176190
void entry_0017618c_0x17618c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017618c_0x17618c");
#endif

    ctx->pc = 0x17618cu;

    // 0x17618c: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x17618cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x176190u;
}
