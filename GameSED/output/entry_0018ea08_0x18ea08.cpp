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

// Function: entry_0018ea08
// Address: 0x18ea08 - 0x18ea20
void entry_0018ea08_0x18ea08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ea08_0x18ea08");
#endif

    ctx->pc = 0x18ea08u;

    // 0x18ea08: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18EA08u;
    {
        const bool branch_taken_0x18ea08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x18EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA08u;
        // 0x18ea0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea08) {
            ctx->pc = 0x18EA20u;
            return;
        }
    }
    ctx->pc = 0x18EA10u;
    // 0x18ea10: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18ea14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18EA14u;
    {
        const bool branch_taken_0x18ea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA14u;
        // 0x18ea18: 0x2445ee18  addiu       $a1, $v0, -0x11E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea14) {
            ctx->pc = 0x18EA28u;
            return;
        }
    }
    ctx->pc = 0x18EA1Cu;
    // 0x18ea1c: 0x0  nop
    ctx->pc = 0x18ea1cu;
    // NOP
    ctx->pc = 0x18ea20u;
}
