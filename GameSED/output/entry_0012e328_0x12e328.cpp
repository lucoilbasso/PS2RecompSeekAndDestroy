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

// Function: entry_0012e328
// Address: 0x12e328 - 0x12e32c
void entry_0012e328_0x12e328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e328_0x12e328");
#endif

    ctx->pc = 0x12e328u;

    // 0x12e328: 0xae720038  sw          $s2, 0x38($s3)
    ctx->pc = 0x12e328u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 18));
    ctx->pc = 0x12e32cu;
}
