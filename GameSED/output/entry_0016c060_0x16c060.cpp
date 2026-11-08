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

// Function: entry_0016c060
// Address: 0x16c060 - 0x16c0a0
void entry_0016c060_0x16c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c060_0x16c060");
#endif

    switch (ctx->pc) {
        case 0x16c070u: goto label_16c070;
        case 0x16c080u: goto label_16c080;
        default: break;
    }

    ctx->pc = 0x16c060u;

    // 0x16c060: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16C060u;
    {
        const bool branch_taken_0x16c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C060u;
        // 0x16c064: 0xae430204  sw          $v1, 0x204($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c060) {
            ctx->pc = 0x16C0E0u;
            return;
        }
    }
    ctx->pc = 0x16C068u;
    // 0x16c068: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C068u;
    SET_GPR_U32(ctx, 31, 0x16C070u);
    ctx->pc = 0x16C06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C068u;
    // 0x16c06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C068u, 0x16C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C070u;
label_16c070:
    // 0x16c070: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16C070u;
    {
        const bool branch_taken_0x16c070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C070u;
        // 0x16c074: 0xae420210  sw          $v0, 0x210($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c070) {
            ctx->pc = 0x16C0E0u;
            return;
        }
    }
    ctx->pc = 0x16C078u;
    // 0x16c078: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C078u;
    SET_GPR_U32(ctx, 31, 0x16C080u);
    ctx->pc = 0x16C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C078u;
    // 0x16c07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C078u, 0x16C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C080u;
label_16c080:
    // 0x16c080: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x16c080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x16c084: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16c084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c088: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16c088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16c08c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c090: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C090u;
    {
        const bool branch_taken_0x16c090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x16c090) {
            ctx->pc = 0x16C094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C090u;
            // 0x16c094: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C0A0u;
            return;
        }
    }
    ctx->pc = 0x16C098u;
    // 0x16c098: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x16C098u;
    SET_GPR_U32(ctx, 31, 0x16C0A0u);
    ctx->pc = 0x16C09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C098u;
    // 0x16c09c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x16C098u, 0x16C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0A0u;
}
