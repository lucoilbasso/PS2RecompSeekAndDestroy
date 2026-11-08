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

// Function: __fixunsdfdi
// Address: 0x1c9a40 - 0x1c9b58
void ps2___fixunsdfdi_0x1c9a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fixunsdfdi_0x1c9a40");
#endif

    switch (ctx->pc) {
        case 0x1c9a64u: goto label_1c9a64;
        case 0x1c9a80u: goto label_1c9a80;
        case 0x1c9a8cu: goto label_1c9a8c;
        case 0x1c9aa8u: goto label_1c9aa8;
        case 0x1c9ab8u: goto label_1c9ab8;
        case 0x1c9ac8u: goto label_1c9ac8;
        case 0x1c9ad8u: goto label_1c9ad8;
        case 0x1c9af0u: goto label_1c9af0;
        case 0x1c9b0cu: goto label_1c9b0c;
        case 0x1c9b18u: goto label_1c9b18;
        case 0x1c9b30u: goto label_1c9b30;
        default: break;
    }

    ctx->pc = 0x1c9a40u;

    // 0x1c9a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9a4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9a54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c9a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c9a58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c9a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c9a5c: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C9A5Cu;
    SET_GPR_U32(ctx, 31, 0x1C9A64u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C9A5Cu, 0x1C9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A64u;
label_1c9a64:
    // 0x1c9a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a68: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x1c9a68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x1c9a6c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c9a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c9a70: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1C9A70u;
    {
        const bool branch_taken_0x1c9a70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A70u;
        // 0x1c9a74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a70) {
            ctx->pc = 0x1C9B40u;
            goto label_1c9b40;
        }
    }
    ctx->pc = 0x1C9A78u;
    // 0x1c9a78: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C9A78u;
    SET_GPR_U32(ctx, 31, 0x1C9A80u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C9A78u, 0x1C9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A80u;
label_1c9a80:
    // 0x1c9a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a84: 0xc07298e  jal         func_1CA638
    ctx->pc = 0x1C9A84u;
    SET_GPR_U32(ctx, 31, 0x1C9A8Cu);
    ctx->pc = 0x1CA638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA638u, 0x1C9A84u, 0x1C9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A8Cu;
label_1c9a8c:
    // 0x1c9a8c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1c9a8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c9a90: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1c9a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1c9a94: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x1c9a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x1c9a98: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9A98u;
    {
        const bool branch_taken_0x1c9a98 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1C9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A98u;
        // 0x1c9a9c: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a98) {
            ctx->pc = 0x1C9AB0u;
            goto label_1c9ab0;
        }
    }
    ctx->pc = 0x1C9AA0u;
    // 0x1c9aa0: 0xc073438  jal         func_1CD0E0
    ctx->pc = 0x1C9AA0u;
    SET_GPR_U32(ctx, 31, 0x1C9AA8u);
    ctx->pc = 0x1C9AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AA0u;
    // 0x1c9aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD0E0u, 0x1C9AA0u, 0x1C9AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AA8u;
label_1c9aa8:
    // 0x1c9aa8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9AA8u;
    {
        const bool branch_taken_0x1c9aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9aa8) {
            ctx->pc = 0x1C9AC8u;
            goto label_1c9ac8;
        }
    }
    ctx->pc = 0x1C9AB0u;
label_1c9ab0:
    // 0x1c9ab0: 0xc073438  jal         func_1CD0E0
    ctx->pc = 0x1C9AB0u;
    SET_GPR_U32(ctx, 31, 0x1C9AB8u);
    ctx->pc = 0x1CD0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD0E0u, 0x1C9AB0u, 0x1C9AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AB8u;
label_1c9ab8:
    // 0x1c9ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9abc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c9abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ac0: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C9AC0u;
    SET_GPR_U32(ctx, 31, 0x1C9AC8u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C9AC0u, 0x1C9AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AC8u;
label_1c9ac8:
    // 0x1c9ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9acc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c9accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ad0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C9AD0u;
    SET_GPR_U32(ctx, 31, 0x1C9AD8u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C9AD0u, 0x1C9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AD8u;
label_1c9ad8:
    // 0x1c9ad8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c9ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ae0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c9ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ae8: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C9AE8u;
    SET_GPR_U32(ctx, 31, 0x1C9AF0u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C9AE8u, 0x1C9AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AF0u;
label_1c9af0:
    // 0x1c9af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c9af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af8: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9AF8u;
    {
        const bool branch_taken_0x1c9af8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c9af8) {
            ctx->pc = 0x1C9B28u;
            goto label_1c9b28;
        }
    }
    ctx->pc = 0x1C9B00u;
    // 0x1c9b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c9b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b04: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C9B04u;
    SET_GPR_U32(ctx, 31, 0x1C9B0Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C9B04u, 0x1C9B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B0Cu;
label_1c9b0c:
    // 0x1c9b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b10: 0xc07298e  jal         func_1CA638
    ctx->pc = 0x1C9B10u;
    SET_GPR_U32(ctx, 31, 0x1C9B18u);
    ctx->pc = 0x1CA638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA638u, 0x1C9B10u, 0x1C9B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B18u;
label_1c9b18:
    // 0x1c9b18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c9b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c9b1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c9b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c9b20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9B20u;
    {
        const bool branch_taken_0x1c9b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B20u;
        // 0x1c9b24: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b20) {
            ctx->pc = 0x1C9B3Cu;
            goto label_1c9b3c;
        }
    }
    ctx->pc = 0x1C9B28u;
label_1c9b28:
    // 0x1c9b28: 0xc07298e  jal         func_1CA638
    ctx->pc = 0x1C9B28u;
    SET_GPR_U32(ctx, 31, 0x1C9B30u);
    ctx->pc = 0x1CA638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA638u, 0x1C9B28u, 0x1C9B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B30u;
label_1c9b30:
    // 0x1c9b30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c9b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c9b34: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c9b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c9b38: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1c9b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1c9b3c:
    // 0x1c9b3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c9b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b40:
    // 0x1c9b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c9b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9b4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c9b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c9b50: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B50u;
        // 0x1c9b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B58u;
}
