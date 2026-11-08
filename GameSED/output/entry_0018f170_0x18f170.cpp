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

// Function: entry_0018f170
// Address: 0x18f170 - 0x18f188
void entry_0018f170_0x18f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f170_0x18f170");
#endif

    ctx->pc = 0x18f170u;

    // 0x18f170: 0x2463edd8  addiu       $v1, $v1, -0x1228
    ctx->pc = 0x18f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962648));
    // 0x18f174: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x18f174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f178: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18F178u;
    {
        const bool branch_taken_0x18f178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F178u;
        // 0x18f17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f178) {
            ctx->pc = 0x18F1ACu;
            return;
        }
    }
    ctx->pc = 0x18F180u;
    // 0x18f180: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x18f180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f184: 0x0  nop
    ctx->pc = 0x18f184u;
    // NOP
    ctx->pc = 0x18f188u;
}
