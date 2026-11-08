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

// Function: entry_0011b168
// Address: 0x11b168 - 0x11b184
void entry_0011b168_0x11b168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b168_0x11b168");
#endif

    ctx->pc = 0x11b168u;

    // 0x11b168: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b16c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11b16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b170: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11b170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11b174: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x11b174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x11b178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b17c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x11b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x11b180: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11b180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x11b184u;
}
