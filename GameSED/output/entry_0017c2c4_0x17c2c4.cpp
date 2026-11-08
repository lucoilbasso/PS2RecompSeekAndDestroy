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

// Function: entry_0017c2c4
// Address: 0x17c2c4 - 0x17c2e0
void entry_0017c2c4_0x17c2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c2c4_0x17c2c4");
#endif

    ctx->pc = 0x17c2c4u;

    // 0x17c2c4: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x17c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17c2c8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x17c2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17c2cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c2ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c2d0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x17c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x17c2d4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x17c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x17c2d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17c2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c2dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17c2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x17c2e0u;
}
