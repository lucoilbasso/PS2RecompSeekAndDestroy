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

// Function: entry_001cbc80
// Address: 0x1cbc80 - 0x1cbc88
void entry_001cbc80_0x1cbc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc80_0x1cbc80");
#endif

    ctx->pc = 0x1cbc80u;

    // 0x1cbc80: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1cbc80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1cbc84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cbc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1cbc88u;
}
