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

// Function: entry_0014122c
// Address: 0x14122c - 0x141230
void entry_0014122c_0x14122c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014122c_0x14122c");
#endif

    ctx->pc = 0x14122cu;

    // 0x14122c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x14122cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x141230u;
}
