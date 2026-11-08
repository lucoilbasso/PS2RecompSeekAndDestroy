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

// Function: entry_0017276c
// Address: 0x17276c - 0x172770
void entry_0017276c_0x17276c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017276c_0x17276c");
#endif

    ctx->pc = 0x17276cu;

    // 0x17276c: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x17276cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
    ctx->pc = 0x172770u;
}
