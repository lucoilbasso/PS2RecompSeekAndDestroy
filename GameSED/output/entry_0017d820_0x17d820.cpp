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

// Function: entry_0017d820
// Address: 0x17d820 - 0x17d844
void entry_0017d820_0x17d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d820_0x17d820");
#endif

    ctx->pc = 0x17d820u;

label_17d820:
    // 0x17d820: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17d820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17d824: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x17d824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x17d828: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D828u;
    {
        const bool branch_taken_0x17d828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D828u;
        // 0x17d82c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d828) {
            ctx->pc = 0x17D844u;
            return;
        }
    }
    ctx->pc = 0x17D830u;
    // 0x17d830: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x17d830u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d834: 0x0  nop
    ctx->pc = 0x17d834u;
    // NOP
    // 0x17d838: 0x0  nop
    ctx->pc = 0x17d838u;
    // NOP
    // 0x17d83c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17D83Cu;
    {
        const bool branch_taken_0x17d83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d83c) {
            ctx->pc = 0x17D840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D83Cu;
            // 0x17d840: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d820;
        }
    }
    ctx->pc = 0x17D844u;
}
