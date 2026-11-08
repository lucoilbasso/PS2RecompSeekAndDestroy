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

// Function: entry_00148990
// Address: 0x148990 - 0x1489b0
void entry_00148990_0x148990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148990_0x148990");
#endif

    ctx->pc = 0x148990u;

label_148990:
    // 0x148990: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148994: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148998: 0x0  nop
    ctx->pc = 0x148998u;
    // NOP
    // 0x14899c: 0x0  nop
    ctx->pc = 0x14899cu;
    // NOP
    // 0x1489a0: 0x0  nop
    ctx->pc = 0x1489a0u;
    // NOP
    // 0x1489a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1489A4u;
    {
        const bool branch_taken_0x1489a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1489a4) {
            ctx->pc = 0x148990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148990;
        }
    }
    ctx->pc = 0x1489ACu;
    // 0x1489ac: 0x0  nop
    ctx->pc = 0x1489acu;
    // NOP
    ctx->pc = 0x1489b0u;
}
