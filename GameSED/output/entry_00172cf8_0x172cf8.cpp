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

// Function: entry_00172cf8
// Address: 0x172cf8 - 0x172d18
void entry_00172cf8_0x172cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172cf8_0x172cf8");
#endif

    ctx->pc = 0x172cf8u;

    // 0x172cf8: 0x2412fff8  addiu       $s2, $zero, -0x8
    ctx->pc = 0x172cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x172cfc: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x172cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172d00: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172d08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172d0c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172d10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172d14: 0x24510170  addiu       $s1, $v0, 0x170
    ctx->pc = 0x172d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    ctx->pc = 0x172d18u;
}
