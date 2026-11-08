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

// Function: entry_0011898c
// Address: 0x11898c - 0x118990
void entry_0011898c_0x11898c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011898c_0x11898c");
#endif

    ctx->pc = 0x11898cu;

    // 0x11898c: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x11898cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    ctx->pc = 0x118990u;
}
