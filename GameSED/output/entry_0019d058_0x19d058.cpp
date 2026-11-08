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

// Function: entry_0019d058
// Address: 0x19d058 - 0x19d08c
void entry_0019d058_0x19d058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d058_0x19d058");
#endif

    ctx->pc = 0x19d058u;

label_19d058:
    // 0x19d058: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x19d058u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d05c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x19d05cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19d060: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x19d060u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19d064: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x19d064u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19d068: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x19d068u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x19d06c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x19d06cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x19d070: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x19d070u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x19d074: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x19d074u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x19d078: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x19d078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x19d07c: 0x0  nop
    ctx->pc = 0x19d07cu;
    // NOP
    // 0x19d080: 0x0  nop
    ctx->pc = 0x19d080u;
    // NOP
    // 0x19d084: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x19D084u;
    {
        const bool branch_taken_0x19d084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D084u;
        // 0x19d088: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d084) {
            ctx->pc = 0x19D058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d058;
        }
    }
    ctx->pc = 0x19D08Cu;
}
