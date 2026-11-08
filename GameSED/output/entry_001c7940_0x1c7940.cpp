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

// Function: entry_001c7940
// Address: 0x1c7940 - 0x1c7958
void entry_001c7940_0x1c7940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7940_0x1c7940");
#endif

    ctx->pc = 0x1c7940u;

    // 0x1c7940: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1c7940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7944: 0x1a400019  blez        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C7944u;
    {
        const bool branch_taken_0x1c7944 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1C7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7944u;
        // 0x1c7948: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7944) {
            ctx->pc = 0x1C79ACu;
            return;
        }
    }
    ctx->pc = 0x1C794Cu;
    // 0x1c794c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1c794cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c7950: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1c7950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c7954: 0x247300e8  addiu       $s3, $v1, 0xE8
    ctx->pc = 0x1c7954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
    ctx->pc = 0x1c7958u;
}
