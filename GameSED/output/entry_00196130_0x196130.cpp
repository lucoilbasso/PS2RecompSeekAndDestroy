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

// Function: entry_00196130
// Address: 0x196130 - 0x196150
void entry_00196130_0x196130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196130_0x196130");
#endif

    ctx->pc = 0x196130u;

    // 0x196130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196134: 0x8c8501b0  lw          $a1, 0x1B0($a0)
    ctx->pc = 0x196134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x196138: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x196138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x19613c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x19613Cu;
    {
        const bool branch_taken_0x19613c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x196140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19613Cu;
        // 0x196140: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19613c) {
            ctx->pc = 0x1961A4u;
            return;
        }
    }
    ctx->pc = 0x196144u;
    // 0x196144: 0x24a701b4  addiu       $a3, $a1, 0x1B4
    ctx->pc = 0x196144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 436));
    // 0x196148: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x196148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19614c: 0x0  nop
    ctx->pc = 0x19614cu;
    // NOP
    ctx->pc = 0x196150u;
}
