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

// Function: entry_001a4e70
// Address: 0x1a4e70 - 0x1a4e90
void entry_001a4e70_0x1a4e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4e70_0x1a4e70");
#endif

    ctx->pc = 0x1a4e70u;

    // 0x1a4e70: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a4e74: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a4e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a4e78: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a4e78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a4e7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4E7Cu;
    {
        const bool branch_taken_0x1a4e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e7c) {
            ctx->pc = 0x1A4E90u;
            return;
        }
    }
    ctx->pc = 0x1A4E84u;
    // 0x1a4e84: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x1a4e84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1a4e88: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a4e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a4e8c: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x1a4e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a4e90u;
}
