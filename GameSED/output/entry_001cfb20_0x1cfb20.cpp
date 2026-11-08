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

// Function: entry_001cfb20
// Address: 0x1cfb20 - 0x1cfb40
void entry_001cfb20_0x1cfb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfb20_0x1cfb20");
#endif

    ctx->pc = 0x1cfb20u;

    // 0x1cfb20: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CFB20u;
    {
        const bool branch_taken_0x1cfb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB20u;
        // 0x1cfb24: 0x2465005b  addiu       $a1, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb20) {
            ctx->pc = 0x1CFB68u;
            return;
        }
    }
    ctx->pc = 0x1CFB28u;
    // 0x1cfb28: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x1cfb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x1cfb2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFB2Cu;
    {
        const bool branch_taken_0x1cfb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB2Cu;
        // 0x1cfb30: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb2c) {
            ctx->pc = 0x1CFB40u;
            return;
        }
    }
    ctx->pc = 0x1CFB34u;
    // 0x1cfb34: 0x61302  srl         $v0, $a2, 12
    ctx->pc = 0x1cfb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x1cfb38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CFB38u;
    {
        const bool branch_taken_0x1cfb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB38u;
        // 0x1cfb3c: 0x2445006e  addiu       $a1, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb38) {
            ctx->pc = 0x1CFB68u;
            return;
        }
    }
    ctx->pc = 0x1CFB40u;
}
