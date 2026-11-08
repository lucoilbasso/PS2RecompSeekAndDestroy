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

// Function: caseD_2
// Address: 0x112638 - 0x112648
void caseD_2_0x112638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x112638");
#endif

    ctx->pc = 0x112638u;

    // 0x112638: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11263c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x11263cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112640: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x112640u;
    {
        const bool branch_taken_0x112640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112640u;
        // 0x112644: 0x90710032  lbu         $s1, 0x32($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112640) {
            ctx->pc = 0x112694u;
            return;
        }
    }
    ctx->pc = 0x112648u;
}
