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

// Function: entry_00149f1c
// Address: 0x149f1c - 0x149f20
void entry_00149f1c_0x149f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149f1c_0x149f1c");
#endif

    ctx->pc = 0x149f1cu;

    // 0x149f1c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x149f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x149f20u;
}
