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

// Function: entry_0017b600
// Address: 0x17b600 - 0x17b628
void entry_0017b600_0x17b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b600_0x17b600");
#endif

    ctx->pc = 0x17b600u;

    // 0x17b600: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x17b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17b604: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x17B604u;
    {
        const bool branch_taken_0x17b604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b604) {
            ctx->pc = 0x17B608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B604u;
            // 0x17b608: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B69Cu;
            return;
        }
    }
    ctx->pc = 0x17B60Cu;
    // 0x17b60c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b610: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17B610u;
    {
        const bool branch_taken_0x17b610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B610u;
        // 0x17b614: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b610) {
            ctx->pc = 0x17B650u;
            return;
        }
    }
    ctx->pc = 0x17B618u;
    // 0x17b618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B618u;
    {
        const bool branch_taken_0x17b618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B618u;
        // 0x17b61c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b618) {
            ctx->pc = 0x17B628u;
            return;
        }
    }
    ctx->pc = 0x17B620u;
    // 0x17b620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B620u;
    {
        const bool branch_taken_0x17b620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B620u;
        // 0x17b624: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b620) {
            ctx->pc = 0x17B634u;
            return;
        }
    }
    ctx->pc = 0x17B628u;
}
