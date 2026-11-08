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

// Function: BossDamageVisible__8ApcPanelb
// Address: 0x15e848 - 0x15ea50
void BossDamageVisible__8ApcPanelb_0x15e848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BossDamageVisible__8ApcPanelb_0x15e848");
#endif

    switch (ctx->pc) {
        case 0x15e848u: goto label_15e848;
        case 0x15e84cu: goto label_15e84c;
        case 0x15e850u: goto label_15e850;
        case 0x15e854u: goto label_15e854;
        case 0x15e858u: goto label_15e858;
        case 0x15e85cu: goto label_15e85c;
        case 0x15e860u: goto label_15e860;
        case 0x15e864u: goto label_15e864;
        case 0x15e868u: goto label_15e868;
        case 0x15e86cu: goto label_15e86c;
        case 0x15e870u: goto label_15e870;
        case 0x15e874u: goto label_15e874;
        case 0x15e878u: goto label_15e878;
        case 0x15e87cu: goto label_15e87c;
        case 0x15e880u: goto label_15e880;
        case 0x15e884u: goto label_15e884;
        case 0x15e888u: goto label_15e888;
        case 0x15e88cu: goto label_15e88c;
        case 0x15e890u: goto label_15e890;
        case 0x15e894u: goto label_15e894;
        case 0x15e898u: goto label_15e898;
        case 0x15e89cu: goto label_15e89c;
        case 0x15e8a0u: goto label_15e8a0;
        case 0x15e8a4u: goto label_15e8a4;
        case 0x15e8a8u: goto label_15e8a8;
        case 0x15e8acu: goto label_15e8ac;
        case 0x15e8b0u: goto label_15e8b0;
        case 0x15e8b4u: goto label_15e8b4;
        case 0x15e8b8u: goto label_15e8b8;
        case 0x15e8bcu: goto label_15e8bc;
        case 0x15e8c0u: goto label_15e8c0;
        case 0x15e8c4u: goto label_15e8c4;
        case 0x15e8c8u: goto label_15e8c8;
        case 0x15e8ccu: goto label_15e8cc;
        case 0x15e8d0u: goto label_15e8d0;
        case 0x15e8d4u: goto label_15e8d4;
        case 0x15e8d8u: goto label_15e8d8;
        case 0x15e8dcu: goto label_15e8dc;
        case 0x15e8e0u: goto label_15e8e0;
        case 0x15e8e4u: goto label_15e8e4;
        case 0x15e8e8u: goto label_15e8e8;
        case 0x15e8ecu: goto label_15e8ec;
        case 0x15e8f0u: goto label_15e8f0;
        case 0x15e8f4u: goto label_15e8f4;
        case 0x15e8f8u: goto label_15e8f8;
        case 0x15e8fcu: goto label_15e8fc;
        case 0x15e900u: goto label_15e900;
        case 0x15e904u: goto label_15e904;
        case 0x15e908u: goto label_15e908;
        case 0x15e90cu: goto label_15e90c;
        case 0x15e910u: goto label_15e910;
        case 0x15e914u: goto label_15e914;
        case 0x15e918u: goto label_15e918;
        case 0x15e91cu: goto label_15e91c;
        case 0x15e920u: goto label_15e920;
        case 0x15e924u: goto label_15e924;
        case 0x15e928u: goto label_15e928;
        case 0x15e92cu: goto label_15e92c;
        case 0x15e930u: goto label_15e930;
        case 0x15e934u: goto label_15e934;
        case 0x15e938u: goto label_15e938;
        case 0x15e93cu: goto label_15e93c;
        case 0x15e940u: goto label_15e940;
        case 0x15e944u: goto label_15e944;
        case 0x15e948u: goto label_15e948;
        case 0x15e94cu: goto label_15e94c;
        case 0x15e950u: goto label_15e950;
        case 0x15e954u: goto label_15e954;
        case 0x15e958u: goto label_15e958;
        case 0x15e95cu: goto label_15e95c;
        case 0x15e960u: goto label_15e960;
        case 0x15e964u: goto label_15e964;
        case 0x15e968u: goto label_15e968;
        case 0x15e96cu: goto label_15e96c;
        case 0x15e970u: goto label_15e970;
        case 0x15e974u: goto label_15e974;
        case 0x15e978u: goto label_15e978;
        case 0x15e97cu: goto label_15e97c;
        case 0x15e980u: goto label_15e980;
        case 0x15e984u: goto label_15e984;
        case 0x15e988u: goto label_15e988;
        case 0x15e98cu: goto label_15e98c;
        case 0x15e990u: goto label_15e990;
        case 0x15e994u: goto label_15e994;
        case 0x15e998u: goto label_15e998;
        case 0x15e99cu: goto label_15e99c;
        case 0x15e9a0u: goto label_15e9a0;
        case 0x15e9a4u: goto label_15e9a4;
        case 0x15e9a8u: goto label_15e9a8;
        case 0x15e9acu: goto label_15e9ac;
        case 0x15e9b0u: goto label_15e9b0;
        case 0x15e9b4u: goto label_15e9b4;
        case 0x15e9b8u: goto label_15e9b8;
        case 0x15e9bcu: goto label_15e9bc;
        case 0x15e9c0u: goto label_15e9c0;
        case 0x15e9c4u: goto label_15e9c4;
        case 0x15e9c8u: goto label_15e9c8;
        case 0x15e9ccu: goto label_15e9cc;
        case 0x15e9d0u: goto label_15e9d0;
        case 0x15e9d4u: goto label_15e9d4;
        case 0x15e9d8u: goto label_15e9d8;
        case 0x15e9dcu: goto label_15e9dc;
        case 0x15e9e0u: goto label_15e9e0;
        case 0x15e9e4u: goto label_15e9e4;
        case 0x15e9e8u: goto label_15e9e8;
        case 0x15e9ecu: goto label_15e9ec;
        case 0x15e9f0u: goto label_15e9f0;
        case 0x15e9f4u: goto label_15e9f4;
        case 0x15e9f8u: goto label_15e9f8;
        case 0x15e9fcu: goto label_15e9fc;
        case 0x15ea00u: goto label_15ea00;
        case 0x15ea04u: goto label_15ea04;
        case 0x15ea08u: goto label_15ea08;
        case 0x15ea0cu: goto label_15ea0c;
        case 0x15ea10u: goto label_15ea10;
        case 0x15ea14u: goto label_15ea14;
        case 0x15ea18u: goto label_15ea18;
        case 0x15ea1cu: goto label_15ea1c;
        case 0x15ea20u: goto label_15ea20;
        case 0x15ea24u: goto label_15ea24;
        case 0x15ea28u: goto label_15ea28;
        case 0x15ea2cu: goto label_15ea2c;
        case 0x15ea30u: goto label_15ea30;
        case 0x15ea34u: goto label_15ea34;
        case 0x15ea38u: goto label_15ea38;
        case 0x15ea3cu: goto label_15ea3c;
        case 0x15ea40u: goto label_15ea40;
        case 0x15ea44u: goto label_15ea44;
        case 0x15ea48u: goto label_15ea48;
        case 0x15ea4cu: goto label_15ea4c;
        default: break;
    }

    ctx->pc = 0x15e848u;

label_15e848:
    // 0x15e848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15e848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15e84c:
    // 0x15e84c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15e84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15e850:
    // 0x15e850: 0x24900da0  addiu       $s0, $a0, 0xDA0
    ctx->pc = 0x15e850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3488));
label_15e854:
    // 0x15e854: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
label_15e858:
    if (ctx->pc == 0x15E858u) {
        ctx->pc = 0x15E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E854u;
        // 0x15e858: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E85Cu;
        goto label_15e85c;
    }
    ctx->pc = 0x15E854u;
    {
        const bool branch_taken_0x15e854 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E854u;
        // 0x15e858: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e854) {
            ctx->pc = 0x15E900u;
            goto label_15e900;
        }
    }
    ctx->pc = 0x15E85Cu;
label_15e85c:
    // 0x15e85c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e860:
    // 0x15e860: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e864:
    // 0x15e864: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_15e868:
    // 0x15e868: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e86c:
    if (ctx->pc == 0x15E86Cu) {
        ctx->pc = 0x15E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E868u;
        // 0x15e86c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E870u;
        goto label_15e870;
    }
    ctx->pc = 0x15E868u;
    {
        const bool branch_taken_0x15e868 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E868u;
        // 0x15e86c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e868) {
            ctx->pc = 0x15E888u;
            goto label_15e888;
        }
    }
    ctx->pc = 0x15E870u;
label_15e870:
    // 0x15e870: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e874:
    // 0x15e874: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e878:
    // 0x15e878: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e87c:
    // 0x15e87c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e880:
    // 0x15e880: 0x60f809  jalr        $v1
label_15e884:
    if (ctx->pc == 0x15E884u) {
        ctx->pc = 0x15E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E880u;
        // 0x15e884: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E888u;
        goto label_15e888;
    }
    ctx->pc = 0x15E880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E888u);
        ctx->pc = 0x15E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E880u;
        // 0x15e884: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E880u, 0x15E888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E888u;
label_15e888:
    // 0x15e888: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15e888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15e88c:
    // 0x15e88c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e890:
    if (ctx->pc == 0x15E890u) {
        ctx->pc = 0x15E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E88Cu;
        // 0x15e890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E894u;
        goto label_15e894;
    }
    ctx->pc = 0x15E88Cu;
    {
        const bool branch_taken_0x15e88c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E88Cu;
        // 0x15e890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e88c) {
            ctx->pc = 0x15E8ACu;
            goto label_15e8ac;
        }
    }
    ctx->pc = 0x15E894u;
label_15e894:
    // 0x15e894: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e898:
    // 0x15e898: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e89c:
    // 0x15e89c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e89cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e8a0:
    // 0x15e8a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e8a4:
    // 0x15e8a4: 0x60f809  jalr        $v1
label_15e8a8:
    if (ctx->pc == 0x15E8A8u) {
        ctx->pc = 0x15E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8A4u;
        // 0x15e8a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8ACu;
        goto label_15e8ac;
    }
    ctx->pc = 0x15E8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E8ACu);
        ctx->pc = 0x15E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8A4u;
        // 0x15e8a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8A4u, 0x15E8ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E8ACu;
label_15e8ac:
    // 0x15e8ac: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e8b0:
    // 0x15e8b0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e8b4:
    if (ctx->pc == 0x15E8B4u) {
        ctx->pc = 0x15E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8B0u;
        // 0x15e8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8B8u;
        goto label_15e8b8;
    }
    ctx->pc = 0x15E8B0u;
    {
        const bool branch_taken_0x15e8b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8B0u;
        // 0x15e8b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8b0) {
            ctx->pc = 0x15E8D0u;
            goto label_15e8d0;
        }
    }
    ctx->pc = 0x15E8B8u;
label_15e8b8:
    // 0x15e8b8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e8bc:
    // 0x15e8bc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e8c0:
    // 0x15e8c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e8c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e8c4:
    // 0x15e8c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e8c8:
    // 0x15e8c8: 0x60f809  jalr        $v1
label_15e8cc:
    if (ctx->pc == 0x15E8CCu) {
        ctx->pc = 0x15E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8C8u;
        // 0x15e8cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8D0u;
        goto label_15e8d0;
    }
    ctx->pc = 0x15E8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E8D0u);
        ctx->pc = 0x15E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8C8u;
        // 0x15e8cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8C8u, 0x15E8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E8D0u;
label_15e8d0:
    // 0x15e8d0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e8d4:
    // 0x15e8d4: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
label_15e8d8:
    if (ctx->pc == 0x15E8D8u) {
        ctx->pc = 0x15E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8D4u;
        // 0x15e8d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8DCu;
        goto label_15e8dc;
    }
    ctx->pc = 0x15E8D4u;
    {
        const bool branch_taken_0x15e8d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8D4u;
        // 0x15e8d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8d4) {
            ctx->pc = 0x15EA40u;
            goto label_15ea40;
        }
    }
    ctx->pc = 0x15E8DCu;
label_15e8dc:
    // 0x15e8dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e8e0:
    // 0x15e8e0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e8e4:
    // 0x15e8e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e8e8:
    // 0x15e8e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e8ec:
    // 0x15e8ec: 0x60f809  jalr        $v1
label_15e8f0:
    if (ctx->pc == 0x15E8F0u) {
        ctx->pc = 0x15E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8ECu;
        // 0x15e8f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8F4u;
        goto label_15e8f4;
    }
    ctx->pc = 0x15E8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E8F4u);
        ctx->pc = 0x15E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8ECu;
        // 0x15e8f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8ECu, 0x15E8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E8F4u;
label_15e8f4:
    // 0x15e8f4: 0x10000053  b           . + 4 + (0x53 << 2)
label_15e8f8:
    if (ctx->pc == 0x15E8F8u) {
        ctx->pc = 0x15E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8F4u;
        // 0x15e8f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8FCu;
        goto label_15e8fc;
    }
    ctx->pc = 0x15E8F4u;
    {
        const bool branch_taken_0x15e8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8F4u;
        // 0x15e8f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8f4) {
            ctx->pc = 0x15EA44u;
            goto label_15ea44;
        }
    }
    ctx->pc = 0x15E8FCu;
label_15e8fc:
    // 0x15e8fc: 0x0  nop
    ctx->pc = 0x15e8fcu;
    // NOP
label_15e900:
    // 0x15e900: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15e900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e904:
    // 0x15e904: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15e904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_15e908:
    // 0x15e908: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15e908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e90c:
    // 0x15e90c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15e90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15e910:
    // 0x15e910: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_15e914:
    if (ctx->pc == 0x15E914u) {
        ctx->pc = 0x15E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E910u;
        // 0x15e914: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E918u;
        goto label_15e918;
    }
    ctx->pc = 0x15E910u;
    {
        const bool branch_taken_0x15e910 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E910u;
        // 0x15e914: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e910) {
            ctx->pc = 0x15E934u;
            goto label_15e934;
        }
    }
    ctx->pc = 0x15E918u;
label_15e918:
    // 0x15e918: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e91c:
    // 0x15e91c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e920:
    // 0x15e920: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e924:
    // 0x15e924: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e928:
    // 0x15e928: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e92c:
    // 0x15e92c: 0x60f809  jalr        $v1
label_15e930:
    if (ctx->pc == 0x15E930u) {
        ctx->pc = 0x15E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E92Cu;
        // 0x15e930: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E934u;
        goto label_15e934;
    }
    ctx->pc = 0x15E92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E934u);
        ctx->pc = 0x15E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E92Cu;
        // 0x15e930: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E92Cu, 0x15E934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E934u;
label_15e934:
    // 0x15e934: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x15e934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15e938:
    // 0x15e938: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e93c:
    if (ctx->pc == 0x15E93Cu) {
        ctx->pc = 0x15E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E938u;
        // 0x15e93c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E940u;
        goto label_15e940;
    }
    ctx->pc = 0x15E938u;
    {
        const bool branch_taken_0x15e938 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E938u;
        // 0x15e93c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e938) {
            ctx->pc = 0x15E958u;
            goto label_15e958;
        }
    }
    ctx->pc = 0x15E940u;
label_15e940:
    // 0x15e940: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e944:
    // 0x15e944: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e948:
    // 0x15e948: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e94c:
    // 0x15e94c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e950:
    // 0x15e950: 0x60f809  jalr        $v1
label_15e954:
    if (ctx->pc == 0x15E954u) {
        ctx->pc = 0x15E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E950u;
        // 0x15e954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E958u;
        goto label_15e958;
    }
    ctx->pc = 0x15E950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E958u);
        ctx->pc = 0x15E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E950u;
        // 0x15e954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E950u, 0x15E958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E958u;
label_15e958:
    // 0x15e958: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e95c:
    // 0x15e95c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_15e960:
    if (ctx->pc == 0x15E960u) {
        ctx->pc = 0x15E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E95Cu;
        // 0x15e960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E964u;
        goto label_15e964;
    }
    ctx->pc = 0x15E95Cu;
    {
        const bool branch_taken_0x15e95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e95c) {
            ctx->pc = 0x15E960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E95Cu;
            // 0x15e960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EA44u;
            goto label_15ea44;
        }
    }
    ctx->pc = 0x15E964u;
label_15e964:
    // 0x15e964: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x15e964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15e968:
    // 0x15e968: 0x50c00036  beql        $a2, $zero, . + 4 + (0x36 << 2)
label_15e96c:
    if (ctx->pc == 0x15E96Cu) {
        ctx->pc = 0x15E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E968u;
        // 0x15e96c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E970u;
        goto label_15e970;
    }
    ctx->pc = 0x15E968u;
    {
        const bool branch_taken_0x15e968 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e968) {
            ctx->pc = 0x15E96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E968u;
            // 0x15e96c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EA44u;
            goto label_15ea44;
        }
    }
    ctx->pc = 0x15E970u;
label_15e970:
    // 0x15e970: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15e970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e974:
    // 0x15e974: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x15e974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
label_15e978:
    // 0x15e978: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e97c:
    // 0x15e97c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_15e980:
    if (ctx->pc == 0x15E980u) {
        ctx->pc = 0x15E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E97Cu;
        // 0x15e980: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E984u;
        goto label_15e984;
    }
    ctx->pc = 0x15E97Cu;
    {
        const bool branch_taken_0x15e97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E97Cu;
        // 0x15e980: 0x31383  sra         $v0, $v1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e97c) {
            ctx->pc = 0x15E9E0u;
            goto label_15e9e0;
        }
    }
    ctx->pc = 0x15E984u;
label_15e984:
    // 0x15e984: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e988:
    // 0x15e988: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e98c:
    if (ctx->pc == 0x15E98Cu) {
        ctx->pc = 0x15E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E988u;
        // 0x15e98c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E990u;
        goto label_15e990;
    }
    ctx->pc = 0x15E988u;
    {
        const bool branch_taken_0x15e988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e988) {
            ctx->pc = 0x15E98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E988u;
            // 0x15e98c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E9D4u;
            goto label_15e9d4;
        }
    }
    ctx->pc = 0x15E990u;
label_15e990:
    // 0x15e990: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e994:
    // 0x15e994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e998:
    // 0x15e998: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e99c:
    // 0x15e99c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e99cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e9a0:
    // 0x15e9a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e9a4:
    // 0x15e9a4: 0x60f809  jalr        $v1
label_15e9a8:
    if (ctx->pc == 0x15E9A8u) {
        ctx->pc = 0x15E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9A4u;
        // 0x15e9a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E9ACu;
        goto label_15e9ac;
    }
    ctx->pc = 0x15E9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E9ACu);
        ctx->pc = 0x15E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9A4u;
        // 0x15e9a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E9A4u, 0x15E9ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E9ACu;
label_15e9ac:
    // 0x15e9ac: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e9acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e9b0:
    // 0x15e9b0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e9b4:
    if (ctx->pc == 0x15E9B4u) {
        ctx->pc = 0x15E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9B0u;
        // 0x15e9b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E9B8u;
        goto label_15e9b8;
    }
    ctx->pc = 0x15E9B0u;
    {
        const bool branch_taken_0x15e9b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9B0u;
        // 0x15e9b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e9b0) {
            ctx->pc = 0x15E9D0u;
            goto label_15e9d0;
        }
    }
    ctx->pc = 0x15E9B8u;
label_15e9b8:
    // 0x15e9b8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e9bc:
    // 0x15e9bc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e9c0:
    // 0x15e9c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e9c4:
    // 0x15e9c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e9c8:
    // 0x15e9c8: 0x60f809  jalr        $v1
label_15e9cc:
    if (ctx->pc == 0x15E9CCu) {
        ctx->pc = 0x15E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9C8u;
        // 0x15e9cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E9D0u;
        goto label_15e9d0;
    }
    ctx->pc = 0x15E9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E9D0u);
        ctx->pc = 0x15E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9C8u;
        // 0x15e9cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E9C8u, 0x15E9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E9D0u;
label_15e9d0:
    // 0x15e9d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15e9d4:
    // 0x15e9d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15e9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_15e9d8:
    // 0x15e9d8: 0x10000019  b           . + 4 + (0x19 << 2)
label_15e9dc:
    if (ctx->pc == 0x15E9DCu) {
        ctx->pc = 0x15E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9D8u;
        // 0x15e9dc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E9E0u;
        goto label_15e9e0;
    }
    ctx->pc = 0x15E9D8u;
    {
        const bool branch_taken_0x15e9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9D8u;
        // 0x15e9dc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e9d8) {
            ctx->pc = 0x15EA40u;
            goto label_15ea40;
        }
    }
    ctx->pc = 0x15E9E0u;
label_15e9e0:
    // 0x15e9e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e9e4:
    // 0x15e9e4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e9e8:
    if (ctx->pc == 0x15E9E8u) {
        ctx->pc = 0x15E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9E4u;
        // 0x15e9e8: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E9ECu;
        goto label_15e9ec;
    }
    ctx->pc = 0x15E9E4u;
    {
        const bool branch_taken_0x15e9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e9e4) {
            ctx->pc = 0x15E9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E9E4u;
            // 0x15e9e8: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EA30u;
            goto label_15ea30;
        }
    }
    ctx->pc = 0x15E9ECu;
label_15e9ec:
    // 0x15e9ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e9f0:
    // 0x15e9f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e9f4:
    // 0x15e9f4: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e9f8:
    // 0x15e9f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e9f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e9fc:
    // 0x15e9fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ea00:
    // 0x15ea00: 0x60f809  jalr        $v1
label_15ea04:
    if (ctx->pc == 0x15EA04u) {
        ctx->pc = 0x15EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA00u;
        // 0x15ea04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA08u;
        goto label_15ea08;
    }
    ctx->pc = 0x15EA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EA08u);
        ctx->pc = 0x15EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA00u;
        // 0x15ea04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EA00u, 0x15EA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EA08u;
label_15ea08:
    // 0x15ea08: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15ea08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15ea0c:
    // 0x15ea0c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15ea10:
    if (ctx->pc == 0x15EA10u) {
        ctx->pc = 0x15EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA0Cu;
        // 0x15ea10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA14u;
        goto label_15ea14;
    }
    ctx->pc = 0x15EA0Cu;
    {
        const bool branch_taken_0x15ea0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA0Cu;
        // 0x15ea10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea0c) {
            ctx->pc = 0x15EA2Cu;
            goto label_15ea2c;
        }
    }
    ctx->pc = 0x15EA14u;
label_15ea14:
    // 0x15ea14: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15ea18:
    // 0x15ea18: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15ea1c:
    // 0x15ea1c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ea1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ea20:
    // 0x15ea20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ea24:
    // 0x15ea24: 0x60f809  jalr        $v1
label_15ea28:
    if (ctx->pc == 0x15EA28u) {
        ctx->pc = 0x15EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA24u;
        // 0x15ea28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA2Cu;
        goto label_15ea2c;
    }
    ctx->pc = 0x15EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EA2Cu);
        ctx->pc = 0x15EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA24u;
        // 0x15ea28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EA24u, 0x15EA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EA2Cu;
label_15ea2c:
    // 0x15ea2c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x15ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15ea30:
    // 0x15ea30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_15ea34:
    // 0x15ea34: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15ea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_15ea38:
    // 0x15ea38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x15ea38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15ea3c:
    // 0x15ea3c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x15ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_15ea40:
    // 0x15ea40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15ea40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15ea44:
    // 0x15ea44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15ea44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15ea48:
    // 0x15ea48: 0x3e00008  jr          $ra
label_15ea4c:
    if (ctx->pc == 0x15EA4Cu) {
        ctx->pc = 0x15EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA48u;
        // 0x15ea4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA50u;
        goto label_fallthrough_0x15ea48;
    }
    ctx->pc = 0x15EA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA48u;
        // 0x15ea4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15ea48:
    ctx->pc = 0x15EA50u;
}
