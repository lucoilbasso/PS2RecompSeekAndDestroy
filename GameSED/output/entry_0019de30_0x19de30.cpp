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

// Function: entry_0019de30
// Address: 0x19de30 - 0x19de4c
void entry_0019de30_0x19de30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019de30_0x19de30");
#endif

    ctx->pc = 0x19de30u;

    // 0x19de30: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x19de30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x19de34: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x19de34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19de38: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19de38u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19de3c: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19de3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19de40: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DE40u;
    {
        const bool branch_taken_0x19de40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE40u;
        // 0x19de44: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de40) {
            ctx->pc = 0x19DE4Cu;
            return;
        }
    }
    ctx->pc = 0x19DE48u;
    // 0x19de48: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19de48u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    ctx->pc = 0x19de4cu;
}
