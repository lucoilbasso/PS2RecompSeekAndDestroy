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

// Function: entry_00117ee8
// Address: 0x117ee8 - 0x117f00
void entry_00117ee8_0x117ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117ee8_0x117ee8");
#endif

    ctx->pc = 0x117ee8u;

    // 0x117ee8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x117ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x117eec: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x117eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x117ef0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x117ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x117ef4: 0x24820026  addiu       $v0, $a0, 0x26
    ctx->pc = 0x117ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 38));
    // 0x117ef8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x117ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x117efc: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x117efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    ctx->pc = 0x117f00u;
}
