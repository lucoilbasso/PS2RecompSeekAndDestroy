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

// Function: entry_001cd698
// Address: 0x1cd698 - 0x1cd6c0
void entry_001cd698_0x1cd698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd698_0x1cd698");
#endif

    ctx->pc = 0x1cd698u;

    // 0x1cd698: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x1cd698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x1cd69c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd6a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1cd6a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1cd6a4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1cd6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd6a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1cd6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cd6ac: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x1cd6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x1cd6b0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1cd6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1cd6b4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CD6B4u;
    {
        const bool branch_taken_0x1cd6b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6B4u;
        // 0x1cd6b8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd6b4) {
            ctx->pc = 0x1CD6E4u;
            return;
        }
    }
    ctx->pc = 0x1CD6BCu;
    // 0x1cd6bc: 0x881006  srlv        $v0, $t0, $a0
    ctx->pc = 0x1cd6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    ctx->pc = 0x1cd6c0u;
}
