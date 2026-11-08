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

// Function: entry_001a5e18
// Address: 0x1a5e18 - 0x1a5e48
void entry_001a5e18_0x1a5e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5e18_0x1a5e18");
#endif

    ctx->pc = 0x1a5e18u;

    // 0x1a5e18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5E18u;
    {
        const bool branch_taken_0x1a5e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E18u;
        // 0x1a5e1c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e18) {
            ctx->pc = 0x1A5E48u;
            return;
        }
    }
    ctx->pc = 0x1A5E20u;
    // 0x1a5e20: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5e24: 0x24a5fd00  addiu       $a1, $a1, -0x300
    ctx->pc = 0x1a5e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
    // 0x1a5e28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5e2c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a5e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5e30: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5E30u;
    {
        const bool branch_taken_0x1a5e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E30u;
        // 0x1a5e34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e30) {
            ctx->pc = 0x1A5E54u;
            return;
        }
    }
    ctx->pc = 0x1A5E38u;
    // 0x1a5e38: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a5e3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a5e40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5E40u;
    {
        const bool branch_taken_0x1a5e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E40u;
        // 0x1a5e44: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e40) {
            ctx->pc = 0x1A5E54u;
            return;
        }
    }
    ctx->pc = 0x1A5E48u;
}
