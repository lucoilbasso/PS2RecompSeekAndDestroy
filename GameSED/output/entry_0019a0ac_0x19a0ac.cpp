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

// Function: entry_0019a0ac
// Address: 0x19a0ac - 0x19a0b0
void entry_0019a0ac_0x19a0ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a0ac_0x19a0ac");
#endif

    ctx->pc = 0x19a0acu;

    // 0x19a0ac: 0xae300074  sw          $s0, 0x74($s1)
    ctx->pc = 0x19a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 16));
    ctx->pc = 0x19a0b0u;
}
