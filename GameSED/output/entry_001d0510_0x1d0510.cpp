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

// Function: entry_001d0510
// Address: 0x1d0510 - 0x1d0538
void entry_001d0510_0x1d0510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0510_0x1d0510");
#endif

    ctx->pc = 0x1d0510u;

    // 0x1d0510: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0510u;
    {
        const bool branch_taken_0x1d0510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0510u;
        // 0x1d0514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0510) {
            ctx->pc = 0x1D0544u;
            return;
        }
    }
    ctx->pc = 0x1D0518u;
    // 0x1d0518: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d0518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d051c: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D051Cu;
    {
        const bool branch_taken_0x1d051c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d051c) {
            ctx->pc = 0x1D0520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D051Cu;
            // 0x1d0520: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0538u;
            return;
        }
    }
    ctx->pc = 0x1D0524u;
    // 0x1d0524: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1d0524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d0528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d052c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D052Cu;
    {
        const bool branch_taken_0x1d052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D052Cu;
        // 0x1d0530: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d052c) {
            ctx->pc = 0x1D0544u;
            return;
        }
    }
    ctx->pc = 0x1D0534u;
    // 0x1d0534: 0x0  nop
    ctx->pc = 0x1d0534u;
    // NOP
    ctx->pc = 0x1d0538u;
}
