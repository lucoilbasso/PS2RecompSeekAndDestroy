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

// Function: entry_00160d38
// Address: 0x160d38 - 0x160d78
void entry_00160d38_0x160d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160d38_0x160d38");
#endif

    ctx->pc = 0x160d38u;

    // 0x160d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160d3c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x160d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x160d40: 0x24420188  addiu       $v0, $v0, 0x188
    ctx->pc = 0x160d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
    // 0x160d44: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x160d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x160d48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160d4c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x160d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x160d50: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x160d50u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x160d54: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x160d54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x160d58: 0x28624000  slti        $v0, $v1, 0x4000
    ctx->pc = 0x160d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x160d5c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x160d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x160d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160d64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160D64u;
    {
        const bool branch_taken_0x160d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D64u;
        // 0x160d68: 0x28632000  slti        $v1, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8192) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d64) {
            ctx->pc = 0x160D78u;
            return;
        }
    }
    ctx->pc = 0x160D6Cu;
    // 0x160d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x160D70u;
    {
        const bool branch_taken_0x160d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D70u;
        // 0x160d74: 0x43300a  movz        $a2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d70) {
            ctx->pc = 0x160D7Cu;
            return;
        }
    }
    ctx->pc = 0x160D78u;
}
