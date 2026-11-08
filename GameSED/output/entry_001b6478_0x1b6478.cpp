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

// Function: entry_001b6478
// Address: 0x1b6478 - 0x1b64ac
void entry_001b6478_0x1b6478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6478_0x1b6478");
#endif

    ctx->pc = 0x1b6478u;

label_1b6478:
    // 0x1b6478: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1b6478u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b647c: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1b647cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b6480: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1b6480u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b6484: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1b6484u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1b6488: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1b6488u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1b648c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1b648cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1b6490: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1b6490u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x1b6494: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1b6494u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1b6498: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1b6498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1b649c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1b649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1b64a0: 0x0  nop
    ctx->pc = 0x1b64a0u;
    // NOP
    // 0x1b64a4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B64A4u;
    {
        const bool branch_taken_0x1b64a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b64a4) {
            ctx->pc = 0x1B6478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6478;
        }
    }
    ctx->pc = 0x1B64ACu;
}
