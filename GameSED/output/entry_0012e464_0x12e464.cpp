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

// Function: entry_0012e464
// Address: 0x12e464 - 0x12e498
void entry_0012e464_0x12e464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e464_0x12e464");
#endif

    ctx->pc = 0x12e464u;

label_12e464:
    // 0x12e464: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x12e464u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e468: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x12e468u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12e46c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x12e46cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12e470: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x12e470u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x12e474: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x12e474u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x12e478: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x12e478u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x12e47c: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x12e47cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x12e480: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x12e480u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x12e484: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x12e484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x12e488: 0x0  nop
    ctx->pc = 0x12e488u;
    // NOP
    // 0x12e48c: 0x0  nop
    ctx->pc = 0x12e48cu;
    // NOP
    // 0x12e490: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x12E490u;
    {
        const bool branch_taken_0x12e490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E490u;
        // 0x12e494: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e490) {
            ctx->pc = 0x12E464u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e464;
        }
    }
    ctx->pc = 0x12E498u;
}
