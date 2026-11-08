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

// Function: entry_0015282c
// Address: 0x15282c - 0x152834
void entry_0015282c_0x15282c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015282c_0x15282c");
#endif

    ctx->pc = 0x15282cu;

    // 0x15282c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x15282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x152830: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x152830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    ctx->pc = 0x152834u;
}
