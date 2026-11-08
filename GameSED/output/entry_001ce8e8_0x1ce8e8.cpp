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

// Function: entry_001ce8e8
// Address: 0x1ce8e8 - 0x1ce920
void entry_001ce8e8_0x1ce8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce8e8_0x1ce8e8");
#endif

    switch (ctx->pc) {
        case 0x1ce91cu: goto label_1ce91c;
        default: break;
    }

    ctx->pc = 0x1ce8e8u;

    // 0x1ce8e8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE8E8u;
    {
        const bool branch_taken_0x1ce8e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8E8u;
        // 0x1ce8ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8e8) {
            ctx->pc = 0x1CE920u;
            return;
        }
    }
    ctx->pc = 0x1CE8F0u;
    // 0x1ce8f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ce8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ce8f4: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ce8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ce8f8: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ce8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ce8fc: 0x24a51de8  addiu       $a1, $a1, 0x1DE8
    ctx->pc = 0x1ce8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7656));
    // 0x1ce900: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ce900u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce904: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ce904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ce908: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ce908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ce90c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ce90cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce910: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1ce910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1ce914: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CE914u;
    SET_GPR_U32(ctx, 31, 0x1CE91Cu);
    ctx->pc = 0x1CE918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE914u;
    // 0x1ce918: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CE914u, 0x1CE91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE91Cu;
label_1ce91c:
    // 0x1ce91c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ce91cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ce920u;
}
