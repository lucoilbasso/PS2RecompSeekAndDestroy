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

// Function: entry_0019a584
// Address: 0x19a584 - 0x19a58c
void entry_0019a584_0x19a584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a584_0x19a584");
#endif

    ctx->pc = 0x19a584u;

    // 0x19a584: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x19a584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x19a588: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19a588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x19a58cu;
}
