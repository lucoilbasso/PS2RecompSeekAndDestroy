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

// Function: entry_001bcbd0
// Address: 0x1bcbd0 - 0x1bcbe8
void entry_001bcbd0_0x1bcbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcbd0_0x1bcbd0");
#endif

    ctx->pc = 0x1bcbd0u;

    // 0x1bcbd0: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCBD0u;
    {
        const bool branch_taken_0x1bcbd0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBD0u;
        // 0x1bcbd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbd0) {
            ctx->pc = 0x1BCBECu;
            return;
        }
    }
    ctx->pc = 0x1BCBD8u;
    // 0x1bcbd8: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x1bcbd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1bcbdc: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x1bcbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x1bcbe0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1bcbe0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1bcbe4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1bcbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->pc = 0x1bcbe8u;
}
