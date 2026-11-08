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

// Function: entry_00124324
// Address: 0x124324 - 0x12432c
void entry_00124324_0x124324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124324_0x124324");
#endif

    ctx->pc = 0x124324u;

    // 0x124324: 0xaed20004  sw          $s2, 0x4($s6)
    ctx->pc = 0x124324u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 18));
    // 0x124328: 0xae560000  sw          $s6, 0x0($s2)
    ctx->pc = 0x124328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 22));
    ctx->pc = 0x12432cu;
}
