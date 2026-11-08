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

// Function: entry_001c7a14
// Address: 0x1c7a14 - 0x1c7a30
void entry_001c7a14_0x1c7a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7a14_0x1c7a14");
#endif

    ctx->pc = 0x1c7a14u;

    // 0x1c7a14: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c7a14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7a18: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1c7a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c7a1c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7A1Cu;
    {
        const bool branch_taken_0x1c7a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A1Cu;
        // 0x1c7a20: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a1c) {
            ctx->pc = 0x1C7A54u;
            return;
        }
    }
    ctx->pc = 0x1C7A24u;
    // 0x1c7a24: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1c7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c7a28: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x1c7a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c7a2c: 0x0  nop
    ctx->pc = 0x1c7a2cu;
    // NOP
    ctx->pc = 0x1c7a30u;
}
