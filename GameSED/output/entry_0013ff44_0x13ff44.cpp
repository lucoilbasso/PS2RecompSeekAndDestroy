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

// Function: entry_0013ff44
// Address: 0x13ff44 - 0x13ff48
void entry_0013ff44_0x13ff44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ff44_0x13ff44");
#endif

    ctx->pc = 0x13ff44u;

    // 0x13ff44: 0xae4001b4  sw          $zero, 0x1B4($s2)
    ctx->pc = 0x13ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 0));
    ctx->pc = 0x13ff48u;
}
