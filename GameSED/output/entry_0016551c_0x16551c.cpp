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

// Function: entry_0016551c
// Address: 0x16551c - 0x165548
void entry_0016551c_0x16551c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016551c_0x16551c");
#endif

    ctx->pc = 0x16551cu;

    // 0x16551c: 0x8e041258  lw          $a0, 0x1258($s0)
    ctx->pc = 0x16551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
    // 0x165520: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x165520u;
    {
        const bool branch_taken_0x165520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x165520) {
            ctx->pc = 0x165524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165520u;
            // 0x165524: 0x8e4301ac  lw          $v1, 0x1AC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165548u;
            return;
        }
    }
    ctx->pc = 0x165528u;
    // 0x165528: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x165528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x16552c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x16552cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x165530: 0x8c431a64  lw          $v1, 0x1A64($v0)
    ctx->pc = 0x165530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6756)));
    // 0x165534: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x165534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x165538: 0xac830110  sw          $v1, 0x110($a0)
    ctx->pc = 0x165538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 3));
    // 0x16553c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x16553cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x165540: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x165540u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x165544: 0x8e4301ac  lw          $v1, 0x1AC($s2)
    ctx->pc = 0x165544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 428)));
    ctx->pc = 0x165548u;
}
