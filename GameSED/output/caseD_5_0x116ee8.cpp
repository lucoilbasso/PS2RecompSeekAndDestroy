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

// Function: caseD_5
// Address: 0x116ee8 - 0x116ef0
void caseD_5_0x116ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x116ee8");
#endif

    ctx->pc = 0x116ee8u;

    // 0x116ee8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x116EE8u;
    {
        const bool branch_taken_0x116ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EE8u;
        // 0x116eec: 0x262400e8  addiu       $a0, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ee8) {
            ctx->pc = 0x116F1Cu;
            return;
        }
    }
    ctx->pc = 0x116EF0u;
}
