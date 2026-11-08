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

// Function: entry_001c5690
// Address: 0x1c5690 - 0x1c56b0
void entry_001c5690_0x1c5690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5690_0x1c5690");
#endif

    ctx->pc = 0x1c5690u;

    // 0x1c5690: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1c5690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c5694: 0x2666eec0  addiu       $a2, $s3, -0x1140
    ctx->pc = 0x1c5694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962880));
    // 0x1c5698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5698u;
    {
        const bool branch_taken_0x1c5698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5698u;
        // 0x1c569c: 0xae72eec0  sw          $s2, -0x1140($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294962880), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5698) {
            ctx->pc = 0x1C56B0u;
            return;
        }
    }
    ctx->pc = 0x1C56A0u;
    // 0x1c56a0: 0xacd00014  sw          $s0, 0x14($a2)
    ctx->pc = 0x1c56a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 16));
    // 0x1c56a4: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1c56a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1c56a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C56A8u;
    {
        const bool branch_taken_0x1c56a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56A8u;
        // 0x1c56ac: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56a8) {
            ctx->pc = 0x1C56DCu;
            return;
        }
    }
    ctx->pc = 0x1C56B0u;
}
