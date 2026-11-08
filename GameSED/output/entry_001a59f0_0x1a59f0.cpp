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

// Function: entry_001a59f0
// Address: 0x1a59f0 - 0x1a5a28
void entry_001a59f0_0x1a59f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a59f0_0x1a59f0");
#endif

    ctx->pc = 0x1a59f0u;

    // 0x1a59f0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1a59f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x1a59f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A59F4u;
    {
        const bool branch_taken_0x1a59f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59F4u;
        // 0x1a59f8: 0x28620400  slti        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59f4) {
            ctx->pc = 0x1A5A28u;
            return;
        }
    }
    ctx->pc = 0x1A59FCu;
    // 0x1a59fc: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a59fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5a00: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x1a5a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x1a5a04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5a08: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a5a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5a0c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A5A0Cu;
    {
        const bool branch_taken_0x1a5a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A0Cu;
        // 0x1a5a10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a0c) {
            ctx->pc = 0x1A5A64u;
            return;
        }
    }
    ctx->pc = 0x1A5A14u;
    // 0x1a5a14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a5a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5a18: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5a1c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A5A1Cu;
    {
        const bool branch_taken_0x1a5a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A1Cu;
        // 0x1a5a20: 0x24500004  addiu       $s0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a1c) {
            ctx->pc = 0x1A5A64u;
            return;
        }
    }
    ctx->pc = 0x1A5A24u;
    // 0x1a5a24: 0x0  nop
    ctx->pc = 0x1a5a24u;
    // NOP
    ctx->pc = 0x1a5a28u;
}
