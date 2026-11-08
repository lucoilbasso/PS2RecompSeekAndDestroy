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

// Function: entry_00137608
// Address: 0x137608 - 0x137614
void entry_00137608_0x137608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137608_0x137608");
#endif

    ctx->pc = 0x137608u;

    // 0x137608: 0x1460008c  bnez        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x137608u;
    {
        const bool branch_taken_0x137608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137608) {
            ctx->pc = 0x13783Cu;
            return;
        }
    }
    ctx->pc = 0x137610u;
    // 0x137610: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x137610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    ctx->pc = 0x137614u;
}
