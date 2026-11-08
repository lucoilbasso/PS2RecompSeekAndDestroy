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

// Function: entry_001099ac
// Address: 0x1099ac - 0x1099b8
void entry_001099ac_0x1099ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001099ac_0x1099ac");
#endif

    ctx->pc = 0x1099acu;

    // 0x1099ac: 0x1473ffee  bne         $v1, $s3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1099ACu;
    {
        const bool branch_taken_0x1099ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x1099ac) {
            ctx->pc = 0x109968u;
            return;
        }
    }
    ctx->pc = 0x1099B4u;
    // 0x1099b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1099b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1099b8u;
}
