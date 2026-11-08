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

// Function: entry_00122924
// Address: 0x122924 - 0x122930
void entry_00122924_0x122924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122924_0x122924");
#endif

    ctx->pc = 0x122924u;

    // 0x122924: 0x5640ffde  bnel        $s2, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x122924u;
    {
        const bool branch_taken_0x122924 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x122924) {
            ctx->pc = 0x122928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122924u;
            // 0x122928: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1228A0u;
            return;
        }
    }
    ctx->pc = 0x12292Cu;
    // 0x12292c: 0x8ca20164  lw          $v0, 0x164($a1)
    ctx->pc = 0x12292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 356)));
    ctx->pc = 0x122930u;
}
