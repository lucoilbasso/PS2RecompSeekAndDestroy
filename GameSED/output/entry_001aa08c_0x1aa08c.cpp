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

// Function: entry_001aa08c
// Address: 0x1aa08c - 0x1aa090
void entry_001aa08c_0x1aa08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa08c_0x1aa08c");
#endif

    ctx->pc = 0x1aa08cu;

    // 0x1aa08c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1aa08cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x1aa090u;
}
