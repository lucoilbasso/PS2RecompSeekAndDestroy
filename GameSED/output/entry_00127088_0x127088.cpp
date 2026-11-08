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

// Function: entry_00127088
// Address: 0x127088 - 0x127098
void entry_00127088_0x127088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127088_0x127088");
#endif

    ctx->pc = 0x127088u;

    // 0x127088: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x127088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x12708c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12708Cu;
    {
        const bool branch_taken_0x12708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12708Cu;
        // 0x127090: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12708c) {
            ctx->pc = 0x1270ACu;
            return;
        }
    }
    ctx->pc = 0x127094u;
    // 0x127094: 0x0  nop
    ctx->pc = 0x127094u;
    // NOP
    ctx->pc = 0x127098u;
}
