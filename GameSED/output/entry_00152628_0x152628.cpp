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

// Function: entry_00152628
// Address: 0x152628 - 0x15269c
void entry_00152628_0x152628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152628_0x152628");
#endif

    switch (ctx->pc) {
        case 0x152644u: goto label_152644;
        case 0x152658u: goto label_152658;
        case 0x15266cu: goto label_15266c;
        case 0x152680u: goto label_152680;
        default: break;
    }

    ctx->pc = 0x152628u;

    // 0x152628: 0x8e7106a4  lw          $s1, 0x6A4($s3)
    ctx->pc = 0x152628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1700)));
    // 0x15262c: 0x26a501e0  addiu       $a1, $s5, 0x1E0
    ctx->pc = 0x15262cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 480));
    // 0x152630: 0xc79482b8  lwc1        $f20, -0x7D48($gp)
    ctx->pc = 0x152630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152634: 0x262401e0  addiu       $a0, $s1, 0x1E0
    ctx->pc = 0x152634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x152638: 0x26320150  addiu       $s2, $s1, 0x150
    ctx->pc = 0x152638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x15263c: 0xc0676da  jal         func_19DB68
    ctx->pc = 0x15263Cu;
    SET_GPR_U32(ctx, 31, 0x152644u);
    ctx->pc = 0x152640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15263Cu;
    // 0x152640: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB68u, 0x15263Cu, 0x152644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152644u;
label_152644:
    // 0x152644: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x152644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x152648: 0x26a50220  addiu       $a1, $s5, 0x220
    ctx->pc = 0x152648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 544));
    // 0x15264c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15264cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x152650: 0xc0676da  jal         func_19DB68
    ctx->pc = 0x152650u;
    SET_GPR_U32(ctx, 31, 0x152658u);
    ctx->pc = 0x152654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152650u;
    // 0x152654: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB68u, 0x152650u, 0x152658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152658u;
label_152658:
    // 0x152658: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x152658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x15265c: 0x26a50230  addiu       $a1, $s5, 0x230
    ctx->pc = 0x15265cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 560));
    // 0x152660: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x152660u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x152664: 0xc0676da  jal         func_19DB68
    ctx->pc = 0x152664u;
    SET_GPR_U32(ctx, 31, 0x15266Cu);
    ctx->pc = 0x152668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152664u;
    // 0x152668: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB68u, 0x152664u, 0x15266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15266Cu;
label_15266c:
    // 0x15266c: 0x26240240  addiu       $a0, $s1, 0x240
    ctx->pc = 0x15266cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x152670: 0x26a50240  addiu       $a1, $s5, 0x240
    ctx->pc = 0x152670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 576));
    // 0x152674: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x152674u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x152678: 0xc0676da  jal         func_19DB68
    ctx->pc = 0x152678u;
    SET_GPR_U32(ctx, 31, 0x152680u);
    ctx->pc = 0x15267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152678u;
    // 0x15267c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB68u, 0x152678u, 0x152680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152680u;
label_152680:
    // 0x152680: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x152680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x152684: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x152684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x152688: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x152688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15268c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15268cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x152690: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x152690u;
    {
        const bool branch_taken_0x152690 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x152694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152690u;
        // 0x152694: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152690) {
            ctx->pc = 0x15269Cu;
            return;
        }
    }
    ctx->pc = 0x152698u;
    // 0x152698: 0xae74069c  sw          $s4, 0x69C($s3)
    ctx->pc = 0x152698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1692), GPR_U32(ctx, 20));
    ctx->pc = 0x15269cu;
}
