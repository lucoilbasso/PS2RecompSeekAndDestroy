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

// Function: entry_00170500
// Address: 0x170500 - 0x1705d8
void entry_00170500_0x170500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170500_0x170500");
#endif

    switch (ctx->pc) {
        case 0x170510u: goto label_170510;
        case 0x170518u: goto label_170518;
        case 0x170564u: goto label_170564;
        case 0x170588u: goto label_170588;
        case 0x1705a8u: goto label_1705a8;
        default: break;
    }

    ctx->pc = 0x170500u;

    // 0x170500: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x170500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x170504: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x170504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x170508: 0xc05c324  jal         func_170C90
    ctx->pc = 0x170508u;
    SET_GPR_U32(ctx, 31, 0x170510u);
    ctx->pc = 0x17050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170508u;
    // 0x17050c: 0x26911368  addiu       $s1, $s4, 0x1368 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170C90u, 0x170508u, 0x170510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170510u;
label_170510:
    // 0x170510: 0xc06f54a  jal         func_1BD528
    ctx->pc = 0x170510u;
    SET_GPR_U32(ctx, 31, 0x170518u);
    ctx->pc = 0x1BD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD528u, 0x170510u, 0x170518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170518u;
label_170518:
    // 0x170518: 0x8f8791a4  lw          $a3, -0x6E5C($gp)
    ctx->pc = 0x170518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x17051c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x17051cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x170520: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x170520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x170524: 0x3c0a00b6  lui         $t2, 0xB6
    ctx->pc = 0x170524u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)182 << 16));
    // 0x170528: 0x354a9700  ori         $t2, $t2, 0x9700
    ctx->pc = 0x170528u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)38656);
    // 0x17052c: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x17052cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x170530: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x170530u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x170534: 0x35084f00  ori         $t0, $t0, 0x4F00
    ctx->pc = 0x170534u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20224);
    // 0x170538: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x170538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x17053c: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x17053cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x170540: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x170540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x170544: 0x34a55f40  ori         $a1, $a1, 0x5F40
    ctx->pc = 0x170544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24384);
    // 0x170548: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x170548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17054c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17054cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170550: 0x3c0100ae  lui         $at, 0xAE
    ctx->pc = 0x170550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)174 << 16));
    // 0x170554: 0x34215700  ori         $at, $at, 0x5700
    ctx->pc = 0x170554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22272);
    // 0x170558: 0x273821  addu        $a3, $at, $a3
    ctx->pc = 0x170558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 7)));
    // 0x17055c: 0xc05c590  jal         func_171640
    ctx->pc = 0x17055Cu;
    SET_GPR_U32(ctx, 31, 0x170564u);
    ctx->pc = 0x170560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17055Cu;
    // 0x170560: 0x34c62f68  ori         $a2, $a2, 0x2F68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12136);
    ctx->in_delay_slot = false;
    ctx->pc = 0x171640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171640u, 0x17055Cu, 0x170564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170564u;
label_170564:
    // 0x170564: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x170564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x170568: 0x8f8591a4  lw          $a1, -0x6E5C($gp)
    ctx->pc = 0x170568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x17056c: 0x24841308  addiu       $a0, $a0, 0x1308
    ctx->pc = 0x17056cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x170570: 0x3406c000  ori         $a2, $zero, 0xC000
    ctx->pc = 0x170570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x170574: 0x3c0100ad  lui         $at, 0xAD
    ctx->pc = 0x170574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)173 << 16));
    // 0x170578: 0x34219700  ori         $at, $at, 0x9700
    ctx->pc = 0x170578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38656);
    // 0x17057c: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x17057cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x170580: 0xc05c382  jal         func_170E08
    ctx->pc = 0x170580u;
    SET_GPR_U32(ctx, 31, 0x170588u);
    ctx->pc = 0x170584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170580u;
    // 0x170584: 0x24076000  addiu       $a3, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170E08u, 0x170580u, 0x170588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170588u;
label_170588:
    // 0x170588: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x170588u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x17058c: 0x8f8891a4  lw          $t0, -0x6E5C($gp)
    ctx->pc = 0x17058cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x170590: 0x24e70968  addiu       $a3, $a3, 0x968
    ctx->pc = 0x170590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2408));
    // 0x170594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17059c: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x17059cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1705a0: 0xc05c5d8  jal         func_171760
    ctx->pc = 0x1705A0u;
    SET_GPR_U32(ctx, 31, 0x1705A8u);
    ctx->pc = 0x1705A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1705A0u;
    // 0x1705a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171760u, 0x1705A0u, 0x1705A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1705A8u;
label_1705a8:
    // 0x1705a8: 0x8f838bd8  lw          $v1, -0x7428($gp)
    ctx->pc = 0x1705a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937560)));
    // 0x1705ac: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1705ACu;
    {
        const bool branch_taken_0x1705ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1705B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1705ACu;
        // 0x1705b0: 0x8f8891a4  lw          $t0, -0x6E5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1705ac) {
            ctx->pc = 0x1705D8u;
            return;
        }
    }
    ctx->pc = 0x1705B4u;
    // 0x1705b4: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x1705b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x1705b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1705b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1705bc: 0x24e70a88  addiu       $a3, $a3, 0xA88
    ctx->pc = 0x1705bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2696));
    // 0x1705c0: 0x3c0100a8  lui         $at, 0xA8
    ctx->pc = 0x1705c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)168 << 16));
    // 0x1705c4: 0x342196c0  ori         $at, $at, 0x96C0
    ctx->pc = 0x1705c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38592);
    // 0x1705c8: 0x284021  addu        $t0, $at, $t0
    ctx->pc = 0x1705c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 8)));
    // 0x1705cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1705ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1705d0: 0xc05c5d8  jal         func_171760
    ctx->pc = 0x1705D0u;
    SET_GPR_U32(ctx, 31, 0x1705D8u);
    ctx->pc = 0x1705D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1705D0u;
    // 0x1705d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171760u, 0x1705D0u, 0x1705D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1705D8u;
}
