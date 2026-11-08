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

// Function: entry_0017cc0c
// Address: 0x17cc0c - 0x17cc10
void entry_0017cc0c_0x17cc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cc0c_0x17cc0c");
#endif

    ctx->pc = 0x17cc0cu;

    // 0x17cc0c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x17cc0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x17cc10u;
}
