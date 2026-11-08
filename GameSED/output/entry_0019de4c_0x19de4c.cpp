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

// Function: entry_0019de4c
// Address: 0x19de4c - 0x19de6c
void entry_0019de4c_0x19de4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019de4c_0x19de4c");
#endif

    ctx->pc = 0x19de4cu;

    // 0x19de4c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x19de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x19de50: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x19de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19de54: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x19de54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19de58: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19de58u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19de5c: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19de5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19de60: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DE60u;
    {
        const bool branch_taken_0x19de60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE60u;
        // 0x19de64: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de60) {
            ctx->pc = 0x19DE6Cu;
            return;
        }
    }
    ctx->pc = 0x19DE68u;
    // 0x19de68: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19de68u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    ctx->pc = 0x19de6cu;
}
