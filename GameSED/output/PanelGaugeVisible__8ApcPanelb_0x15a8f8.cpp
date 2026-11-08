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

// Function: PanelGaugeVisible__8ApcPanelb
// Address: 0x15a8f8 - 0x15aa04
void PanelGaugeVisible__8ApcPanelb_0x15a8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PanelGaugeVisible__8ApcPanelb_0x15a8f8");
#endif

    switch (ctx->pc) {
        case 0x15a948u: goto label_15a948;
        case 0x15a964u: goto label_15a964;
        case 0x15a980u: goto label_15a980;
        case 0x15a99cu: goto label_15a99c;
        case 0x15a9b8u: goto label_15a9b8;
        case 0x15a9d4u: goto label_15a9d4;
        case 0x15a9f0u: goto label_15a9f0;
        default: break;
    }

    ctx->pc = 0x15a8f8u;

    // 0x15a8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15a8fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15a8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15a900: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15a900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15a904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15a908: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a90c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A90Cu;
    {
        const bool branch_taken_0x15a90c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A90Cu;
        // 0x15a910: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a90c) {
            ctx->pc = 0x15A920u;
            goto label_15a920;
        }
    }
    ctx->pc = 0x15A914u;
    // 0x15a914: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a914u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x15a918: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15A918u;
    {
        const bool branch_taken_0x15a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A918u;
        // 0x15a91c: 0x3042fff7  andi        $v0, $v0, 0xFFF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a918) {
            ctx->pc = 0x15A928u;
            goto label_15a928;
        }
    }
    ctx->pc = 0x15A920u;
label_15a920:
    // 0x15a920: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x15a924: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x15a924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_15a928:
    // 0x15a928: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x15a928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a92c: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a92cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x15a930: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x15a930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x15a934: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A934u;
    {
        const bool branch_taken_0x15a934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a934) {
            ctx->pc = 0x15A938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A934u;
            // 0x15a938: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A94Cu;
            goto label_15a94c;
        }
    }
    ctx->pc = 0x15A93Cu;
    // 0x15a93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a940: 0xc056e3a  jal         func_15B8E8
    ctx->pc = 0x15A940u;
    SET_GPR_U32(ctx, 31, 0x15A948u);
    ctx->pc = 0x15A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A940u;
    // 0x15a944: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B8E8u, 0x15A940u, 0x15A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A948u;
label_15a948:
    // 0x15a948: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15a94c:
    // 0x15a94c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x15a94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x15a950: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A950u;
    {
        const bool branch_taken_0x15a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a950) {
            ctx->pc = 0x15A954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A950u;
            // 0x15a954: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A968u;
            goto label_15a968;
        }
    }
    ctx->pc = 0x15A958u;
    // 0x15a958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a95c: 0xc056ebc  jal         func_15BAF0
    ctx->pc = 0x15A95Cu;
    SET_GPR_U32(ctx, 31, 0x15A964u);
    ctx->pc = 0x15A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A95Cu;
    // 0x15a960: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BAF0u, 0x15A95Cu, 0x15A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A964u;
label_15a964:
    // 0x15a964: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15a968:
    // 0x15a968: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x15a968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x15a96c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A96Cu;
    {
        const bool branch_taken_0x15a96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a96c) {
            ctx->pc = 0x15A970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A96Cu;
            // 0x15a970: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A984u;
            goto label_15a984;
        }
    }
    ctx->pc = 0x15A974u;
    // 0x15a974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a978: 0xc05725c  jal         func_15C970
    ctx->pc = 0x15A978u;
    SET_GPR_U32(ctx, 31, 0x15A980u);
    ctx->pc = 0x15A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A978u;
    // 0x15a97c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C970u, 0x15A978u, 0x15A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A980u;
label_15a980:
    // 0x15a980: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15a984:
    // 0x15a984: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x15a984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x15a988: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A988u;
    {
        const bool branch_taken_0x15a988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a988) {
            ctx->pc = 0x15A98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A988u;
            // 0x15a98c: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A9A0u;
            goto label_15a9a0;
        }
    }
    ctx->pc = 0x15A990u;
    // 0x15a990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a994: 0xc0583a4  jal         func_160E90
    ctx->pc = 0x15A994u;
    SET_GPR_U32(ctx, 31, 0x15A99Cu);
    ctx->pc = 0x15A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A994u;
    // 0x15a998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160E90u, 0x15A994u, 0x15A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A99Cu;
label_15a99c:
    // 0x15a99c: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a99cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15a9a0:
    // 0x15a9a0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x15a9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x15a9a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A9A4u;
    {
        const bool branch_taken_0x15a9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9a4) {
            ctx->pc = 0x15A9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A9A4u;
            // 0x15a9a8: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A9BCu;
            goto label_15a9bc;
        }
    }
    ctx->pc = 0x15A9ACu;
    // 0x15a9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9b0: 0xc0578c8  jal         func_15E320
    ctx->pc = 0x15A9B0u;
    SET_GPR_U32(ctx, 31, 0x15A9B8u);
    ctx->pc = 0x15A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A9B0u;
    // 0x15a9b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E320u, 0x15A9B0u, 0x15A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A9B8u;
label_15a9b8:
    // 0x15a9b8: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a9b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15a9bc:
    // 0x15a9bc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15a9c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A9C0u;
    {
        const bool branch_taken_0x15a9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9c0) {
            ctx->pc = 0x15A9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A9C0u;
            // 0x15a9c4: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A9D8u;
            goto label_15a9d8;
        }
    }
    ctx->pc = 0x15A9C8u;
    // 0x15a9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9cc: 0xc057a12  jal         func_15E848
    ctx->pc = 0x15A9CCu;
    SET_GPR_U32(ctx, 31, 0x15A9D4u);
    ctx->pc = 0x15A9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A9CCu;
    // 0x15a9d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E848u, 0x15A9CCu, 0x15A9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A9D4u;
label_15a9d4:
    // 0x15a9d4: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a9d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_15a9d8:
    // 0x15a9d8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x15a9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x15a9dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A9DCu;
    {
        const bool branch_taken_0x15a9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9dc) {
            ctx->pc = 0x15A9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A9DCu;
            // 0x15a9e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A9F4u;
            goto label_15a9f4;
        }
    }
    ctx->pc = 0x15A9E4u;
    // 0x15a9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a9e8: 0xc0580c0  jal         func_160300
    ctx->pc = 0x15A9E8u;
    SET_GPR_U32(ctx, 31, 0x15A9F0u);
    ctx->pc = 0x15A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A9E8u;
    // 0x15a9ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160300u, 0x15A9E8u, 0x15A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A9F0u;
label_15a9f0:
    // 0x15a9f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15a9f4:
    // 0x15a9f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15a9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15a9f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x15A9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9FCu;
        // 0x15aa00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AA04u;
}
