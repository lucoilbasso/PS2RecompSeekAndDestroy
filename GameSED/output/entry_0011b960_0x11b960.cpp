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

// Function: entry_0011b960
// Address: 0x11b960 - 0x11b974
void entry_0011b960_0x11b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b960_0x11b960");
#endif

    ctx->pc = 0x11b960u;

    // 0x11b960: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11b960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11b964: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11b964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11b968: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x11b968u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x11b96c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11b970: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x11b970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->pc = 0x11b974u;
}
