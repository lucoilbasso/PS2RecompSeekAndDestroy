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

// Function: entry_001330bc
// Address: 0x1330bc - 0x1330f0
void entry_001330bc_0x1330bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001330bc_0x1330bc");
#endif

    switch (ctx->pc) {
        case 0x1330c4u: goto label_1330c4;
        case 0x1330d0u: goto label_1330d0;
        default: break;
    }

    ctx->pc = 0x1330bcu;

    // 0x1330bc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1330BCu;
    SET_GPR_U32(ctx, 31, 0x1330C4u);
    ctx->pc = 0x1330C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1330BCu;
    // 0x1330c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1330BCu, 0x1330C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1330C4u;
label_1330c4:
    // 0x1330c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1330c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330c8: 0xc052abc  jal         func_14AAF0
    ctx->pc = 0x1330C8u;
    SET_GPR_U32(ctx, 31, 0x1330D0u);
    ctx->pc = 0x1330CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1330C8u;
    // 0x1330cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AAF0u, 0x1330C8u, 0x1330D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1330D0u;
label_1330d0:
    // 0x1330d0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1330d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1330d4: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x1330d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1330d8: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1330d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1330dc: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x1330dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x1330e0: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x1330e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1330e4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1330E4u;
    {
        const bool branch_taken_0x1330e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1330E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1330E4u;
        // 0x1330e8: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1330e4) {
            ctx->pc = 0x1331B4u;
            return;
        }
    }
    ctx->pc = 0x1330ECu;
    // 0x1330ec: 0x0  nop
    ctx->pc = 0x1330ecu;
    // NOP
    ctx->pc = 0x1330f0u;
}
