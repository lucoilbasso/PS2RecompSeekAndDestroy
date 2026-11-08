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

// Function: entry_0013989c
// Address: 0x13989c - 0x1398a0
void entry_0013989c_0x13989c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013989c_0x13989c");
#endif

    ctx->pc = 0x13989cu;

    // 0x13989c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x13989cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1398a0u;
}
