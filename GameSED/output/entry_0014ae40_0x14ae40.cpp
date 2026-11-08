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

// Function: entry_0014ae40
// Address: 0x14ae40 - 0x14ae60
void entry_0014ae40_0x14ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ae40_0x14ae40");
#endif

    switch (ctx->pc) {
        case 0x14ae50u: goto label_14ae50;
        default: break;
    }

    ctx->pc = 0x14ae40u;

    // 0x14ae40: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14AE40u;
    {
        const bool branch_taken_0x14ae40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ae40) {
            ctx->pc = 0x14AE60u;
            return;
        }
    }
    ctx->pc = 0x14AE48u;
    // 0x14ae48: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x14AE48u;
    SET_GPR_U32(ctx, 31, 0x14AE50u);
    ctx->pc = 0x14AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE48u;
    // 0x14ae4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x14AE48u, 0x14AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE50u;
label_14ae50:
    // 0x14ae50: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x14ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x14ae54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14AE54u;
    {
        const bool branch_taken_0x14ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE54u;
        // 0x14ae58: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae54) {
            ctx->pc = 0x14AE88u;
            return;
        }
    }
    ctx->pc = 0x14AE5Cu;
    // 0x14ae5c: 0x0  nop
    ctx->pc = 0x14ae5cu;
    // NOP
    ctx->pc = 0x14ae60u;
}
