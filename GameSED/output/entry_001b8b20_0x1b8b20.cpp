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

// Function: entry_001b8b20
// Address: 0x1b8b20 - 0x1b8b30
void entry_001b8b20_0x1b8b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8b20_0x1b8b20");
#endif

    ctx->pc = 0x1b8b20u;

    // 0x1b8b20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b8b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8b24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b8b24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8b28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b8b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b8b30u;
}
