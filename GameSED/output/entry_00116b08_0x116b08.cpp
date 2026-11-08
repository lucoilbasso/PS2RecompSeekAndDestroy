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

// Function: entry_00116b08
// Address: 0x116b08 - 0x116b24
void entry_00116b08_0x116b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116b08_0x116b08");
#endif

    ctx->pc = 0x116b08u;

    // 0x116b08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116B08u;
    {
        const bool branch_taken_0x116b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B08u;
        // 0x116b0c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b08) {
            ctx->pc = 0x116B24u;
            return;
        }
    }
    ctx->pc = 0x116B10u;
    // 0x116b10: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x116b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x116b14: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x116b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x116b18: 0x8ca20400  lw          $v0, 0x400($a1)
    ctx->pc = 0x116b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1024)));
    // 0x116b1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x116b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116b20: 0xaca20400  sw          $v0, 0x400($a1)
    ctx->pc = 0x116b20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1024), GPR_U32(ctx, 2));
    ctx->pc = 0x116b24u;
}
