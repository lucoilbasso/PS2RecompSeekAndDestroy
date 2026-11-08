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

// Function: entry_0017db00
// Address: 0x17db00 - 0x17db0c
void entry_0017db00_0x17db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017db00_0x17db00");
#endif

    ctx->pc = 0x17db00u;

    // 0x17db00: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17db00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17db04: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17DB04u;
    {
        const bool branch_taken_0x17db04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB04u;
        // 0x17db08: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db04) {
            ctx->pc = 0x17DAE8u;
            return;
        }
    }
    ctx->pc = 0x17DB0Cu;
}
