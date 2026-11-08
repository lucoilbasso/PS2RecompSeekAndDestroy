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

// Function: entry_0012b960
// Address: 0x12b960 - 0x12b970
void entry_0012b960_0x12b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b960_0x12b960");
#endif

    ctx->pc = 0x12b960u;

    // 0x12b960: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12b960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x12b964: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12B964u;
    {
        const bool branch_taken_0x12b964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B964u;
        // 0x12b968: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b964) {
            ctx->pc = 0x12B984u;
            return;
        }
    }
    ctx->pc = 0x12B96Cu;
    // 0x12b96c: 0x0  nop
    ctx->pc = 0x12b96cu;
    // NOP
    ctx->pc = 0x12b970u;
}
