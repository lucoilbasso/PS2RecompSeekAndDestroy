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

// Function: entry_0011eb04
// Address: 0x11eb04 - 0x11eb08
void entry_0011eb04_0x11eb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eb04_0x11eb04");
#endif

    ctx->pc = 0x11eb04u;

    // 0x11eb04: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x11eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x11eb08u;
}
