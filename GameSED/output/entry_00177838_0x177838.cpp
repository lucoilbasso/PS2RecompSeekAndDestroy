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

// Function: entry_00177838
// Address: 0x177838 - 0x177850
void entry_00177838_0x177838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177838_0x177838");
#endif

    ctx->pc = 0x177838u;

    // 0x177838: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x177838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x17783c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17783Cu;
    {
        const bool branch_taken_0x17783c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17783Cu;
        // 0x177840: 0x12c1004  sllv        $v0, $t4, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17783c) {
            ctx->pc = 0x177850u;
            return;
        }
    }
    ctx->pc = 0x177844u;
    // 0x177844: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x177844u;
    {
        const bool branch_taken_0x177844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177844u;
        // 0x177848: 0xa0ad0000  sb          $t5, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177844) {
            ctx->pc = 0x17785Cu;
            return;
        }
    }
    ctx->pc = 0x17784Cu;
    // 0x17784c: 0x0  nop
    ctx->pc = 0x17784cu;
    // NOP
    ctx->pc = 0x177850u;
}
