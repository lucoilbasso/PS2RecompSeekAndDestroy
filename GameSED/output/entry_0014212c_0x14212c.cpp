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

// Function: entry_0014212c
// Address: 0x14212c - 0x142134
void entry_0014212c_0x14212c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014212c_0x14212c");
#endif

    ctx->pc = 0x14212cu;

    // 0x14212c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14212cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142130: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x142130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x142134u;
}
