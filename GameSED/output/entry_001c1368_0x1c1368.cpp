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

// Function: entry_001c1368
// Address: 0x1c1368 - 0x1c1394
void entry_001c1368_0x1c1368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1368_0x1c1368");
#endif

    ctx->pc = 0x1c1368u;

    // 0x1c1368: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x1c1368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1c136c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C136Cu;
    {
        const bool branch_taken_0x1c136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C136Cu;
        // 0x1c1370: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c136c) {
            ctx->pc = 0x1C13A4u;
            return;
        }
    }
    ctx->pc = 0x1C1374u;
    // 0x1c1374: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c1374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c1378: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1378u;
    {
        const bool branch_taken_0x1c1378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1378u;
        // 0x1c137c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1378) {
            ctx->pc = 0x1C1394u;
            return;
        }
    }
    ctx->pc = 0x1C1380u;
    // 0x1c1380: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x1c1380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x1c1384: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1384u;
    {
        const bool branch_taken_0x1c1384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1384u;
        // 0x1c1388: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1384) {
            ctx->pc = 0x1C1394u;
            return;
        }
    }
    ctx->pc = 0x1C138Cu;
    // 0x1c138c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C138Cu;
    {
        const bool branch_taken_0x1c138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C138Cu;
        // 0x1c1390: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c138c) {
            ctx->pc = 0x1C13D0u;
            return;
        }
    }
    ctx->pc = 0x1C1394u;
}
