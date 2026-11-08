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

// Function: entry_001a5b68
// Address: 0x1a5b68 - 0x1a5ba0
void entry_001a5b68_0x1a5b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5b68_0x1a5b68");
#endif

    ctx->pc = 0x1a5b68u;

    // 0x1a5b68: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5B68u;
    {
        const bool branch_taken_0x1a5b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b68) {
            ctx->pc = 0x1A5B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5B68u;
            // 0x1a5b6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5BA0u;
            return;
        }
    }
    ctx->pc = 0x1A5B70u;
    // 0x1a5b70: 0x2482f400  addiu       $v0, $a0, -0xC00
    ctx->pc = 0x1a5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964224));
    // 0x1a5b74: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1a5b78: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a5b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a5b7c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a5b80: 0x531004  sllv        $v0, $s3, $v0
    ctx->pc = 0x1a5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1a5b84: 0x278190e0  addiu       $at, $gp, -0x6F20
    ctx->pc = 0x1a5b84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938848));
    // 0x1a5b88: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x1a5b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x1a5b8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a5b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5b90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a5b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a5b94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5B94u;
    {
        const bool branch_taken_0x1a5b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B94u;
        // 0x1a5b98: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b94) {
            ctx->pc = 0x1A5BACu;
            return;
        }
    }
    ctx->pc = 0x1A5B9Cu;
    // 0x1a5b9c: 0x0  nop
    ctx->pc = 0x1a5b9cu;
    // NOP
    ctx->pc = 0x1a5ba0u;
}
