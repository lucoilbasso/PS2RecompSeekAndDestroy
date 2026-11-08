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

// Function: entry_00167780
// Address: 0x167780 - 0x16778c
void entry_00167780_0x167780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167780_0x167780");
#endif

    ctx->pc = 0x167780u;

    // 0x167780: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x167780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x167784: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167784u;
    {
        const bool branch_taken_0x167784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167784u;
        // 0x167788: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167784) {
            ctx->pc = 0x167798u;
            return;
        }
    }
    ctx->pc = 0x16778Cu;
}
