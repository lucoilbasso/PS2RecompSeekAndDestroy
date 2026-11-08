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

// Function: entry_0013ff4c
// Address: 0x13ff4c - 0x13ff50
void entry_0013ff4c_0x13ff4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ff4c_0x13ff4c");
#endif

    ctx->pc = 0x13ff4cu;

    // 0x13ff4c: 0xae4001bc  sw          $zero, 0x1BC($s2)
    ctx->pc = 0x13ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 0));
    ctx->pc = 0x13ff50u;
}
