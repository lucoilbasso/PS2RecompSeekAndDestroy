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

// Function: entry_0016348c
// Address: 0x16348c - 0x1634a0
void entry_0016348c_0x16348c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016348c_0x16348c");
#endif

    ctx->pc = 0x16348cu;

    // 0x16348c: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x16348cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x163490: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x163490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x163494: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x163494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163498: 0x145effe1  bne         $v0, $fp, . + 4 + (-0x1F << 2)
    ctx->pc = 0x163498u;
    {
        const bool branch_taken_0x163498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x163498) {
            ctx->pc = 0x163420u;
            return;
        }
    }
    ctx->pc = 0x1634A0u;
}
