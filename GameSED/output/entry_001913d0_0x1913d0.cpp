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

// Function: entry_001913d0
// Address: 0x1913d0 - 0x191400
void entry_001913d0_0x1913d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001913d0_0x1913d0");
#endif

    ctx->pc = 0x1913d0u;

    // 0x1913d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1913d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1913d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1913d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1913d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1913d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1913dc: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1913DCu;
    {
        const bool branch_taken_0x1913dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1913E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913DCu;
        // 0x1913e0: 0xae050270  sw          $a1, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913dc) {
            ctx->pc = 0x191414u;
            return;
        }
    }
    ctx->pc = 0x1913E4u;
    // 0x1913e4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1913e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1913e8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1913E8u;
    {
        const bool branch_taken_0x1913e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1913e8) {
            ctx->pc = 0x1913ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1913E8u;
            // 0x1913ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191418u;
            return;
        }
    }
    ctx->pc = 0x1913F0u;
    // 0x1913f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1913f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1913f4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1913F4u;
    {
        const bool branch_taken_0x1913f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913F4u;
        // 0x1913f8: 0x240501e0  addiu       $a1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913f4) {
            ctx->pc = 0x191400u;
            return;
        }
    }
    ctx->pc = 0x1913FCu;
    // 0x1913fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1913fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x191400u;
}
