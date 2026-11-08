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

// Function: entry_00161b7c
// Address: 0x161b7c - 0x161ba0
void entry_00161b7c_0x161b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161b7c_0x161b7c");
#endif

    ctx->pc = 0x161b7cu;

    // 0x161b7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x161b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b80: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x161b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x161B84u;
    {
        const bool branch_taken_0x161b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B84u;
        // 0x161b88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b84) {
            ctx->pc = 0x161BA0u;
            return;
        }
    }
    ctx->pc = 0x161B8Cu;
    // 0x161b8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x161b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161b90: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x161b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x161b94: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x161b98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161B98u;
    {
        const bool branch_taken_0x161b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B98u;
        // 0x161b9c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b98) {
            ctx->pc = 0x161BA4u;
            return;
        }
    }
    ctx->pc = 0x161BA0u;
}
