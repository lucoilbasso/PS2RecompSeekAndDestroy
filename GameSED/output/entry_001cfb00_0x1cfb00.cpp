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

// Function: entry_001cfb00
// Address: 0x1cfb00 - 0x1cfb20
void entry_001cfb00_0x1cfb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfb00_0x1cfb00");
#endif

    ctx->pc = 0x1cfb00u;

    // 0x1cfb00: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CFB00u;
    {
        const bool branch_taken_0x1cfb00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB00u;
        // 0x1cfb04: 0x628c2  srl         $a1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb00) {
            ctx->pc = 0x1CFB68u;
            return;
        }
    }
    ctx->pc = 0x1CFB08u;
    // 0x1cfb08: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1cfb08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1cfb0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFB0Cu;
    {
        const bool branch_taken_0x1cfb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB0Cu;
        // 0x1cfb10: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb0c) {
            ctx->pc = 0x1CFB20u;
            return;
        }
    }
    ctx->pc = 0x1CFB14u;
    // 0x1cfb14: 0x61182  srl         $v0, $a2, 6
    ctx->pc = 0x1cfb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
    // 0x1cfb18: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CFB18u;
    {
        const bool branch_taken_0x1cfb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB18u;
        // 0x1cfb1c: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb18) {
            ctx->pc = 0x1CFB68u;
            return;
        }
    }
    ctx->pc = 0x1CFB20u;
}
