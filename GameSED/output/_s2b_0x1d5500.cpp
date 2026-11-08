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

// Function: _s2b
// Address: 0x1d5500 - 0x1d5630
void _s2b_0x1d5500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_s2b_0x1d5500");
#endif

    switch (ctx->pc) {
        case 0x1d5558u: goto label_1d5558;
        case 0x1d557cu: goto label_1d557c;
        case 0x1d55a0u: goto label_1d55a0;
        case 0x1d55b8u: goto label_1d55b8;
        case 0x1d55e8u: goto label_1d55e8;
        case 0x1d5604u: goto label_1d5604;
        default: break;
    }

    ctx->pc = 0x1d5500u;

    // 0x1d5500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5504: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d5504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d5508: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d5508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d550c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1d550cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5510: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x1d5510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x1d5514: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5518: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d5518u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d551c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5524: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1d5524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5528: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d552c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d552cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5530: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d5534: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d5534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5538: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d5538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d553c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D553Cu;
    {
        const bool branch_taken_0x1d553c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d553c) {
            ctx->pc = 0x1D5540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D553Cu;
            // 0x1d5540: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5544u;
            goto label_1d5544;
        }
    }
    ctx->pc = 0x1D5544u;
label_1d5544:
    // 0x1d5544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d5544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5548: 0x1812  mflo        $v1
    ctx->pc = 0x1d5548u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d554c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1d554cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d5550: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5550u;
    {
        const bool branch_taken_0x1d5550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5550u;
        // 0x1d5554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5550) {
            ctx->pc = 0x1D5574u;
            goto label_1d5574;
        }
    }
    ctx->pc = 0x1D5558u;
label_1d5558:
    // 0x1d5558: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1d5558u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1d555c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1d555cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d5560: 0x0  nop
    ctx->pc = 0x1d5560u;
    // NOP
    // 0x1d5564: 0x0  nop
    ctx->pc = 0x1d5564u;
    // NOP
    // 0x1d5568: 0x0  nop
    ctx->pc = 0x1d5568u;
    // NOP
    // 0x1d556c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D556Cu;
    {
        const bool branch_taken_0x1d556c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D556Cu;
        // 0x1d5570: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d556c) {
            ctx->pc = 0x1D5558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5558;
        }
    }
    ctx->pc = 0x1D5574u;
label_1d5574:
    // 0x1d5574: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5574u;
    SET_GPR_U32(ctx, 31, 0x1D557Cu);
    ctx->pc = 0x1D5578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5574u;
    // 0x1d5578: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5574u, 0x1D557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D557Cu;
label_1d557c:
    // 0x1d557c: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x1d557cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d5580: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5588: 0xacb10014  sw          $s1, 0x14($a1)
    ctx->pc = 0x1d5588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 17));
    // 0x1d558c: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x1d558cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d5590: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5590u;
    {
        const bool branch_taken_0x1d5590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5590u;
        // 0x1d5594: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5590) {
            ctx->pc = 0x1D55D0u;
            goto label_1d55d0;
        }
    }
    ctx->pc = 0x1D5598u;
    // 0x1d5598: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x1d5598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x1d559c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d559cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1d55a0:
    // 0x1d55a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d55a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d55a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d55a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55a8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d55a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d55ac: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x1d55acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1d55b0: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D55B0u;
    SET_GPR_U32(ctx, 31, 0x1D55B8u);
    ctx->pc = 0x1D55B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55B0u;
    // 0x1d55b4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D55B0u, 0x1D55B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55B8u;
label_1d55b8:
    // 0x1d55b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d55b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55bc: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1d55bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d55c0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D55C0u;
    {
        const bool branch_taken_0x1d55c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d55c0) {
            ctx->pc = 0x1D55C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D55C0u;
            // 0x1d55c4: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D55A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d55a0;
        }
    }
    ctx->pc = 0x1D55C8u;
    // 0x1d55c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D55C8u;
    {
        const bool branch_taken_0x1d55c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55C8u;
        // 0x1d55cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55c8) {
            ctx->pc = 0x1D55D4u;
            goto label_1d55d4;
        }
    }
    ctx->pc = 0x1D55D0u;
label_1d55d0:
    // 0x1d55d0: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x1d55d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_1d55d4:
    // 0x1d55d4: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x1d55d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1d55d8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1D55D8u;
    {
        const bool branch_taken_0x1d55d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d55d8) {
            ctx->pc = 0x1D55DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D55D8u;
            // 0x1d55dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5610u;
            goto label_1d5610;
        }
    }
    ctx->pc = 0x1D55E0u;
    // 0x1d55e0: 0x2918823  subu        $s1, $s4, $s1
    ctx->pc = 0x1d55e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1d55e4: 0x0  nop
    ctx->pc = 0x1d55e4u;
    // NOP
label_1d55e8:
    // 0x1d55e8: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1d55e8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d55ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d55ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d55f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d55f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55f4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d55f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d55f8: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x1d55f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1d55fc: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D55FCu;
    SET_GPR_U32(ctx, 31, 0x1D5604u);
    ctx->pc = 0x1D5600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55FCu;
    // 0x1d5600: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D55FCu, 0x1D5604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5604u;
label_1d5604:
    // 0x1d5604: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D5604u;
    {
        const bool branch_taken_0x1d5604 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5604u;
        // 0x1d5608: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5604) {
            ctx->pc = 0x1D55E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d55e8;
        }
    }
    ctx->pc = 0x1D560Cu;
    // 0x1d560c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d560cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5610:
    // 0x1d5610: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d5610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5614: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5618: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d561c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d561cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5620: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d5620u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5624: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d5624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d5628: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5628u;
        // 0x1d562c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5630u;
}
