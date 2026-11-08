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

// Function: entry_001d1528
// Address: 0x1d1528 - 0x1d1550
void entry_001d1528_0x1d1528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1528_0x1d1528");
#endif

    ctx->pc = 0x1d1528u;

label_1d1528:
    // 0x1d1528: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d1528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d152c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d1530: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d1530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d1534: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d1534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d1538: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x1d1538u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d153c: 0x2450ffd0  addiu       $s0, $v0, -0x30
    ctx->pc = 0x1d153cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1d1540: 0x2622ffd0  addiu       $v0, $s1, -0x30
    ctx->pc = 0x1d1540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
    // 0x1d1544: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1d1544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d1548: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1548u;
    {
        const bool branch_taken_0x1d1548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1548u;
        // 0x1d154c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1548) {
            ctx->pc = 0x1D1528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1528;
        }
    }
    ctx->pc = 0x1D1550u;
}
