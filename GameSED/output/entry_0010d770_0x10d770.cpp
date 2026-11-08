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

// Function: entry_0010d770
// Address: 0x10d770 - 0x10d784
void entry_0010d770_0x10d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d770_0x10d770");
#endif

    ctx->pc = 0x10d770u;

    // 0x10d770: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x10d770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x10d774: 0x25250150  addiu       $a1, $t1, 0x150
    ctx->pc = 0x10d774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x10d778: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10d778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d77c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10d77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d780: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x10d780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    ctx->pc = 0x10d784u;
}
