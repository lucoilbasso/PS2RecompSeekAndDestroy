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

// Function: entry_00160d98
// Address: 0x160d98 - 0x160dd8
void entry_00160d98_0x160d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160d98_0x160d98");
#endif

    ctx->pc = 0x160d98u;

    // 0x160d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160d9c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x160d9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x160da0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x160da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x160da4: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x160da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x160da8: 0x8c6207cc  lw          $v0, 0x7CC($v1)
    ctx->pc = 0x160da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1996)));
    // 0x160dac: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x160dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x160db0: 0x704610e8  pminw       $v0, $v0, $a2
    ctx->pc = 0x160db0u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x160db4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x160db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x160db8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160dbc: 0x28434000  slti        $v1, $v0, 0x4000
    ctx->pc = 0x160dbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x160dc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x160dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160dc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x160DC4u;
    {
        const bool branch_taken_0x160dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160DC4u;
        // 0x160dc8: 0x28472000  slti        $a3, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160dc4) {
            ctx->pc = 0x160DD8u;
            return;
        }
    }
    ctx->pc = 0x160DCCu;
    // 0x160dcc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x160dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160dd4: 0x47300a  movz        $a2, $v0, $a3
    ctx->pc = 0x160dd4u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->pc = 0x160dd8u;
}
