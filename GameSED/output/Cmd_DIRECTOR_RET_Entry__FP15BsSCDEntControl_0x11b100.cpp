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

// Function: Cmd_DIRECTOR_RET_Entry__FP15BsSCDEntControl
// Address: 0x11b100 - 0x11b1a4
void Cmd_DIRECTOR_RET_Entry__FP15BsSCDEntControl_0x11b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIRECTOR_RET_Entry__FP15BsSCDEntControl_0x11b100");
#endif

    switch (ctx->pc) {
        case 0x11b144u: goto label_11b144;
        case 0x11b168u: goto label_11b168;
        case 0x11b18cu: goto label_11b18c;
        default: break;
    }

    ctx->pc = 0x11b100u;

    // 0x11b100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b104: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11b104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11b108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b10c: 0x8f908d10  lw          $s0, -0x72F0($gp)
    ctx->pc = 0x11b10cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11b110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b114: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11b118: 0x261233f0  addiu       $s2, $s0, 0x33F0
    ctx->pc = 0x11b118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 13296));
    // 0x11b11c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11b11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11b120: 0x26113410  addiu       $s1, $s0, 0x3410
    ctx->pc = 0x11b120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 13328));
    // 0x11b124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11b124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b128: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11b12c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11b130: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x11b130u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x11b134: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11b134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11b138: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x11b138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x11b13c: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x11B13Cu;
    SET_GPR_U32(ctx, 31, 0x11B144u);
    ctx->pc = 0x11B140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B13Cu;
    // 0x11b140: 0x24a50108  addiu       $a1, $a1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x11B13Cu, 0x11B144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B144u;
label_11b144:
    // 0x11b144: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11b144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11b148: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11b148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b150: 0x24a54780  addiu       $a1, $a1, 0x4780
    ctx->pc = 0x11b150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18304));
    // 0x11b154: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x11b154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11b158: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B158u;
    {
        const bool branch_taken_0x11b158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B158u;
        // 0x11b15c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b158) {
            ctx->pc = 0x11B168u;
            goto label_11b168;
        }
    }
    ctx->pc = 0x11B160u;
    // 0x11b160: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11B160u;
    SET_GPR_U32(ctx, 31, 0x11B168u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11B160u, 0x11B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B168u;
label_11b168:
    // 0x11b168: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b16c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11b16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b170: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11b170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11b174: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x11b174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x11b178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b17c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x11b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x11b180: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11b180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11b184: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x11B184u;
    SET_GPR_U32(ctx, 31, 0x11B18Cu);
    ctx->pc = 0x11B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B184u;
    // 0x11b188: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x11B184u, 0x11B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B18Cu;
label_11b18c:
    // 0x11b18c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b194: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b198: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11b198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b19c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B19Cu;
        // 0x11b1a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B1A4u;
}
