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

// Function: entry_001c79ac
// Address: 0x1c79ac - 0x1c79c0
void entry_001c79ac_0x1c79ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c79ac_0x1c79ac");
#endif

    ctx->pc = 0x1c79acu;

    // 0x1c79ac: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C79ACu;
    {
        const bool branch_taken_0x1c79ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c79ac) {
            ctx->pc = 0x1C79B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C79ACu;
            // 0x1c79b0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7A14u;
            return;
        }
    }
    ctx->pc = 0x1C79B4u;
    // 0x1c79b4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1c79b8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1c79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c79bc: 0x247300e8  addiu       $s3, $v1, 0xE8
    ctx->pc = 0x1c79bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
    ctx->pc = 0x1c79c0u;
}
