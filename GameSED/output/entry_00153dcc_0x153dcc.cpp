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

// Function: entry_00153dcc
// Address: 0x153dcc - 0x153e08
void entry_00153dcc_0x153dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153dcc_0x153dcc");
#endif

    ctx->pc = 0x153dccu;

    // 0x153dcc: 0x8e2607ac  lw          $a2, 0x7AC($s1)
    ctx->pc = 0x153dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1964)));
    // 0x153dd0: 0x10c00033  beqz        $a2, . + 4 + (0x33 << 2)
    ctx->pc = 0x153DD0u;
    {
        const bool branch_taken_0x153dd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DD0u;
        // 0x153dd4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dd0) {
            ctx->pc = 0x153EA0u;
            return;
        }
    }
    ctx->pc = 0x153DD8u;
    // 0x153dd8: 0x8c471248  lw          $a3, 0x1248($v0)
    ctx->pc = 0x153dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4680)));
    // 0x153ddc: 0x50e00031  beql        $a3, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x153DDCu;
    {
        const bool branch_taken_0x153ddc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ddc) {
            ctx->pc = 0x153DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153DDCu;
            // 0x153de0: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153EA4u;
            return;
        }
    }
    ctx->pc = 0x153DE4u;
    // 0x153de4: 0x8c451250  lw          $a1, 0x1250($v0)
    ctx->pc = 0x153de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4688)));
    // 0x153de8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x153DE8u;
    {
        const bool branch_taken_0x153de8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DE8u;
        // 0x153dec: 0x8c50124c  lw          $s0, 0x124C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153de8) {
            ctx->pc = 0x153E08u;
            return;
        }
    }
    ctx->pc = 0x153DF0u;
    // 0x153df0: 0x8c421244  lw          $v0, 0x1244($v0)
    ctx->pc = 0x153df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4676)));
    // 0x153df4: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x153df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x153df8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x153df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153dfc: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x153dfcu;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x153e00: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x153e00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x153e04: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x153e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x153e08u;
}
