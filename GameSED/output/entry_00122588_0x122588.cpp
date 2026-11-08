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

// Function: entry_00122588
// Address: 0x122588 - 0x1225b0
void entry_00122588_0x122588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122588_0x122588");
#endif

    ctx->pc = 0x122588u;

    // 0x122588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12258c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12258cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x122590: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x122590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x122594: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x122594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x122598: 0x8e30015c  lw          $s0, 0x15C($s1)
    ctx->pc = 0x122598u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x12259c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x12259Cu;
    {
        const bool branch_taken_0x12259c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1225A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12259Cu;
        // 0x1225a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12259c) {
            ctx->pc = 0x1225DCu;
            return;
        }
    }
    ctx->pc = 0x1225A4u;
    // 0x1225a4: 0x3c160025  lui         $s6, 0x25
    ctx->pc = 0x1225a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)37 << 16));
    // 0x1225a8: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1225a8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x1225ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1225acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1225b0u;
}
