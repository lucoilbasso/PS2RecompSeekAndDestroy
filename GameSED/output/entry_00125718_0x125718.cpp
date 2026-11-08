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

// Function: entry_00125718
// Address: 0x125718 - 0x125720
void entry_00125718_0x125718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125718_0x125718");
#endif

    ctx->pc = 0x125718u;

    // 0x125718: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x125718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12571c: 0xafa40134  sw          $a0, 0x134($sp)
    ctx->pc = 0x12571cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 4));
    ctx->pc = 0x125720u;
}
