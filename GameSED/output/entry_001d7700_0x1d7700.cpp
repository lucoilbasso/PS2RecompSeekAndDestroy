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

// Function: entry_001d7700
// Address: 0x1d7700 - 0x1d7710
void entry_001d7700_0x1d7700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7700_0x1d7700");
#endif

    ctx->pc = 0x1d7700u;

    // 0x1d7700: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1d7700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1d7704: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7704u;
    {
        const bool branch_taken_0x1d7704 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d7704) {
            ctx->pc = 0x1D7708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7704u;
            // 0x1d7708: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7730u;
            return;
        }
    }
    ctx->pc = 0x1D770Cu;
    // 0x1d770c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1d770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1d7710u;
}
