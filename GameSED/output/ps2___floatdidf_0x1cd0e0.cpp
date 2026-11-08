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

// Function: __floatdidf
// Address: 0x1cd0e0 - 0x1cd188
void ps2___floatdidf_0x1cd0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___floatdidf_0x1cd0e0");
#endif

    switch (ctx->pc) {
        case 0x1cd108u: goto label_1cd108;
        case 0x1cd118u: goto label_1cd118;
        case 0x1cd128u: goto label_1cd128;
        case 0x1cd148u: goto label_1cd148;
        case 0x1cd164u: goto label_1cd164;
        case 0x1cd174u: goto label_1cd174;
        default: break;
    }

    ctx->pc = 0x1cd0e0u;

    // 0x1cd0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd0e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd0e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cd0f0: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x1cd0f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1cd0f4: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x1cd0f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x1cd0f8: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x1cd0f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x1cd0fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cd0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cd100: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1CD100u;
    SET_GPR_U32(ctx, 31, 0x1CD108u);
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1CD100u, 0x1CD108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD108u;
label_1cd108:
    // 0x1cd108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd10c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cd10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd110: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1CD110u;
    SET_GPR_U32(ctx, 31, 0x1CD118u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1CD110u, 0x1CD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD118u;
label_1cd118:
    // 0x1cd118: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cd118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd11c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd120: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1CD120u;
    SET_GPR_U32(ctx, 31, 0x1CD128u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1CD120u, 0x1CD128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD128u;
label_1cd128:
    // 0x1cd128: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cd128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd12c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1cd130: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1cd130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1cd134: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1cd134u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1cd138: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1cd138u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1cd13c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1cd13cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1cd140: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1CD140u;
    SET_GPR_U32(ctx, 31, 0x1CD148u);
    ctx->pc = 0x1CD144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD140u;
    // 0x1cd144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1CD140u, 0x1CD148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD148u;
label_1cd148:
    // 0x1cd148: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1cd148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1cd14c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1cd14cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1cd150: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD150u;
    {
        const bool branch_taken_0x1cd150 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1cd150) {
            ctx->pc = 0x1CD164u;
            goto label_1cd164;
        }
    }
    ctx->pc = 0x1CD158u;
    // 0x1cd158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd15c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1CD15Cu;
    SET_GPR_U32(ctx, 31, 0x1CD164u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1CD15Cu, 0x1CD164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD164u;
label_1cd164:
    // 0x1cd164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd168: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd16c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1CD16Cu;
    SET_GPR_U32(ctx, 31, 0x1CD174u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1CD16Cu, 0x1CD174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD174u;
label_1cd174:
    // 0x1cd174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd17c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cd17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd180: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD180u;
        // 0x1cd184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD188u;
}
