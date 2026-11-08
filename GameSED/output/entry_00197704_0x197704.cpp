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

// Function: entry_00197704
// Address: 0x197704 - 0x197718
void entry_00197704_0x197704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197704_0x197704");
#endif

    ctx->pc = 0x197704u;

    // 0x197704: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x197704u;
    {
        const bool branch_taken_0x197704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x197704) {
            ctx->pc = 0x197708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197704u;
            // 0x197708: 0xad28002c  sw          $t0, 0x2C($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19771Cu;
            return;
        }
    }
    ctx->pc = 0x19770Cu;
    // 0x19770c: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x19770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x197710: 0x10480005  beq         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197710u;
    {
        const bool branch_taken_0x197710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x197710) {
            ctx->pc = 0x197728u;
            return;
        }
    }
    ctx->pc = 0x197718u;
}
