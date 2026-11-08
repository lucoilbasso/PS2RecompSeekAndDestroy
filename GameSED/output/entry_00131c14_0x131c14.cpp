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

// Function: entry_00131c14
// Address: 0x131c14 - 0x131c20
void entry_00131c14_0x131c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131c14_0x131c14");
#endif

    ctx->pc = 0x131c14u;

    // 0x131c14: 0x8e310054  lw          $s1, 0x54($s1)
    ctx->pc = 0x131c14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x131c18: 0x1620ffcd  bnez        $s1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x131C18u;
    {
        const bool branch_taken_0x131c18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x131c18) {
            ctx->pc = 0x131B50u;
            return;
        }
    }
    ctx->pc = 0x131C20u;
}
