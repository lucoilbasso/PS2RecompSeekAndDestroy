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

// Function: entry_0014180c
// Address: 0x14180c - 0x141810
void entry_0014180c_0x14180c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014180c_0x14180c");
#endif

    ctx->pc = 0x14180cu;

    // 0x14180c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x14180cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x141810u;
}
