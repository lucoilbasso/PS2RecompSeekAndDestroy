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

// Function: entry_0014657c
// Address: 0x14657c - 0x146590
void entry_0014657c_0x14657c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014657c_0x14657c");
#endif

    ctx->pc = 0x14657cu;

    // 0x14657c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x14657cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x146580: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x146580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146584: 0x8c432910  lw          $v1, 0x2910($v0)
    ctx->pc = 0x146584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x262910u));
    // 0x146588: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x146588u;
    {
        const bool branch_taken_0x146588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x146588) {
            ctx->pc = 0x14658Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146588u;
            // 0x14658c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14659Cu;
            return;
        }
    }
    ctx->pc = 0x146590u;
}
