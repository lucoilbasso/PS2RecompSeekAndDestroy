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

// Function: entry_0010beb0
// Address: 0x10beb0 - 0x10bebc
void entry_0010beb0_0x10beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010beb0_0x10beb0");
#endif

    ctx->pc = 0x10beb0u;

    // 0x10beb0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x10beb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10beb4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x10beb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10beb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10beb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x10bebcu;
}
