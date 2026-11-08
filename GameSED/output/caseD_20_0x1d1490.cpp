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

// Function: caseD_20
// Address: 0x1d1490 - 0x1d14a8
void caseD_20_0x1d1490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_20_0x1d1490");
#endif

    ctx->pc = 0x1d1490u;

    // 0x1d1490: 0x83a201d1  lb          $v0, 0x1D1($sp)
    ctx->pc = 0x1d1490u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x1d1494: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D1494u;
    {
        const bool branch_taken_0x1d1494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1494) {
            ctx->pc = 0x1D1498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1494u;
            // 0x1d1498: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1460u;
            return;
        }
    }
    ctx->pc = 0x1D149Cu;
    // 0x1d149c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D149Cu;
    {
        const bool branch_taken_0x1d149c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D149Cu;
        // 0x1d14a0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d149c) {
            ctx->pc = 0x1D14DCu;
            return;
        }
    }
    ctx->pc = 0x1D14A4u;
    // 0x1d14a4: 0x0  nop
    ctx->pc = 0x1d14a4u;
    // NOP
    ctx->pc = 0x1d14a8u;
}
