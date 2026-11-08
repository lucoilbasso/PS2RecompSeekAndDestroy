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

// Function: entry_00137ad4
// Address: 0x137ad4 - 0x137ae0
void entry_00137ad4_0x137ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137ad4_0x137ad4");
#endif

    ctx->pc = 0x137ad4u;

    // 0x137ad4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x137ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x137ad8: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137AD8u;
    {
        const bool branch_taken_0x137ad8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x137ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AD8u;
        // 0x137adc: 0x26450200  addiu       $a1, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ad8) {
            ctx->pc = 0x137B04u;
            return;
        }
    }
    ctx->pc = 0x137AE0u;
}
