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

// Function: caseD_11
// Address: 0x10e488 - 0x10e498
void caseD_11_0x10e488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x10e488");
#endif

    ctx->pc = 0x10e488u;

    // 0x10e488: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E488u;
    {
        const bool branch_taken_0x10e488 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e488) {
            ctx->pc = 0x10E48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E488u;
            // 0x10e48c: 0x8e250194  lw          $a1, 0x194($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E498u;
            return;
        }
    }
    ctx->pc = 0x10E490u;
    // 0x10e490: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10E490u;
    {
        const bool branch_taken_0x10e490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E490u;
        // 0x10e494: 0xae200158  sw          $zero, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e490) {
            ctx->pc = 0x10E4E4u;
            return;
        }
    }
    ctx->pc = 0x10E498u;
}
