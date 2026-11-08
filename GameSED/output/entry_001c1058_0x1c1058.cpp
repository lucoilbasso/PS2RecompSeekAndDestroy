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

// Function: entry_001c1058
// Address: 0x1c1058 - 0x1c1070
void entry_001c1058_0x1c1058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1058_0x1c1058");
#endif

    ctx->pc = 0x1c1058u;

    // 0x1c1058: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c1058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c105c: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1c105cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1c1060: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1060u;
    {
        const bool branch_taken_0x1c1060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1060) {
            ctx->pc = 0x1C1064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1060u;
            // 0x1c1064: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1070u;
            return;
        }
    }
    ctx->pc = 0x1C1068u;
    // 0x1c1068: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1C1068u;
    {
        const bool branch_taken_0x1c1068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1068u;
        // 0x1c106c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1068) {
            ctx->pc = 0x1C11E4u;
            return;
        }
    }
    ctx->pc = 0x1C1070u;
}
