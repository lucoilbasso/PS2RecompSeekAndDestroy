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

// Function: entry_00143068
// Address: 0x143068 - 0x143088
void entry_00143068_0x143068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143068_0x143068");
#endif

    ctx->pc = 0x143068u;

    // 0x143068: 0x8d4247e0  lw          $v0, 0x47E0($t2)
    ctx->pc = 0x143068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 18400)));
    // 0x14306c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x14306cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x143070: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x143070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143074: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x143074u;
    {
        const bool branch_taken_0x143074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143074u;
        // 0x143078: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143074) {
            ctx->pc = 0x142FB8u;
            return;
        }
    }
    ctx->pc = 0x14307Cu;
    // 0x14307c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14307Cu;
    {
        const bool branch_taken_0x14307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14307Cu;
        // 0x143080: 0x8e22007c  lw          $v0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14307c) {
            ctx->pc = 0x1430A0u;
            return;
        }
    }
    ctx->pc = 0x143084u;
    // 0x143084: 0x0  nop
    ctx->pc = 0x143084u;
    // NOP
    ctx->pc = 0x143088u;
}
