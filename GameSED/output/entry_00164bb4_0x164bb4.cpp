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

// Function: entry_00164bb4
// Address: 0x164bb4 - 0x164bc4
void entry_00164bb4_0x164bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164bb4_0x164bb4");
#endif

    ctx->pc = 0x164bb4u;

    // 0x164bb4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x164BB4u;
    {
        const bool branch_taken_0x164bb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x164bb4) {
            ctx->pc = 0x164BC4u;
            return;
        }
    }
    ctx->pc = 0x164BBCu;
    // 0x164bbc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x164bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x164bc0: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x164bc0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    ctx->pc = 0x164bc4u;
}
