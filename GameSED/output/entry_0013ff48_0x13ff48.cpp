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

// Function: entry_0013ff48
// Address: 0x13ff48 - 0x13ff4c
void entry_0013ff48_0x13ff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ff48_0x13ff48");
#endif

    ctx->pc = 0x13ff48u;

    // 0x13ff48: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x13ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
    ctx->pc = 0x13ff4cu;
}
