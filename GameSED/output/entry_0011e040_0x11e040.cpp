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

// Function: entry_0011e040
// Address: 0x11e040 - 0x11e058
void entry_0011e040_0x11e040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e040_0x11e040");
#endif

    ctx->pc = 0x11e040u;

    // 0x11e040: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x11e040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e044: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E044u;
    {
        const bool branch_taken_0x11e044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E044u;
        // 0x11e048: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e044) {
            ctx->pc = 0x11E090u;
            return;
        }
    }
    ctx->pc = 0x11E04Cu;
    // 0x11e04c: 0x25485a50  addiu       $t0, $t2, 0x5A50
    ctx->pc = 0x11e04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 23120));
    // 0x11e050: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x11e050u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e054: 0x0  nop
    ctx->pc = 0x11e054u;
    // NOP
    ctx->pc = 0x11e058u;
}
