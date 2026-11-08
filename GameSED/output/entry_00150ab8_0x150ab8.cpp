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

// Function: entry_00150ab8
// Address: 0x150ab8 - 0x150ad0
void entry_00150ab8_0x150ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150ab8_0x150ab8");
#endif

    ctx->pc = 0x150ab8u;

    // 0x150ab8: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x150ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x150abc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150ABCu;
    {
        const bool branch_taken_0x150abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150ABCu;
        // 0x150ac0: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150abc) {
            ctx->pc = 0x150AD0u;
            return;
        }
    }
    ctx->pc = 0x150AC4u;
    // 0x150ac4: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x150ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x150ac8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150AC8u;
    {
        const bool branch_taken_0x150ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150AC8u;
        // 0x150acc: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ac8) {
            ctx->pc = 0x150AD8u;
            return;
        }
    }
    ctx->pc = 0x150AD0u;
}
