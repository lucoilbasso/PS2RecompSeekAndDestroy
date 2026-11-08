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

// Function: entry_00131770
// Address: 0x131770 - 0x131788
void entry_00131770_0x131770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131770_0x131770");
#endif

    ctx->pc = 0x131770u;

    // 0x131770: 0x53c00019  beql        $fp, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x131770u;
    {
        const bool branch_taken_0x131770 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x131770) {
            ctx->pc = 0x131774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131770u;
            // 0x131774: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1317D8u;
            return;
        }
    }
    ctx->pc = 0x131778u;
    // 0x131778: 0x8ea30150  lw          $v1, 0x150($s5)
    ctx->pc = 0x131778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 336)));
    // 0x13177c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x13177Cu;
    {
        const bool branch_taken_0x13177c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x131780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13177Cu;
        // 0x131780: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13177c) {
            ctx->pc = 0x1317ACu;
            return;
        }
    }
    ctx->pc = 0x131784u;
    // 0x131784: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x131784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    ctx->pc = 0x131788u;
}
