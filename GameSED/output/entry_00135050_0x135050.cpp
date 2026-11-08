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

// Function: entry_00135050
// Address: 0x135050 - 0x135070
void entry_00135050_0x135050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135050_0x135050");
#endif

    ctx->pc = 0x135050u;

    // 0x135050: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x135050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x135054: 0x26030370  addiu       $v1, $s0, 0x370
    ctx->pc = 0x135054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x135058: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x135058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x13505c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13505cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135060: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x135060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x135064: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x135064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x135068: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x135068u;
    {
        const bool branch_taken_0x135068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135068u;
        // 0x13506c: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135068) {
            ctx->pc = 0x1351FCu;
            return;
        }
    }
    ctx->pc = 0x135070u;
}
