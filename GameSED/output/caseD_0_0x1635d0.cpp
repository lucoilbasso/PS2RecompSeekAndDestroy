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

// Function: caseD_0
// Address: 0x1635d0 - 0x163600
void caseD_0_0x1635d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1635d0");
#endif

    switch (ctx->pc) {
        case 0x1635d8u: goto label_1635d8;
        case 0x1635e4u: goto label_1635e4;
        default: break;
    }

    ctx->pc = 0x1635d0u;

    // 0x1635d0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1635D0u;
    SET_GPR_U32(ctx, 31, 0x1635D8u);
    ctx->pc = 0x1635D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1635D0u;
    // 0x1635d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1635D0u, 0x1635D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1635D8u;
label_1635d8:
    // 0x1635d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1635d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1635dc: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1635DCu;
    SET_GPR_U32(ctx, 31, 0x1635E4u);
    ctx->pc = 0x1635E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1635DCu;
    // 0x1635e0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1635DCu, 0x1635E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1635E4u;
label_1635e4:
    // 0x1635e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1635e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1635e8: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x1635e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1635ec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1635ECu;
    {
        const bool branch_taken_0x1635ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1635ec) {
            ctx->pc = 0x1635F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1635ECu;
            // 0x1635f0: 0xae23004c  sw          $v1, 0x4C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163600u;
            return;
        }
    }
    ctx->pc = 0x1635F4u;
    // 0x1635f4: 0xae32004c  sw          $s2, 0x4C($s1)
    ctx->pc = 0x1635f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 18));
    // 0x1635f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1635F8u;
    {
        const bool branch_taken_0x1635f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1635FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635F8u;
        // 0x1635fc: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635f8) {
            ctx->pc = 0x163604u;
            return;
        }
    }
    ctx->pc = 0x163600u;
}
