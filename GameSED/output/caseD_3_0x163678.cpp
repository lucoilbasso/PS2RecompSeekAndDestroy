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

// Function: caseD_3
// Address: 0x163678 - 0x1636a8
void caseD_3_0x163678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x163678");
#endif

    switch (ctx->pc) {
        case 0x163680u: goto label_163680;
        case 0x1636a0u: goto label_1636a0;
        default: break;
    }

    ctx->pc = 0x163678u;

    // 0x163678: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x163678u;
    SET_GPR_U32(ctx, 31, 0x163680u);
    ctx->pc = 0x16367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163678u;
    // 0x16367c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x163678u, 0x163680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163680u;
label_163680:
    // 0x163680: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x163680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x163684: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x163684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163688: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x163688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16368c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16368cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163690: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163690u;
    {
        const bool branch_taken_0x163690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x163690) {
            ctx->pc = 0x163694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163690u;
            // 0x163694: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1636A8u;
            return;
        }
    }
    ctx->pc = 0x163698u;
    // 0x163698: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x163698u;
    SET_GPR_U32(ctx, 31, 0x1636A0u);
    ctx->pc = 0x16369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163698u;
    // 0x16369c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x163698u, 0x1636A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636A0u;
label_1636a0:
    // 0x1636a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1636A0u;
    {
        const bool branch_taken_0x1636a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636A0u;
        // 0x1636a4: 0xae420270  sw          $v0, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636a0) {
            ctx->pc = 0x1636ACu;
            return;
        }
    }
    ctx->pc = 0x1636A8u;
}
