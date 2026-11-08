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

// Function: Cmd_TURRET_PARAM_Entry__FP15BsSCDEntControl
// Address: 0x163568 - 0x1638e8
void Cmd_TURRET_PARAM_Entry__FP15BsSCDEntControl_0x163568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TURRET_PARAM_Entry__FP15BsSCDEntControl_0x163568");
#endif

    switch (ctx->pc) {
        case 0x163598u: goto label_163598;
        case 0x1635a4u: goto label_1635a4;
        case 0x1635d8u: goto label_1635d8;
        case 0x1635e4u: goto label_1635e4;
        case 0x163600u: goto label_163600;
        case 0x163604u: goto label_163604;
        case 0x163630u: goto label_163630;
        case 0x16363cu: goto label_16363c;
        case 0x163658u: goto label_163658;
        case 0x163668u: goto label_163668;
        case 0x163680u: goto label_163680;
        case 0x1636a0u: goto label_1636a0;
        case 0x1636a8u: goto label_1636a8;
        case 0x1636acu: goto label_1636ac;
        case 0x1636d4u: goto label_1636d4;
        case 0x1636dcu: goto label_1636dc;
        case 0x1636e4u: goto label_1636e4;
        case 0x163704u: goto label_163704;
        case 0x1637f4u: goto label_1637f4;
        case 0x163844u: goto label_163844;
        case 0x163850u: goto label_163850;
        case 0x16386cu: goto label_16386c;
        case 0x163890u: goto label_163890;
        case 0x163894u: goto label_163894;
        case 0x1638ccu: goto label_1638cc;
        default: break;
    }

    ctx->pc = 0x163568u;

    // 0x163568: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x163568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16356c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16356cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163570: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x163570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x163574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x163574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163578: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x163578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x16357c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16357cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163580: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x163580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x163584: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x163584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x163588: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x163588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16358c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x16358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x163590: 0xc04110c  jal         func_104430
    ctx->pc = 0x163590u;
    SET_GPR_U32(ctx, 31, 0x163598u);
    ctx->pc = 0x163594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163590u;
    // 0x163594: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x163590u, 0x163598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163598u;
label_163598:
    // 0x163598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16359c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16359Cu;
    SET_GPR_U32(ctx, 31, 0x1635A4u);
    ctx->pc = 0x1635A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16359Cu;
    // 0x1635a0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16359Cu, 0x1635A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1635A4u;
label_1635a4:
    // 0x1635a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1635a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1635a8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1635a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1635ac: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x1635ACu;
    {
        const bool branch_taken_0x1635ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1635B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635ACu;
        // 0x1635b0: 0x265101f0  addiu       $s1, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1635ac) {
            ctx->pc = 0x1638CCu;
            goto label_1638cc;
        }
    }
    ctx->pc = 0x1635B4u;
    // 0x1635b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1635b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1635b8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1635b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1635bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1635bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1635c0: 0x8c636f30  lw          $v1, 0x6F30($v1)
    ctx->pc = 0x1635c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28464)));
    // 0x1635c4: 0x600008  jr          $v1
    ctx->pc = 0x1635C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1635D0u: goto label_1635d0;
            case 0x163628u: goto label_163628;
            case 0x163660u: goto label_163660;
            case 0x163678u: goto label_163678;
            case 0x1636B8u: goto label_1636b8;
            case 0x163878u: goto label_163878;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1635C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1635CCu;
    // 0x1635cc: 0x0  nop
    ctx->pc = 0x1635ccu;
    // NOP
label_1635d0:
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
            goto label_163600;
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
            goto label_163604;
        }
    }
    ctx->pc = 0x163600u;
label_163600:
    // 0x163600: 0xae320048  sw          $s2, 0x48($s1)
    ctx->pc = 0x163600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 18));
label_163604:
    // 0x163604: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x163604u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x163608: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163608u;
    {
        const bool branch_taken_0x163608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163608u;
        // 0x16360c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163608) {
            ctx->pc = 0x163620u;
            goto label_163620;
        }
    }
    ctx->pc = 0x163610u;
    // 0x163610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163614: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x163614u;
    {
        const bool branch_taken_0x163614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163614u;
        // 0x163618: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163614) {
            ctx->pc = 0x1638CCu;
            goto label_1638cc;
        }
    }
    ctx->pc = 0x16361Cu;
    // 0x16361c: 0x0  nop
    ctx->pc = 0x16361cu;
    // NOP
label_163620:
    // 0x163620: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x163620u;
    {
        const bool branch_taken_0x163620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163620u;
        // 0x163624: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163620) {
            ctx->pc = 0x1638CCu;
            goto label_1638cc;
        }
    }
    ctx->pc = 0x163628u;
label_163628:
    // 0x163628: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x163628u;
    SET_GPR_U32(ctx, 31, 0x163630u);
    ctx->pc = 0x16362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163628u;
    // 0x16362c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x163628u, 0x163630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163630u;
label_163630:
    // 0x163630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163634: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x163634u;
    SET_GPR_U32(ctx, 31, 0x16363Cu);
    ctx->pc = 0x163638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163634u;
    // 0x163638: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x163634u, 0x16363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16363Cu;
label_16363c:
    // 0x16363c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16363cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163640: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x163640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x163644: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x163644u;
    {
        const bool branch_taken_0x163644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163644) {
            ctx->pc = 0x163648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163644u;
            // 0x163648: 0xae320044  sw          $s2, 0x44($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163658u;
            goto label_163658;
        }
    }
    ctx->pc = 0x16364Cu;
    // 0x16364c: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x16364cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x163650: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x163650u;
    {
        const bool branch_taken_0x163650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163650u;
        // 0x163654: 0xae320040  sw          $s2, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163650) {
            ctx->pc = 0x1638CCu;
            goto label_1638cc;
        }
    }
    ctx->pc = 0x163658u;
label_163658:
    // 0x163658: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x163658u;
    {
        const bool branch_taken_0x163658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163658u;
        // 0x16365c: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163658) {
            ctx->pc = 0x1638CCu;
            goto label_1638cc;
        }
    }
    ctx->pc = 0x163660u;
label_163660:
    // 0x163660: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x163660u;
    SET_GPR_U32(ctx, 31, 0x163668u);
    ctx->pc = 0x163664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163660u;
    // 0x163664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x163660u, 0x163668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163668u;
label_163668:
    // 0x163668: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x163668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16366c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x16366cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163670: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x163670u;
    {
        const bool branch_taken_0x163670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163670u;
        // 0x163674: 0xe6210038  swc1        $f1, 0x38($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163670) {
            ctx->pc = 0x1638CCu;
            goto label_1638cc;
        }
    }
    ctx->pc = 0x163678u;
label_163678:
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
            goto label_1636a8;
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
            goto label_1636ac;
        }
    }
    ctx->pc = 0x1636A8u;
label_1636a8:
    // 0x1636a8: 0xae420270  sw          $v0, 0x270($s2)
    ctx->pc = 0x1636a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 2));
label_1636ac:
    // 0x1636ac: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1636ACu;
    {
        const bool branch_taken_0x1636ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636ACu;
        // 0x1636b0: 0xae510274  sw          $s1, 0x274($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636ac) {
            ctx->pc = 0x1638CCu;
            goto label_1638cc;
        }
    }
    ctx->pc = 0x1636B4u;
    // 0x1636b4: 0x0  nop
    ctx->pc = 0x1636b4u;
    // NOP
label_1636b8:
    // 0x1636b8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1636b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1636bc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1636bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1636c0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1636C0u;
    {
        const bool branch_taken_0x1636c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1636C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636C0u;
        // 0x1636c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636c0) {
            ctx->pc = 0x1636D4u;
            goto label_1636d4;
        }
    }
    ctx->pc = 0x1636C8u;
    // 0x1636c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1636c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1636cc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1636CCu;
    {
        const bool branch_taken_0x1636cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1636cc) {
            ctx->pc = 0x1636D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1636CCu;
            // 0x1636d0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1636E4u;
            goto label_1636e4;
        }
    }
    ctx->pc = 0x1636D4u;
label_1636d4:
    // 0x1636d4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1636D4u;
    SET_GPR_U32(ctx, 31, 0x1636DCu);
    ctx->pc = 0x1636D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636D4u;
    // 0x1636d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1636D4u, 0x1636DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636DCu;
label_1636dc:
    // 0x1636dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1636dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1636e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1636e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1636e4:
    // 0x1636e4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1636e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1636e8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1636E8u;
    {
        const bool branch_taken_0x1636e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1636ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636E8u;
        // 0x1636ec: 0x133140  sll         $a2, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636e8) {
            ctx->pc = 0x163788u;
            goto label_163788;
        }
    }
    ctx->pc = 0x1636F0u;
    // 0x1636f0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1636f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1636f4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1636f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1636f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1636f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1636fc: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x1636FCu;
    SET_GPR_U32(ctx, 31, 0x163704u);
    ctx->pc = 0x163700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636FCu;
    // 0x163700: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x1636FCu, 0x163704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163704u;
label_163704:
    // 0x163704: 0x8e420204  lw          $v0, 0x204($s2)
    ctx->pc = 0x163704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
    // 0x163708: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x163708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16370c: 0x8e43016c  lw          $v1, 0x16C($s2)
    ctx->pc = 0x16370cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x163710: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x163710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x163714: 0x262200b  movn        $a0, $s3, $v0
    ctx->pc = 0x163714u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
    // 0x163718: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x163718u;
    {
        const bool branch_taken_0x163718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163718u;
        // 0x16371c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163718) {
            ctx->pc = 0x163758u;
            goto label_163758;
        }
    }
    ctx->pc = 0x163720u;
    // 0x163720: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x163720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163724: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x163724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x163728: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x163728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x16372c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x163730: 0x8c64015c  lw          $a0, 0x15C($v1)
    ctx->pc = 0x163730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
    // 0x163734: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x163734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x163738: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x163738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16373c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x16373cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163740: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x163740u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x163744: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x163744u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x163748: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x163748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x16374c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x16374Cu;
    {
        const bool branch_taken_0x16374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16374Cu;
        // 0x163750: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16374c) {
            ctx->pc = 0x1638CCu;
            goto label_1638cc;
        }
    }
    ctx->pc = 0x163754u;
    // 0x163754: 0x0  nop
    ctx->pc = 0x163754u;
    // NOP
label_163758:
    // 0x163758: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x163758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x16375c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16375cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163760: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x163760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x163764: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x163764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x163768: 0x8c4401f8  lw          $a0, 0x1F8($v0)
    ctx->pc = 0x163768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x16376c: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x16376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x163770: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x163770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163774: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x163774u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x163778: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x163778u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16377c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x16377cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x163780: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x163780u;
    {
        const bool branch_taken_0x163780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163780u;
        // 0x163784: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163780) {
            ctx->pc = 0x1638CCu;
            goto label_1638cc;
        }
    }
    ctx->pc = 0x163788u;
label_163788:
    // 0x163788: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x163788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x16378c: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x16378cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x163790: 0x2463a430  addiu       $v1, $v1, -0x5BD0
    ctx->pc = 0x163790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943792));
    // 0x163794: 0x24c60170  addiu       $a2, $a2, 0x170
    ctx->pc = 0x163794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 368));
    // 0x163798: 0x8c641400  lw          $a0, 0x1400($v1)
    ctx->pc = 0x163798u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x16379c: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x16379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1637a0: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x1637a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x1637a4: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x1637a4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1637a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1637a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1637ac: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1637acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1637b0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1637b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1637b4: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1637b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1637b8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1637b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1637bc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1637bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1637c0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1637c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1637c4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1637c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1637c8: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x1637c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1637cc: 0x8c641400  lw          $a0, 0x1400($v1)
    ctx->pc = 0x1637ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5120)));
    // 0x1637d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1637d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1637d4: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1637d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1637d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1637d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1637dc: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1637dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1637e0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1637e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1637e4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1637e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1637e8: 0x265101f0  addiu       $s1, $s2, 0x1F0
    ctx->pc = 0x1637e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    // 0x1637ec: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x1637ECu;
    SET_GPR_U32(ctx, 31, 0x1637F4u);
    ctx->pc = 0x1637F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1637ECu;
    // 0x1637f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1637ECu, 0x1637F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637F4u;
label_1637f4:
    // 0x1637f4: 0x8e430204  lw          $v1, 0x204($s2)
    ctx->pc = 0x1637f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 516)));
    // 0x1637f8: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x1637f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1637fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1637fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163800: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x163800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163804: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x163804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x163808: 0x3980a  movz        $s3, $zero, $v1
    ctx->pc = 0x163808u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x16380c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x16380cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163810: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x163810u;
    {
        const bool branch_taken_0x163810 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163810u;
        // 0x163814: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163810) {
            ctx->pc = 0x16381Cu;
            goto label_16381c;
        }
    }
    ctx->pc = 0x163818u;
    // 0x163818: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16381c:
    // 0x16381c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x16381Cu;
    {
        const bool branch_taken_0x16381c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16381Cu;
        // 0x163820: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16381c) {
            ctx->pc = 0x1638D0u;
            goto label_1638d0;
        }
    }
    ctx->pc = 0x163824u;
    // 0x163824: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x163824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x163828: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x163828u;
    {
        const bool branch_taken_0x163828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163828u;
        // 0x16382c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163828) {
            ctx->pc = 0x1638D0u;
            goto label_1638d0;
        }
    }
    ctx->pc = 0x163830u;
    // 0x163830: 0x265001f8  addiu       $s0, $s2, 0x1F8
    ctx->pc = 0x163830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x163834: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x163834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x163838: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16383c: 0xc0618bc  jal         func_1862F0
    ctx->pc = 0x16383Cu;
    SET_GPR_U32(ctx, 31, 0x163844u);
    ctx->pc = 0x163840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16383Cu;
    // 0x163840: 0xe48100d8  swc1        $f1, 0xD8($a0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1862F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1862F0u, 0x16383Cu, 0x163844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163844u;
label_163844:
    // 0x163844: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163848: 0xc06164c  jal         func_185930
    ctx->pc = 0x163848u;
    SET_GPR_U32(ctx, 31, 0x163850u);
    ctx->pc = 0x16384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163848u;
    // 0x16384c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x163848u, 0x163850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163850u;
label_163850:
    // 0x163850: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x163850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x163854: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x163854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163858: 0x3c013e40  lui         $at, 0x3E40
    ctx->pc = 0x163858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15936 << 16));
    // 0x16385c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x16385cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x163860: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x163860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x163864: 0xc06929c  jal         func_1A4A70
    ctx->pc = 0x163864u;
    SET_GPR_U32(ctx, 31, 0x16386Cu);
    ctx->pc = 0x163868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163864u;
    // 0x163868: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A70u, 0x163864u, 0x16386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16386Cu;
label_16386c:
    // 0x16386c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16386Cu;
    {
        const bool branch_taken_0x16386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16386Cu;
        // 0x163870: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16386c) {
            ctx->pc = 0x1638D0u;
            goto label_1638d0;
        }
    }
    ctx->pc = 0x163874u;
    // 0x163874: 0x0  nop
    ctx->pc = 0x163874u;
    // NOP
label_163878:
    // 0x163878: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x163878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16387c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x16387cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x163880: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163880u;
    {
        const bool branch_taken_0x163880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163880u;
        // 0x163884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163880) {
            ctx->pc = 0x163894u;
            goto label_163894;
        }
    }
    ctx->pc = 0x163888u;
    // 0x163888: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x163888u;
    SET_GPR_U32(ctx, 31, 0x163890u);
    ctx->pc = 0x16388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163888u;
    // 0x16388c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x163888u, 0x163890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163890u;
label_163890:
    // 0x163890: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x163890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163894:
    // 0x163894: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x163894u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x163898: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x163898u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x16389c: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x16389cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1638a0: 0x24c6a430  addiu       $a2, $a2, -0x5BD0
    ctx->pc = 0x1638a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943792));
    // 0x1638a4: 0x24a50170  addiu       $a1, $a1, 0x170
    ctx->pc = 0x1638a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
    // 0x1638a8: 0x8cc41400  lw          $a0, 0x1400($a2)
    ctx->pc = 0x1638a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1638ac: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1638acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1638b0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1638b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1638b4: 0x8cc31400  lw          $v1, 0x1400($a2)
    ctx->pc = 0x1638b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1638b8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1638b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1638bc: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1638bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1638c0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x1638c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1638c4: 0x8cc21400  lw          $v0, 0x1400($a2)
    ctx->pc = 0x1638c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1638c8: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x1638c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
label_1638cc:
    // 0x1638cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1638ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1638d0:
    // 0x1638d0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1638d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1638d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1638d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1638d8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1638d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1638dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1638dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1638e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1638E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1638E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638E0u;
        // 0x1638e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1638E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1638E8u;
}
