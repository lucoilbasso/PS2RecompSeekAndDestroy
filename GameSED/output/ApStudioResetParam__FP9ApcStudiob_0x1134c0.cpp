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

// Function: ApStudioResetParam__FP9ApcStudiob
// Address: 0x1134c0 - 0x1135ac
void ApStudioResetParam__FP9ApcStudiob_0x1134c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApStudioResetParam__FP9ApcStudiob_0x1134c0");
#endif

    switch (ctx->pc) {
        case 0x1134f8u: goto label_1134f8;
        case 0x113500u: goto label_113500;
        case 0x113508u: goto label_113508;
        case 0x113510u: goto label_113510;
        case 0x113518u: goto label_113518;
        case 0x113520u: goto label_113520;
        case 0x11353cu: goto label_11353c;
        case 0x113548u: goto label_113548;
        case 0x113550u: goto label_113550;
        case 0x113574u: goto label_113574;
        case 0x113580u: goto label_113580;
        case 0x113588u: goto label_113588;
        case 0x113598u: goto label_113598;
        default: break;
    }

    ctx->pc = 0x1134c0u;

    // 0x1134c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1134c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1134c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1134c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1134c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1134c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134cc: 0x26223410  addiu       $v0, $s1, 0x3410
    ctx->pc = 0x1134ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 13328));
    // 0x1134d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1134d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1134d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1134d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1134d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1134d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1134dc: 0xae200168  sw          $zero, 0x168($s1)
    ctx->pc = 0x1134dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
    // 0x1134e0: 0xae20361c  sw          $zero, 0x361C($s1)
    ctx->pc = 0x1134e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13852), GPR_U32(ctx, 0));
    // 0x1134e4: 0xae203620  sw          $zero, 0x3620($s1)
    ctx->pc = 0x1134e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13856), GPR_U32(ctx, 0));
    // 0x1134e8: 0xae203624  sw          $zero, 0x3624($s1)
    ctx->pc = 0x1134e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13860), GPR_U32(ctx, 0));
    // 0x1134ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1134ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1134f0: 0xc06a150  jal         func_1A8540
    ctx->pc = 0x1134F0u;
    SET_GPR_U32(ctx, 31, 0x1134F8u);
    ctx->pc = 0x1134F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1134F0u;
    // 0x1134f4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8540u, 0x1134F0u, 0x1134F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1134F8u;
label_1134f8:
    // 0x1134f8: 0xc06a1d8  jal         func_1A8760
    ctx->pc = 0x1134F8u;
    SET_GPR_U32(ctx, 31, 0x113500u);
    ctx->pc = 0x1134FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1134F8u;
    // 0x1134fc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8760u, 0x1134F8u, 0x113500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113500u;
label_113500:
    // 0x113500: 0xc06a1b0  jal         func_1A86C0
    ctx->pc = 0x113500u;
    SET_GPR_U32(ctx, 31, 0x113508u);
    ctx->pc = 0x113504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113500u;
    // 0x113504: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A86C0u, 0x113500u, 0x113508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113508u;
label_113508:
    // 0x113508: 0xc045096  jal         func_114258
    ctx->pc = 0x113508u;
    SET_GPR_U32(ctx, 31, 0x113510u);
    ctx->pc = 0x114258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114258u, 0x113508u, 0x113510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113510u;
label_113510:
    // 0x113510: 0xc045138  jal         func_1144E0
    ctx->pc = 0x113510u;
    SET_GPR_U32(ctx, 31, 0x113518u);
    ctx->pc = 0x1144E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1144E0u, 0x113510u, 0x113518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113518u;
label_113518:
    // 0x113518: 0xc0411d6  jal         func_104758
    ctx->pc = 0x113518u;
    SET_GPR_U32(ctx, 31, 0x113520u);
    ctx->pc = 0x11351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113518u;
    // 0x11351c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104758u, 0x113518u, 0x113520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113520u;
label_113520:
    // 0x113520: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x113520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x113524: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x113524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x113528: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x113528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11352c: 0x24c6c540  addiu       $a2, $a2, -0x3AC0
    ctx->pc = 0x11352cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952256));
    // 0x113530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113534: 0xc0460e6  jal         func_118398
    ctx->pc = 0x113534u;
    SET_GPR_U32(ctx, 31, 0x11353Cu);
    ctx->pc = 0x113538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113534u;
    // 0x113538: 0x24a5c180  addiu       $a1, $a1, -0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118398u, 0x113534u, 0x11353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11353Cu;
label_11353c:
    // 0x11353c: 0x8e24038c  lw          $a0, 0x38C($s1)
    ctx->pc = 0x11353cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
    // 0x113540: 0xc060e88  jal         func_183A20
    ctx->pc = 0x113540u;
    SET_GPR_U32(ctx, 31, 0x113548u);
    ctx->pc = 0x113544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113540u;
    // 0x113544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x113540u, 0x113548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113548u;
label_113548:
    // 0x113548: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x113548u;
    SET_GPR_U32(ctx, 31, 0x113550u);
    ctx->pc = 0x11354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113548u;
    // 0x11354c: 0x24040051  addiu       $a0, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x113548u, 0x113550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113550u;
label_113550:
    // 0x113550: 0x3c05dfff  lui         $a1, 0xDFFF
    ctx->pc = 0x113550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57343 << 16));
    // 0x113554: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x113554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x113558: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x113558u;
    {
        const bool branch_taken_0x113558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113558u;
        // 0x11355c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113558) {
            ctx->pc = 0x113574u;
            goto label_113574;
        }
    }
    ctx->pc = 0x113560u;
    // 0x113560: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x113560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113564: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x113564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x113568: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x113568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x11356c: 0xc05bea8  jal         func_16FAA0
    ctx->pc = 0x11356Cu;
    SET_GPR_U32(ctx, 31, 0x113574u);
    ctx->pc = 0x113570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11356Cu;
    // 0x113570: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FAA0u, 0x11356Cu, 0x113574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113574u;
label_113574:
    // 0x113574: 0x8e240390  lw          $a0, 0x390($s1)
    ctx->pc = 0x113574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 912)));
    // 0x113578: 0xc060e88  jal         func_183A20
    ctx->pc = 0x113578u;
    SET_GPR_U32(ctx, 31, 0x113580u);
    ctx->pc = 0x11357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113578u;
    // 0x11357c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x113578u, 0x113580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113580u;
label_113580:
    // 0x113580: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x113580u;
    SET_GPR_U32(ctx, 31, 0x113588u);
    ctx->pc = 0x113584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113580u;
    // 0x113584: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x113580u, 0x113588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113588u;
label_113588:
    // 0x113588: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113588u;
    {
        const bool branch_taken_0x113588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113588u;
        // 0x11358c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113588) {
            ctx->pc = 0x11359Cu;
            goto label_11359c;
        }
    }
    ctx->pc = 0x113590u;
    // 0x113590: 0xc05beba  jal         func_16FAE8
    ctx->pc = 0x113590u;
    SET_GPR_U32(ctx, 31, 0x113598u);
    ctx->pc = 0x16FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FAE8u, 0x113590u, 0x113598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113598u;
label_113598:
    // 0x113598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11359c:
    // 0x11359c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11359cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1135a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1135a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1135a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1135A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1135A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135A4u;
        // 0x1135a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1135A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1135ACu;
}
