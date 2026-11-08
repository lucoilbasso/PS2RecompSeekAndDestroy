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

// Function: entry_001153a8
// Address: 0x1153a8 - 0x1153c0
void entry_001153a8_0x1153a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001153a8_0x1153a8");
#endif

    ctx->pc = 0x1153a8u;

    // 0x1153a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1153a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1153ac: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1153acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1153b0: 0x254182a  slt         $v1, $s2, $s4
    ctx->pc = 0x1153b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1153b4: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1153B4u;
    {
        const bool branch_taken_0x1153b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153B4u;
        // 0x1153b8: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153b4) {
            ctx->pc = 0x1154D8u;
            return;
        }
    }
    ctx->pc = 0x1153BCu;
    // 0x1153bc: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x1153bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    ctx->pc = 0x1153c0u;
}
