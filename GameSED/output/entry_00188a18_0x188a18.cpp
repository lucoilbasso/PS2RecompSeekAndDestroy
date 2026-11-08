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

// Function: entry_00188a18
// Address: 0x188a18 - 0x188a28
void entry_00188a18_0x188a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188a18_0x188a18");
#endif

    ctx->pc = 0x188a18u;

    // 0x188a18: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x188a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x188a1c: 0x50c0000d  beql        $a2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x188A1Cu;
    {
        const bool branch_taken_0x188a1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a1c) {
            ctx->pc = 0x188A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188A1Cu;
            // 0x188a20: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188A54u;
            return;
        }
    }
    ctx->pc = 0x188A24u;
    // 0x188a24: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x188a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    ctx->pc = 0x188a28u;
}
