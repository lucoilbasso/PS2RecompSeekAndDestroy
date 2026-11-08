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

// Function: entry_001a5a28
// Address: 0x1a5a28 - 0x1a5a58
void entry_001a5a28_0x1a5a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5a28_0x1a5a28");
#endif

    ctx->pc = 0x1a5a28u;

    // 0x1a5a28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5A28u;
    {
        const bool branch_taken_0x1a5a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A28u;
        // 0x1a5a2c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a28) {
            ctx->pc = 0x1A5A58u;
            return;
        }
    }
    ctx->pc = 0x1A5A30u;
    // 0x1a5a30: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a5a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a5a34: 0x2463fd00  addiu       $v1, $v1, -0x300
    ctx->pc = 0x1a5a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966528));
    // 0x1a5a38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5a3c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a5a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5a40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5A40u;
    {
        const bool branch_taken_0x1a5a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A40u;
        // 0x1a5a44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a40) {
            ctx->pc = 0x1A5A64u;
            return;
        }
    }
    ctx->pc = 0x1A5A48u;
    // 0x1a5a48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5a4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a5a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a5a50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5A50u;
    {
        const bool branch_taken_0x1a5a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A50u;
        // 0x1a5a54: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a50) {
            ctx->pc = 0x1A5A64u;
            return;
        }
    }
    ctx->pc = 0x1A5A58u;
}
