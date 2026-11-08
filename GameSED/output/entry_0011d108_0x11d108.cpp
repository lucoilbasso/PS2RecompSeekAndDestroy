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

// Function: entry_0011d108
// Address: 0x11d108 - 0x11d16c
void entry_0011d108_0x11d108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d108_0x11d108");
#endif

    switch (ctx->pc) {
        case 0x11d114u: goto label_11d114;
        case 0x11d128u: goto label_11d128;
        case 0x11d154u: goto label_11d154;
        default: break;
    }

    ctx->pc = 0x11d108u;

    // 0x11d108: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11d10c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D10Cu;
    SET_GPR_U32(ctx, 31, 0x11D114u);
    ctx->pc = 0x11D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D10Cu;
    // 0x11d110: 0x8f918d10  lw          $s1, -0x72F0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D10Cu, 0x11D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D114u;
label_11d114:
    // 0x11d114: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11d114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11d118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d11c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11d120: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D120u;
    SET_GPR_U32(ctx, 31, 0x11D128u);
    ctx->pc = 0x11D124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D120u;
    // 0x11d124: 0x8c530048  lw          $s3, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D120u, 0x11D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D128u;
label_11d128:
    // 0x11d128: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11d128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d12c: 0x240524d0  addiu       $a1, $zero, 0x24D0
    ctx->pc = 0x11d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x11d130: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x11d130u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x11d134: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x11d134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x11d138: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x11d138u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11d13c: 0x108300  sll         $s0, $s0, 12
    ctx->pc = 0x11d13cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
    // 0x11d140: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x11d140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x11d144: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x11d144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x11d148: 0x26104e00  addiu       $s0, $s0, 0x4E00
    ctx->pc = 0x11d148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19968));
    // 0x11d14c: 0xc045352  jal         func_114D48
    ctx->pc = 0x11D14Cu;
    SET_GPR_U32(ctx, 31, 0x11D154u);
    ctx->pc = 0x11D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D14Cu;
    // 0x11d150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D48u, 0x11D14Cu, 0x11D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D154u;
label_11d154:
    // 0x11d154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d158: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x11d158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11d15c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d160: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d164: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D164u;
    {
        const bool branch_taken_0x11d164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D164u;
        // 0x11d168: 0xae420400  sw          $v0, 0x400($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d164) {
            ctx->pc = 0x11D174u;
            return;
        }
    }
    ctx->pc = 0x11D16Cu;
}
