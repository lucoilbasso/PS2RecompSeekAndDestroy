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

// Function: entry_00139570
// Address: 0x139570 - 0x139580
void entry_00139570_0x139570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139570_0x139570");
#endif

    ctx->pc = 0x139570u;

    // 0x139570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139574: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x139574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x139578: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x139578u;
    {
        const bool branch_taken_0x139578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139578u;
        // 0x13957c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139578) {
            ctx->pc = 0x139584u;
            return;
        }
    }
    ctx->pc = 0x139580u;
}
