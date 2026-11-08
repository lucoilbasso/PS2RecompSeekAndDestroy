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

// Function: entry_0014263c
// Address: 0x14263c - 0x142650
void entry_0014263c_0x14263c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014263c_0x14263c");
#endif

    ctx->pc = 0x14263cu;

    // 0x14263c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x14263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x142640: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x142640u;
    {
        const bool branch_taken_0x142640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x142640) {
            ctx->pc = 0x142644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142640u;
            // 0x142644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142664u;
            return;
        }
    }
    ctx->pc = 0x142648u;
    // 0x142648: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x142648u;
    {
        const bool branch_taken_0x142648 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x142648) {
            ctx->pc = 0x14264Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142648u;
            // 0x14264c: 0x8c620194  lw          $v0, 0x194($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142658u;
            return;
        }
    }
    ctx->pc = 0x142650u;
}
