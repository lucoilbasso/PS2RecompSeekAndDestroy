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

// Function: entry_00155c78
// Address: 0x155c78 - 0x155ca8
void entry_00155c78_0x155c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155c78_0x155c78");
#endif

    ctx->pc = 0x155c78u;

    // 0x155c78: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x155c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x155c7c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x155C7Cu;
    {
        const bool branch_taken_0x155c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155c7c) {
            ctx->pc = 0x155CE4u;
            return;
        }
    }
    ctx->pc = 0x155C84u;
    // 0x155c84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x155c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155c88: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x155C88u;
    {
        const bool branch_taken_0x155c88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x155c88) {
            ctx->pc = 0x155C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155C88u;
            // 0x155c8c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155CACu;
            return;
        }
    }
    ctx->pc = 0x155C90u;
    // 0x155c90: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x155C90u;
    {
        const bool branch_taken_0x155c90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x155C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C90u;
        // 0x155c94: 0x24030096  addiu       $v1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c90) {
            ctx->pc = 0x155CA8u;
            return;
        }
    }
    ctx->pc = 0x155C98u;
    // 0x155c98: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x155c98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x155c9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x155c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155ca0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x155ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x155ca4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x155ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x155ca8u;
}
