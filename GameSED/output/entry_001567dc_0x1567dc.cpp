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

// Function: entry_001567dc
// Address: 0x1567dc - 0x1567e4
void entry_001567dc_0x1567dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001567dc_0x1567dc");
#endif

    ctx->pc = 0x1567dcu;

    // 0x1567dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1567dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1567e0: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x1567e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1567e4u;
}
