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

// Function: entry_0016ea4c
// Address: 0x16ea4c - 0x16ea50
void entry_0016ea4c_0x16ea4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ea4c_0x16ea4c");
#endif

    ctx->pc = 0x16ea4cu;

    // 0x16ea4c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x16ea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    ctx->pc = 0x16ea50u;
}
