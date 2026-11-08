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

// Function: entry_001c3938
// Address: 0x1c3938 - 0x1c3960
void entry_001c3938_0x1c3938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3938_0x1c3938");
#endif

    ctx->pc = 0x1c3938u;

label_1c3938:
    // 0x1c3938: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c393c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1c393cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1c3940: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c3940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3944: 0x0  nop
    ctx->pc = 0x1c3944u;
    // NOP
    // 0x1c3948: 0x0  nop
    ctx->pc = 0x1c3948u;
    // NOP
    // 0x1c394c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C394Cu;
    {
        const bool branch_taken_0x1c394c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c394c) {
            ctx->pc = 0x1C3938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3938;
        }
    }
    ctx->pc = 0x1C3954u;
    // 0x1c3954: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3958: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c3958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c395c: 0x0  nop
    ctx->pc = 0x1c395cu;
    // NOP
    ctx->pc = 0x1c3960u;
}
