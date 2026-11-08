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

// Function: entry_0019449c
// Address: 0x19449c - 0x1944c0
void entry_0019449c_0x19449c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019449c_0x19449c");
#endif

    ctx->pc = 0x19449cu;

    // 0x19449c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19449cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1944a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1944A0u;
    {
        const bool branch_taken_0x1944a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1944A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1944A0u;
        // 0x1944a4: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1944a0) {
            ctx->pc = 0x1944C0u;
            return;
        }
    }
    ctx->pc = 0x1944A8u;
    // 0x1944a8: 0x8e42012c  lw          $v0, 0x12C($s2)
    ctx->pc = 0x1944a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x1944ac: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x1944acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1944b0: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1944b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1944b4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1944b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1944b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1944b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944bc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1944bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    ctx->pc = 0x1944c0u;
}
