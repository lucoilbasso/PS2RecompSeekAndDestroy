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

// Function: entry_0012b970
// Address: 0x12b970 - 0x12b984
void entry_0012b970_0x12b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b970_0x12b970");
#endif

    ctx->pc = 0x12b970u;

    // 0x12b970: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B970u;
    {
        const bool branch_taken_0x12b970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B970u;
        // 0x12b974: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b970) {
            ctx->pc = 0x12B988u;
            return;
        }
    }
    ctx->pc = 0x12B978u;
    // 0x12b978: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12b978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x12b97c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12b97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b980: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12b980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x12b984u;
}
