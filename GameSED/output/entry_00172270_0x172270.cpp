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

// Function: entry_00172270
// Address: 0x172270 - 0x172288
void entry_00172270_0x172270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172270_0x172270");
#endif

    ctx->pc = 0x172270u;

    // 0x172270: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x172270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x172274: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17227c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x17227cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172280: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x172280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x172284: 0x24510100  addiu       $s1, $v0, 0x100
    ctx->pc = 0x172284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    ctx->pc = 0x172288u;
}
