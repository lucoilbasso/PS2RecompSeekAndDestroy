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

// Function: Cmd_MODEL_UVROLL_Entry__FP15BsSCDEntControl
// Address: 0x10e518 - 0x10e644
void Cmd_MODEL_UVROLL_Entry__FP15BsSCDEntControl_0x10e518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_UVROLL_Entry__FP15BsSCDEntControl_0x10e518");
#endif

    switch (ctx->pc) {
        case 0x10e548u: goto label_10e548;
        case 0x10e564u: goto label_10e564;
        case 0x10e57cu: goto label_10e57c;
        case 0x10e584u: goto label_10e584;
        case 0x10e590u: goto label_10e590;
        case 0x10e5a0u: goto label_10e5a0;
        case 0x10e5bcu: goto label_10e5bc;
        default: break;
    }

    ctx->pc = 0x10e518u;

    // 0x10e518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e51c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10e51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10e520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10e524: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10e524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10e528: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10e528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e52c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e530: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10e530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e534: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10e538: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10e53c: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10e53cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10e540: 0xc04110c  jal         func_104430
    ctx->pc = 0x10E540u;
    SET_GPR_U32(ctx, 31, 0x10E548u);
    ctx->pc = 0x10E544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E540u;
    // 0x10e544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10E540u, 0x10E548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E548u;
label_10e548:
    // 0x10e548: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10e548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e54c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x10e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10e550: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x10e550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10e554: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E554u;
    {
        const bool branch_taken_0x10e554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E554u;
        // 0x10e558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e554) {
            ctx->pc = 0x10E57Cu;
            goto label_10e57c;
        }
    }
    ctx->pc = 0x10E55Cu;
    // 0x10e55c: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10E55Cu;
    SET_GPR_U32(ctx, 31, 0x10E564u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10E55Cu, 0x10E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E564u;
label_10e564:
    // 0x10e564: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10e564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10e568: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e56c: 0x24a53c98  addiu       $a1, $a1, 0x3C98
    ctx->pc = 0x10e56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15512));
    // 0x10e570: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10e570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10e574: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10E574u;
    SET_GPR_U32(ctx, 31, 0x10E57Cu);
    ctx->pc = 0x10E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E574u;
    // 0x10e578: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10E574u, 0x10E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E57Cu;
label_10e57c:
    // 0x10e57c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10E57Cu;
    SET_GPR_U32(ctx, 31, 0x10E584u);
    ctx->pc = 0x10E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E57Cu;
    // 0x10e580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10E57Cu, 0x10E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E584u;
label_10e584:
    // 0x10e584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e588: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10E588u;
    SET_GPR_U32(ctx, 31, 0x10E590u);
    ctx->pc = 0x10E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E588u;
    // 0x10e58c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10E588u, 0x10E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E590u;
label_10e590:
    // 0x10e590: 0xa622017a  sh          $v0, 0x17A($s1)
    ctx->pc = 0x10e590u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 378), (uint16_t)GPR_U32(ctx, 2));
    // 0x10e594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e598: 0xc0654b2  jal         func_1952C8
    ctx->pc = 0x10E598u;
    SET_GPR_U32(ctx, 31, 0x10E5A0u);
    ctx->pc = 0x10E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E598u;
    // 0x10e59c: 0xa6300178  sh          $s0, 0x178($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 376), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1952C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1952C8u, 0x10E598u, 0x10E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E5A0u;
label_10e5a0:
    // 0x10e5a0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x10e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x10e5a4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10e5a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10e5ac: 0x1045001f  beq         $v0, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x10E5ACu;
    {
        const bool branch_taken_0x10e5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5ACu;
        // 0x10e5b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5ac) {
            ctx->pc = 0x10E62Cu;
            goto label_10e62c;
        }
    }
    ctx->pc = 0x10E5B4u;
    // 0x10e5b4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10E5B4u;
    SET_GPR_U32(ctx, 31, 0x10E5BCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10E5B4u, 0x10E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E5BCu;
label_10e5bc:
    // 0x10e5bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e5c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10e5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e5c4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10E5C4u;
    {
        const bool branch_taken_0x10e5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5C4u;
        // 0x10e5c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5c4) {
            ctx->pc = 0x10E62Cu;
            goto label_10e62c;
        }
    }
    ctx->pc = 0x10E5CCu;
    // 0x10e5cc: 0x96220178  lhu         $v0, 0x178($s1)
    ctx->pc = 0x10e5ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x10e5d0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x10e5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10e5d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10e5d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E5D8u;
    {
        const bool branch_taken_0x10e5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5D8u;
        // 0x10e5dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5d8) {
            ctx->pc = 0x10E5FCu;
            goto label_10e5fc;
        }
    }
    ctx->pc = 0x10E5E0u;
    // 0x10e5e0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x10e5e0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x10e5e4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x10e5e4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10e5e8: 0xa623017c  sh          $v1, 0x17C($s1)
    ctx->pc = 0x10e5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 380), (uint16_t)GPR_U32(ctx, 3));
    // 0x10e5ec: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10E5ECu;
    {
        const bool branch_taken_0x10e5ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e5ec) {
            ctx->pc = 0x10E5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E5ECu;
            // 0x10e5f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E5F4u;
            goto label_10e5f4;
        }
    }
    ctx->pc = 0x10E5F4u;
label_10e5f4:
    // 0x10e5f4: 0x1012  mflo        $v0
    ctx->pc = 0x10e5f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10e5f8: 0xa6220178  sh          $v0, 0x178($s1)
    ctx->pc = 0x10e5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 376), (uint16_t)GPR_U32(ctx, 2));
label_10e5fc:
    // 0x10e5fc: 0x9622017a  lhu         $v0, 0x17A($s1)
    ctx->pc = 0x10e5fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 378)));
    // 0x10e600: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x10e600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10e604: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10e608: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E608u;
    {
        const bool branch_taken_0x10e608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E608u;
        // 0x10e60c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e608) {
            ctx->pc = 0x10E62Cu;
            goto label_10e62c;
        }
    }
    ctx->pc = 0x10E610u;
    // 0x10e610: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x10e610u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x10e614: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x10e614u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10e618: 0xa623017e  sh          $v1, 0x17E($s1)
    ctx->pc = 0x10e618u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 382), (uint16_t)GPR_U32(ctx, 3));
    // 0x10e61c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10E61Cu;
    {
        const bool branch_taken_0x10e61c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e61c) {
            ctx->pc = 0x10E620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E61Cu;
            // 0x10e620: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E624u;
            goto label_10e624;
        }
    }
    ctx->pc = 0x10E624u;
label_10e624:
    // 0x10e624: 0x1012  mflo        $v0
    ctx->pc = 0x10e624u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10e628: 0xa622017a  sh          $v0, 0x17A($s1)
    ctx->pc = 0x10e628u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 378), (uint16_t)GPR_U32(ctx, 2));
label_10e62c:
    // 0x10e62c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e630: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10e630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10e634: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10e634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e638: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10e638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10e63c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E63Cu;
        // 0x10e640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E644u;
}
