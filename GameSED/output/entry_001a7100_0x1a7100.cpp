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

// Function: entry_001a7100
// Address: 0x1a7100 - 0x1a7138
void entry_001a7100_0x1a7100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7100_0x1a7100");
#endif

    ctx->pc = 0x1a7100u;

    // 0x1a7100: 0x28a20c00  slti        $v0, $a1, 0xC00
    ctx->pc = 0x1a7100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a7104: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1A7104u;
    {
        const bool branch_taken_0x1a7104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7104) {
            ctx->pc = 0x1A7108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7104u;
            // 0x1a7108: 0x28a20c40  slti        $v0, $a1, 0xC40 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3136) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7138u;
            return;
        }
    }
    ctx->pc = 0x1A710Cu;
    // 0x1a710c: 0x51942  srl         $v1, $a1, 5
    ctx->pc = 0x1a710cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x1a7110: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x1a7110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1a7114: 0x26e4fb30  addiu       $a0, $s7, -0x4D0
    ctx->pc = 0x1a7114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294966064));
    // 0x1a7118: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a7118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a711c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a711cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7120: 0xb32804  sllv        $a1, $s3, $a1
    ctx->pc = 0x1a7120u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a7124: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a7124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a7128: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a7128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a712c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A712Cu;
    {
        const bool branch_taken_0x1a712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A712Cu;
        // 0x1a7130: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a712c) {
            ctx->pc = 0x1A7178u;
            return;
        }
    }
    ctx->pc = 0x1A7134u;
    // 0x1a7134: 0x0  nop
    ctx->pc = 0x1a7134u;
    // NOP
    ctx->pc = 0x1a7138u;
}
