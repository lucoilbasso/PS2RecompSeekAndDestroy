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

// Function: entry_0018f2a8
// Address: 0x18f2a8 - 0x18f2c4
void entry_0018f2a8_0x18f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f2a8_0x18f2a8");
#endif

    ctx->pc = 0x18f2a8u;

    // 0x18f2a8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x18f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x18f2ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F2ACu;
    {
        const bool branch_taken_0x18f2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2ACu;
        // 0x18f2b0: 0x112900  sll         $a1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2ac) {
            ctx->pc = 0x18F2C4u;
            return;
        }
    }
    ctx->pc = 0x18F2B4u;
    // 0x18f2b4: 0xdd020028  ld          $v0, 0x28($t0)
    ctx->pc = 0x18f2b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x18f2b8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x18f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18f2bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f2c0: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x18f2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    ctx->pc = 0x18f2c4u;
}
