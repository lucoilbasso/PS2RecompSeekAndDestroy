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

// Function: entry_0014ae60
// Address: 0x14ae60 - 0x14ae88
void entry_0014ae60_0x14ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ae60_0x14ae60");
#endif

    switch (ctx->pc) {
        case 0x14ae70u: goto label_14ae70;
        default: break;
    }

    ctx->pc = 0x14ae60u;

    // 0x14ae60: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x14AE60u;
    {
        const bool branch_taken_0x14ae60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x14AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE60u;
        // 0x14ae64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae60) {
            ctx->pc = 0x14AE8Cu;
            return;
        }
    }
    ctx->pc = 0x14AE68u;
    // 0x14ae68: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AE68u;
    SET_GPR_U32(ctx, 31, 0x14AE70u);
    ctx->pc = 0x14AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE68u;
    // 0x14ae6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AE68u, 0x14AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE70u;
label_14ae70:
    // 0x14ae70: 0x2403f0ff  addiu       $v1, $zero, -0xF01
    ctx->pc = 0x14ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963455));
    // 0x14ae74: 0x8e44017c  lw          $a0, 0x17C($s2)
    ctx->pc = 0x14ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x14ae78: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x14ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x14ae7c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x14ae7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14ae80: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x14ae80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x14ae84: 0xae44017c  sw          $a0, 0x17C($s2)
    ctx->pc = 0x14ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 4));
    ctx->pc = 0x14ae88u;
}
