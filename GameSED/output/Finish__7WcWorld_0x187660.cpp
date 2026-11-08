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

// Function: Finish__7WcWorld
// Address: 0x187660 - 0x18779c
void Finish__7WcWorld_0x187660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__7WcWorld_0x187660");
#endif

    switch (ctx->pc) {
        case 0x187660u: goto label_187660;
        case 0x187664u: goto label_187664;
        case 0x187668u: goto label_187668;
        case 0x18766cu: goto label_18766c;
        case 0x187670u: goto label_187670;
        case 0x187674u: goto label_187674;
        case 0x187678u: goto label_187678;
        case 0x18767cu: goto label_18767c;
        case 0x187680u: goto label_187680;
        case 0x187684u: goto label_187684;
        case 0x187688u: goto label_187688;
        case 0x18768cu: goto label_18768c;
        case 0x187690u: goto label_187690;
        case 0x187694u: goto label_187694;
        case 0x187698u: goto label_187698;
        case 0x18769cu: goto label_18769c;
        case 0x1876a0u: goto label_1876a0;
        case 0x1876a4u: goto label_1876a4;
        case 0x1876a8u: goto label_1876a8;
        case 0x1876acu: goto label_1876ac;
        case 0x1876b0u: goto label_1876b0;
        case 0x1876b4u: goto label_1876b4;
        case 0x1876b8u: goto label_1876b8;
        case 0x1876bcu: goto label_1876bc;
        case 0x1876c0u: goto label_1876c0;
        case 0x1876c4u: goto label_1876c4;
        case 0x1876c8u: goto label_1876c8;
        case 0x1876ccu: goto label_1876cc;
        case 0x1876d0u: goto label_1876d0;
        case 0x1876d4u: goto label_1876d4;
        case 0x1876d8u: goto label_1876d8;
        case 0x1876dcu: goto label_1876dc;
        case 0x1876e0u: goto label_1876e0;
        case 0x1876e4u: goto label_1876e4;
        case 0x1876e8u: goto label_1876e8;
        case 0x1876ecu: goto label_1876ec;
        case 0x1876f0u: goto label_1876f0;
        case 0x1876f4u: goto label_1876f4;
        case 0x1876f8u: goto label_1876f8;
        case 0x1876fcu: goto label_1876fc;
        case 0x187700u: goto label_187700;
        case 0x187704u: goto label_187704;
        case 0x187708u: goto label_187708;
        case 0x18770cu: goto label_18770c;
        case 0x187710u: goto label_187710;
        case 0x187714u: goto label_187714;
        case 0x187718u: goto label_187718;
        case 0x18771cu: goto label_18771c;
        case 0x187720u: goto label_187720;
        case 0x187724u: goto label_187724;
        case 0x187728u: goto label_187728;
        case 0x18772cu: goto label_18772c;
        case 0x187730u: goto label_187730;
        case 0x187734u: goto label_187734;
        case 0x187738u: goto label_187738;
        case 0x18773cu: goto label_18773c;
        case 0x187740u: goto label_187740;
        case 0x187744u: goto label_187744;
        case 0x187748u: goto label_187748;
        case 0x18774cu: goto label_18774c;
        case 0x187750u: goto label_187750;
        case 0x187754u: goto label_187754;
        case 0x187758u: goto label_187758;
        case 0x18775cu: goto label_18775c;
        case 0x187760u: goto label_187760;
        case 0x187764u: goto label_187764;
        case 0x187768u: goto label_187768;
        case 0x18776cu: goto label_18776c;
        case 0x187770u: goto label_187770;
        case 0x187774u: goto label_187774;
        case 0x187778u: goto label_187778;
        case 0x18777cu: goto label_18777c;
        case 0x187780u: goto label_187780;
        case 0x187784u: goto label_187784;
        case 0x187788u: goto label_187788;
        case 0x18778cu: goto label_18778c;
        case 0x187790u: goto label_187790;
        case 0x187794u: goto label_187794;
        case 0x187798u: goto label_187798;
        default: break;
    }

    ctx->pc = 0x187660u;

label_187660:
    // 0x187660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_187664:
    // 0x187664: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x187664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_187668:
    // 0x187668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18766c:
    // 0x18766c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18766cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187670:
    // 0x187670: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x187670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_187674:
    // 0x187674: 0xc062204  jal         func_188810
label_187678:
    if (ctx->pc == 0x187678u) {
        ctx->pc = 0x187678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187674u;
        // 0x187678: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18767Cu;
        goto label_18767c;
    }
    ctx->pc = 0x187674u;
    SET_GPR_U32(ctx, 31, 0x18767Cu);
    ctx->pc = 0x187678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187674u;
    // 0x187678: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188810u, 0x187674u, 0x18767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18767Cu;
label_18767c:
    // 0x18767c: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x18767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_187680:
    // 0x187680: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x187680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_187684:
    // 0x187684: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x187684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_187688:
    // 0x187688: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_18768c:
    if (ctx->pc == 0x18768Cu) {
        ctx->pc = 0x18768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187688u;
        // 0x18768c: 0x8e420150  lw          $v0, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187690u;
        goto label_187690;
    }
    ctx->pc = 0x187688u;
    {
        const bool branch_taken_0x187688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187688) {
            ctx->pc = 0x18768Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187688u;
            // 0x18768c: 0x8e420150  lw          $v0, 0x150($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1876B4u;
            goto label_1876b4;
        }
    }
    ctx->pc = 0x187690u;
label_187690:
    // 0x187690: 0x8e460164  lw          $a2, 0x164($s2)
    ctx->pc = 0x187690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
label_187694:
    // 0x187694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187698:
    // 0x187698: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x187698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_18769c:
    // 0x18769c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1876a0:
    // 0x1876a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1876a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1876a4:
    // 0x1876a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1876a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1876a8:
    // 0x1876a8: 0x60f809  jalr        $v1
label_1876ac:
    if (ctx->pc == 0x1876ACu) {
        ctx->pc = 0x1876ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876A8u;
        // 0x1876ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1876B0u;
        goto label_1876b0;
    }
    ctx->pc = 0x1876A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1876B0u);
        ctx->pc = 0x1876ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876A8u;
        // 0x1876ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1876A8u, 0x1876B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1876B0u;
label_1876b0:
    // 0x1876b0: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x1876b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_1876b4:
    // 0x1876b4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1876b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_1876b8:
    // 0x1876b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1876b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1876bc:
    // 0x1876bc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1876c0:
    if (ctx->pc == 0x1876C0u) {
        ctx->pc = 0x1876C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876BCu;
        // 0x1876c0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1876C4u;
        goto label_1876c4;
    }
    ctx->pc = 0x1876BCu;
    {
        const bool branch_taken_0x1876bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1876C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876BCu;
        // 0x1876c0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876bc) {
            ctx->pc = 0x187738u;
            goto label_187738;
        }
    }
    ctx->pc = 0x1876C4u;
label_1876c4:
    // 0x1876c4: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1876c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
label_1876c8:
    // 0x1876c8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_1876cc:
    if (ctx->pc == 0x1876CCu) {
        ctx->pc = 0x1876CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876C8u;
        // 0x1876cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1876D0u;
        goto label_1876d0;
    }
    ctx->pc = 0x1876C8u;
    {
        const bool branch_taken_0x1876c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1876CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876C8u;
        // 0x1876cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1876c8) {
            ctx->pc = 0x187714u;
            goto label_187714;
        }
    }
    ctx->pc = 0x1876D0u;
label_1876d0:
    // 0x1876d0: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x1876d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_1876d4:
    // 0x1876d4: 0x0  nop
    ctx->pc = 0x1876d4u;
    // NOP
label_1876d8:
    // 0x1876d8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1876d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1876dc:
    // 0x1876dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1876dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1876e0:
    // 0x1876e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1876e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1876e4:
    // 0x1876e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1876e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1876e8:
    // 0x1876e8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1876e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1876ec:
    // 0x1876ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1876ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1876f0:
    // 0x1876f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1876f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1876f4:
    // 0x1876f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1876f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1876f8:
    // 0x1876f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1876f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1876fc:
    // 0x1876fc: 0x60f809  jalr        $v1
label_187700:
    if (ctx->pc == 0x187700u) {
        ctx->pc = 0x187700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876FCu;
        // 0x187700: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187704u;
        goto label_187704;
    }
    ctx->pc = 0x1876FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187704u);
        ctx->pc = 0x187700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876FCu;
        // 0x187700: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1876FCu, 0x187704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187704u;
label_187704:
    // 0x187704: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x187704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_187708:
    // 0x187708: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x187708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18770c:
    // 0x18770c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_187710:
    if (ctx->pc == 0x187710u) {
        ctx->pc = 0x187710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18770Cu;
        // 0x187710: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187714u;
        goto label_187714;
    }
    ctx->pc = 0x18770Cu;
    {
        const bool branch_taken_0x18770c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18770c) {
            ctx->pc = 0x187710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18770Cu;
            // 0x187710: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1876D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1876d8;
        }
    }
    ctx->pc = 0x187714u;
label_187714:
    // 0x187714: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x187714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_187718:
    // 0x187718: 0xc067f04  jal         func_19FC10
label_18771c:
    if (ctx->pc == 0x18771Cu) {
        ctx->pc = 0x18771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187718u;
        // 0x18771c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187720u;
        goto label_187720;
    }
    ctx->pc = 0x187718u;
    SET_GPR_U32(ctx, 31, 0x187720u);
    ctx->pc = 0x18771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187718u;
    // 0x18771c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x187718u, 0x187720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187720u;
label_187720:
    // 0x187720: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x187720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
label_187724:
    // 0x187724: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x187724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_187728:
    // 0x187728: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x187728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_18772c:
    // 0x18772c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_187730:
    // 0x187730: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x187730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_187734:
    // 0x187734: 0xae030150  sw          $v1, 0x150($s0)
    ctx->pc = 0x187734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 3));
label_187738:
    // 0x187738: 0x8e4601c4  lw          $a2, 0x1C4($s2)
    ctx->pc = 0x187738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_18773c:
    // 0x18773c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_187740:
    if (ctx->pc == 0x187740u) {
        ctx->pc = 0x187740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18773Cu;
        // 0x187740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187744u;
        goto label_187744;
    }
    ctx->pc = 0x18773Cu;
    {
        const bool branch_taken_0x18773c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x187740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18773Cu;
        // 0x187740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18773c) {
            ctx->pc = 0x18775Cu;
            goto label_18775c;
        }
    }
    ctx->pc = 0x187744u;
label_187744:
    // 0x187744: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x187744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_187748:
    // 0x187748: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x187748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_18774c:
    // 0x18774c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x18774cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_187750:
    // 0x187750: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x187750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_187754:
    // 0x187754: 0x60f809  jalr        $v1
label_187758:
    if (ctx->pc == 0x187758u) {
        ctx->pc = 0x187758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187754u;
        // 0x187758: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18775Cu;
        goto label_18775c;
    }
    ctx->pc = 0x187754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18775Cu);
        ctx->pc = 0x187758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187754u;
        // 0x187758: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187754u, 0x18775Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18775Cu;
label_18775c:
    // 0x18775c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x18775cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_187760:
    // 0x187760: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187764:
    // 0x187764: 0xc0685b8  jal         func_1A16E0
label_187768:
    if (ctx->pc == 0x187768u) {
        ctx->pc = 0x187768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187764u;
        // 0x187768: 0x248415f8  addiu       $a0, $a0, 0x15F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18776Cu;
        goto label_18776c;
    }
    ctx->pc = 0x187764u;
    SET_GPR_U32(ctx, 31, 0x18776Cu);
    ctx->pc = 0x187768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187764u;
    // 0x187768: 0x248415f8  addiu       $a0, $a0, 0x15F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x187764u, 0x18776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18776Cu;
label_18776c:
    // 0x18776c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x18776cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_187770:
    // 0x187770: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187774:
    // 0x187774: 0xc0685b8  jal         func_1A16E0
label_187778:
    if (ctx->pc == 0x187778u) {
        ctx->pc = 0x187778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187774u;
        // 0x187778: 0x24841610  addiu       $a0, $a0, 0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18777Cu;
        goto label_18777c;
    }
    ctx->pc = 0x187774u;
    SET_GPR_U32(ctx, 31, 0x18777Cu);
    ctx->pc = 0x187778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187774u;
    // 0x187778: 0x24841610  addiu       $a0, $a0, 0x1610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x187774u, 0x18777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18777Cu;
label_18777c:
    // 0x18777c: 0xc0612a4  jal         func_184A90
label_187780:
    if (ctx->pc == 0x187780u) {
        ctx->pc = 0x187780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18777Cu;
        // 0x187780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187784u;
        goto label_187784;
    }
    ctx->pc = 0x18777Cu;
    SET_GPR_U32(ctx, 31, 0x187784u);
    ctx->pc = 0x187780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18777Cu;
    // 0x187780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x18777Cu, 0x187784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187784u;
label_187784:
    // 0x187784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187788:
    // 0x187788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18778c:
    // 0x18778c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18778cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187790:
    // 0x187790: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x187790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_187794:
    // 0x187794: 0x3e00008  jr          $ra
label_187798:
    if (ctx->pc == 0x187798u) {
        ctx->pc = 0x187798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187794u;
        // 0x187798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18779Cu;
        goto label_fallthrough_0x187794;
    }
    ctx->pc = 0x187794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187794u;
        // 0x187798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x187794:
    ctx->pc = 0x18779Cu;
}
