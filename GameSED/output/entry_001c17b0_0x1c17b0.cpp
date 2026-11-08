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

// Function: entry_001c17b0
// Address: 0x1c17b0 - 0x1c17e0
void entry_001c17b0_0x1c17b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c17b0_0x1c17b0");
#endif

    ctx->pc = 0x1c17b0u;

    // 0x1c17b0: 0x4c1000c  bgez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C17B0u;
    {
        const bool branch_taken_0x1c17b0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1C17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17B0u;
        // 0x1c17b4: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17b0) {
            ctx->pc = 0x1C17E4u;
            return;
        }
    }
    ctx->pc = 0x1C17B8u;
    // 0x1c17b8: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x1c17b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x1c17bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1c17bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1c17c0: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1c17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1c17c4: 0x91823  negu        $v1, $t1
    ctx->pc = 0x1c17c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x1c17c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1c17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1c17cc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1c17ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c17d0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1c17d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c17d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C17D4u;
    {
        const bool branch_taken_0x1c17d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17D4u;
        // 0x1c17d8: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17d4) {
            ctx->pc = 0x1C17E0u;
            return;
        }
    }
    ctx->pc = 0x1C17DCu;
    // 0x1c17dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1c17dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1c17e0u;
}
