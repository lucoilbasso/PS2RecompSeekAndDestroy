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

// Function: entry_0017c2e4
// Address: 0x17c2e4 - 0x17c2e8
void entry_0017c2e4_0x17c2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c2e4_0x17c2e4");
#endif

    ctx->pc = 0x17c2e4u;

    // 0x17c2e4: 0xace5004c  sw          $a1, 0x4C($a3)
    ctx->pc = 0x17c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 5));
    ctx->pc = 0x17c2e8u;
}
