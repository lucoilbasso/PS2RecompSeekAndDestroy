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

// Function: caseD_3
// Address: 0x161178 - 0x161188
void caseD_3_0x161178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x161178");
#endif

    ctx->pc = 0x161178u;

    // 0x161178: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x161178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16117c: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x16117Cu;
    {
        const bool branch_taken_0x16117c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16117Cu;
        // 0x161180: 0xae021a64  sw          $v0, 0x1A64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16117c) {
            ctx->pc = 0x161468u;
            return;
        }
    }
    ctx->pc = 0x161184u;
    // 0x161184: 0x0  nop
    ctx->pc = 0x161184u;
    // NOP
    ctx->pc = 0x161188u;
}
