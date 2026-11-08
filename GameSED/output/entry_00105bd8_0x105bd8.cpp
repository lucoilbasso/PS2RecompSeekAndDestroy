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

// Function: entry_00105bd8
// Address: 0x105bd8 - 0x105be4
void entry_00105bd8_0x105bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105bd8_0x105bd8");
#endif

    ctx->pc = 0x105bd8u;

    // 0x105bd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x105bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x105bdc: 0x56020001  bnel        $s0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x105BDCu;
    {
        const bool branch_taken_0x105bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x105bdc) {
            ctx->pc = 0x105BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105BDCu;
            // 0x105be0: 0xa2300003  sb          $s0, 0x3($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105BE4u;
            return;
        }
    }
    ctx->pc = 0x105BE4u;
}
