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

// Function: entry_001a7138
// Address: 0x1a7138 - 0x1a7168
void entry_001a7138_0x1a7138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7138_0x1a7138");
#endif

    ctx->pc = 0x1a7138u;

    // 0x1a7138: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7138u;
    {
        const bool branch_taken_0x1a7138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7138u;
        // 0x1a713c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7138) {
            ctx->pc = 0x1A7168u;
            return;
        }
    }
    ctx->pc = 0x1A7140u;
    // 0x1a7140: 0x24a2f400  addiu       $v0, $a1, -0xC00
    ctx->pc = 0x1a7140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964224));
    // 0x1a7144: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x1a7144u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a7148: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a7148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a714c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a714cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7150: 0x531004  sllv        $v0, $s3, $v0
    ctx->pc = 0x1a7150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a7154: 0x9c1821  addu        $v1, $a0, $gp
    ctx->pc = 0x1a7154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x1a7158: 0x8c6390e0  lw          $v1, -0x6F20($v1)
    ctx->pc = 0x1a7158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938848)));
    // 0x1a715c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a7160: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7160u;
    {
        const bool branch_taken_0x1a7160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7160u;
        // 0x1a7164: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7160) {
            ctx->pc = 0x1A7178u;
            return;
        }
    }
    ctx->pc = 0x1A7168u;
}
