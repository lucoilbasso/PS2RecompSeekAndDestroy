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

// Function: entry_00186818
// Address: 0x186818 - 0x18681c
void entry_00186818_0x186818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186818_0x186818");
#endif

    ctx->pc = 0x186818u;

    // 0x186818: 0x101603  sra         $v0, $s0, 24
    ctx->pc = 0x186818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 24));
    ctx->pc = 0x18681cu;
}
