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

// Function: entry_001d5790
// Address: 0x1d5790 - 0x1d579c
void entry_001d5790_0x1d5790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5790_0x1d5790");
#endif

    ctx->pc = 0x1d5790u;

    // 0x1d5790: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5794: 0xac900014  sw          $s0, 0x14($a0)
    ctx->pc = 0x1d5794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 16));
    // 0x1d5798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d579cu;
}
