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

// Function: entry_0019f678
// Address: 0x19f678 - 0x19f6a0
void entry_0019f678_0x19f678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f678_0x19f678");
#endif

    ctx->pc = 0x19f678u;

    // 0x19f678: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x19f678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f67c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19f67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f680: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x19f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19f684: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19F684u;
    {
        const bool branch_taken_0x19f684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F684u;
        // 0x19f688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f684) {
            ctx->pc = 0x19F6C4u;
            return;
        }
    }
    ctx->pc = 0x19F68Cu;
    // 0x19f68c: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x19f68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19f690: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19F690u;
    {
        const bool branch_taken_0x19f690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f690) {
            ctx->pc = 0x19F6C4u;
            return;
        }
    }
    ctx->pc = 0x19F698u;
    // 0x19f698: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x19f698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f69c: 0x0  nop
    ctx->pc = 0x19f69cu;
    // NOP
    ctx->pc = 0x19f6a0u;
}
