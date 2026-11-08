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

// Function: entry_00156e30
// Address: 0x156e30 - 0x156e48
void entry_00156e30_0x156e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156e30_0x156e30");
#endif

    ctx->pc = 0x156e30u;

    // 0x156e30: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x156e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x156e34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x156e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156e38: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x156e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x156e3c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x156e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x156e40: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x156e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x156e44: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x156e44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x156e48u;
}
