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

// Function: entry_001a5de8
// Address: 0x1a5de8 - 0x1a5e18
void entry_001a5de8_0x1a5de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5de8_0x1a5de8");
#endif

    ctx->pc = 0x1a5de8u;

    // 0x1a5de8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5DE8u;
    {
        const bool branch_taken_0x1a5de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DE8u;
        // 0x1a5dec: 0x28a20400  slti        $v0, $a1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5de8) {
            ctx->pc = 0x1A5E18u;
            return;
        }
    }
    ctx->pc = 0x1A5DF0u;
    // 0x1a5df0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a5df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5df4: 0x24a5fe00  addiu       $a1, $a1, -0x200
    ctx->pc = 0x1a5df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
    // 0x1a5df8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5dfc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a5dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5e00: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A5E00u;
    {
        const bool branch_taken_0x1a5e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E00u;
        // 0x1a5e04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e00) {
            ctx->pc = 0x1A5E54u;
            return;
        }
    }
    ctx->pc = 0x1A5E08u;
    // 0x1a5e08: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5e0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5e10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5E10u;
    {
        const bool branch_taken_0x1a5e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E10u;
        // 0x1a5e14: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e10) {
            ctx->pc = 0x1A5E54u;
            return;
        }
    }
    ctx->pc = 0x1A5E18u;
}
