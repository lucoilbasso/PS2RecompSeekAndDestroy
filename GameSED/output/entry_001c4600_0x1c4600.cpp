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

// Function: entry_001c4600
// Address: 0x1c4600 - 0x1c4630
void entry_001c4600_0x1c4600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4600_0x1c4600");
#endif

    ctx->pc = 0x1c4600u;

label_1c4600:
    // 0x1c4600: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c4600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4604: 0x0  nop
    ctx->pc = 0x1c4604u;
    // NOP
    // 0x1c4608: 0x0  nop
    ctx->pc = 0x1c4608u;
    // NOP
    // 0x1c460c: 0x0  nop
    ctx->pc = 0x1c460cu;
    // NOP
    // 0x1c4610: 0x0  nop
    ctx->pc = 0x1c4610u;
    // NOP
    // 0x1c4614: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C4614u;
    {
        const bool branch_taken_0x1c4614 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c4614) {
            ctx->pc = 0x1C4600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4600;
        }
    }
    ctx->pc = 0x1C461Cu;
    // 0x1c461c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c461cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4620: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c4620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c4624: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c4624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c4628: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c4628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c462c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c462cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0));
    ctx->pc = 0x1c4630u;
}
