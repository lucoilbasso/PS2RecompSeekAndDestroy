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

// Function: entry_00172300
// Address: 0x172300 - 0x172318
void entry_00172300_0x172300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172300_0x172300");
#endif

    ctx->pc = 0x172300u;

    // 0x172300: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x172300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x172304: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17230c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x17230cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172310: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x172310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x172314: 0x24510130  addiu       $s1, $v0, 0x130
    ctx->pc = 0x172314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    ctx->pc = 0x172318u;
}
