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

// Function: _sceCd_ncmd_prechk
// Address: 0x1ba5d8 - 0x1ba748
void _sceCd_ncmd_prechk_0x1ba5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_ncmd_prechk_0x1ba5d8");
#endif

    switch (ctx->pc) {
        case 0x1ba5f8u: goto label_1ba5f8;
        case 0x1ba604u: goto label_1ba604;
        case 0x1ba630u: goto label_1ba630;
        case 0x1ba654u: goto label_1ba654;
        case 0x1ba65cu: goto label_1ba65c;
        case 0x1ba670u: goto label_1ba670;
        case 0x1ba680u: goto label_1ba680;
        case 0x1ba698u: goto label_1ba698;
        case 0x1ba6a0u: goto label_1ba6a0;
        case 0x1ba6c0u: goto label_1ba6c0;
        case 0x1ba6d4u: goto label_1ba6d4;
        case 0x1ba6f8u: goto label_1ba6f8;
        case 0x1ba700u: goto label_1ba700;
        default: break;
    }

    ctx->pc = 0x1ba5d8u;

    // 0x1ba5d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ba5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ba5dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ba5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ba5e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba5e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ba5e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba5e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ba5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ba5ec: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1ba5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1ba5f0: 0xc06e810  jal         func_1BA040
    ctx->pc = 0x1BA5F0u;
    SET_GPR_U32(ctx, 31, 0x1BA5F8u);
    ctx->pc = 0x1BA5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5F0u;
    // 0x1ba5f4: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA040u, 0x1BA5F0u, 0x1BA5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5F8u;
label_1ba5f8:
    // 0x1ba5f8: 0x8e04c0a8  lw          $a0, -0x3F58($s0)
    ctx->pc = 0x1ba5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951080)));
    // 0x1ba5fc: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x1BA5FCu;
    SET_GPR_U32(ctx, 31, 0x1BA604u);
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x1BA5FCu, 0x1BA604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA604u;
label_1ba604:
    // 0x1ba604: 0x8e03c0a8  lw          $v1, -0x3F58($s0)
    ctx->pc = 0x1ba604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951080)));
    // 0x1ba608: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BA608u;
    {
        const bool branch_taken_0x1ba608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA608u;
        // 0x1ba60c: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba608) {
            ctx->pc = 0x1BA638u;
            goto label_1ba638;
        }
    }
    ctx->pc = 0x1BA610u;
    // 0x1ba610: 0x8c43c090  lw          $v1, -0x3F70($v0)
    ctx->pc = 0x1ba610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951056)));
    // 0x1ba614: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BA614u;
    {
        const bool branch_taken_0x1ba614 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA614u;
        // 0x1ba618: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba614) {
            ctx->pc = 0x1BA670u;
            goto label_1ba670;
        }
    }
    ctx->pc = 0x1BA61Cu;
    // 0x1ba61c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ba61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ba620: 0x8c46c09c  lw          $a2, -0x3F64($v0)
    ctx->pc = 0x1ba620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951068)));
    // 0x1ba624: 0x2484af70  addiu       $a0, $a0, -0x5090
    ctx->pc = 0x1ba624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946672));
    // 0x1ba628: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA628u;
    SET_GPR_U32(ctx, 31, 0x1BA630u);
    ctx->pc = 0x1BA62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA628u;
    // 0x1ba62c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA628u, 0x1BA630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA630u;
label_1ba630:
    // 0x1ba630: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1BA630u;
    {
        const bool branch_taken_0x1ba630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA630u;
        // 0x1ba634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba630) {
            ctx->pc = 0x1BA730u;
            goto label_1ba730;
        }
    }
    ctx->pc = 0x1BA638u;
label_1ba638:
    // 0x1ba638: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1ba638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1ba63c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1ba63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1ba640: 0x8c44d690  lw          $a0, -0x2970($v0)
    ctx->pc = 0x1ba640u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40D690u));
    // 0x1ba644: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1ba644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1ba648: 0xac71c09c  sw          $s1, -0x3F64($v1)
    ctx->pc = 0x1ba648u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x24C09Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C09Cu, _value); } while (0);
    // 0x1ba64c: 0xc06bcd8  jal         func_1AF360
    ctx->pc = 0x1BA64Cu;
    SET_GPR_U32(ctx, 31, 0x1BA654u);
    ctx->pc = 0x1BA650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA64Cu;
    // 0x1ba650: 0x24a5d698  addiu       $a1, $a1, -0x2968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF360u, 0x1BA64Cu, 0x1BA654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA654u;
label_1ba654:
    // 0x1ba654: 0xc06e9f8  jal         func_1BA7E0
    ctx->pc = 0x1BA654u;
    SET_GPR_U32(ctx, 31, 0x1BA65Cu);
    ctx->pc = 0x1BA658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA654u;
    // 0x1ba658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA7E0u, 0x1BA654u, 0x1BA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA65Cu;
label_1ba65c:
    // 0x1ba65c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA65Cu;
    {
        const bool branch_taken_0x1ba65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA65Cu;
        // 0x1ba660: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba65c) {
            ctx->pc = 0x1BA678u;
            goto label_1ba678;
        }
    }
    ctx->pc = 0x1BA664u;
    // 0x1ba664: 0x8e04c0a8  lw          $a0, -0x3F58($s0)
    ctx->pc = 0x1ba664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951080)));
    // 0x1ba668: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BA668u;
    SET_GPR_U32(ctx, 31, 0x1BA670u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BA668u, 0x1BA670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA670u;
label_1ba670:
    // 0x1ba670: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1BA670u;
    {
        const bool branch_taken_0x1ba670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA670u;
        // 0x1ba674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba670) {
            ctx->pc = 0x1BA730u;
            goto label_1ba730;
        }
    }
    ctx->pc = 0x1BA678u;
label_1ba678:
    // 0x1ba678: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x1BA678u;
    SET_GPR_U32(ctx, 31, 0x1BA680u);
    ctx->pc = 0x1BA67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA678u;
    // 0x1ba67c: 0x3c120025  lui         $s2, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x1BA678u, 0x1BA680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA680u;
label_1ba680:
    // 0x1ba680: 0x8e42c0b8  lw          $v0, -0x3F48($s2)
    ctx->pc = 0x1ba680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951096)));
    // 0x1ba684: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BA684u;
    {
        const bool branch_taken_0x1ba684 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA684u;
        // 0x1ba688: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba684) {
            ctx->pc = 0x1BA730u;
            goto label_1ba730;
        }
    }
    ctx->pc = 0x1BA68Cu;
    // 0x1ba68c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BA68Cu;
    {
        const bool branch_taken_0x1ba68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA68Cu;
        // 0x1ba690: 0x3c110025  lui         $s1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba68c) {
            ctx->pc = 0x1BA6BCu;
            goto label_1ba6bc;
        }
    }
    ctx->pc = 0x1BA694u;
    // 0x1ba694: 0x0  nop
    ctx->pc = 0x1ba694u;
    // NOP
label_1ba698:
    // 0x1ba698: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1ba698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1ba69c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ba69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ba6a0:
    // 0x1ba6a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba6a4: 0x0  nop
    ctx->pc = 0x1ba6a4u;
    // NOP
    // 0x1ba6a8: 0x0  nop
    ctx->pc = 0x1ba6a8u;
    // NOP
    // 0x1ba6ac: 0x0  nop
    ctx->pc = 0x1ba6acu;
    // NOP
    // 0x1ba6b0: 0x0  nop
    ctx->pc = 0x1ba6b0u;
    // NOP
    // 0x1ba6b4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BA6B4u;
    {
        const bool branch_taken_0x1ba6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba6b4) {
            ctx->pc = 0x1BA6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba6a0;
        }
    }
    ctx->pc = 0x1BA6BCu;
label_1ba6bc:
    // 0x1ba6bc: 0x2630d250  addiu       $s0, $s1, -0x2DB0
    ctx->pc = 0x1ba6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955600));
label_1ba6c0:
    // 0x1ba6c0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ba6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ba6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba6c8: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x1ba6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x1ba6cc: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1BA6CCu;
    SET_GPR_U32(ctx, 31, 0x1BA6D4u);
    ctx->pc = 0x1BA6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6CCu;
    // 0x1ba6d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1BA6CCu, 0x1BA6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6D4u;
label_1ba6d4:
    // 0x1ba6d4: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA6D4u;
    {
        const bool branch_taken_0x1ba6d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ba6d4) {
            ctx->pc = 0x1BA6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA6D4u;
            // 0x1ba6d8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA724u;
            goto label_1ba724;
        }
    }
    ctx->pc = 0x1BA6DCu;
    // 0x1ba6dc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ba6e0: 0x8c43c090  lw          $v1, -0x3F70($v0)
    ctx->pc = 0x1ba6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24C090u));
    // 0x1ba6e4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA6E4u;
    {
        const bool branch_taken_0x1ba6e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6E4u;
        // 0x1ba6e8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6e4) {
            ctx->pc = 0x1BA6FCu;
            goto label_1ba6fc;
        }
    }
    ctx->pc = 0x1BA6ECu;
    // 0x1ba6ec: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1ba6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1ba6f0: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA6F0u;
    SET_GPR_U32(ctx, 31, 0x1BA6F8u);
    ctx->pc = 0x1BA6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6F0u;
    // 0x1ba6f4: 0x2484af98  addiu       $a0, $a0, -0x5068 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA6F0u, 0x1BA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6F8u;
label_1ba6f8:
    // 0x1ba6f8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1ba6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1ba6fc:
    // 0x1ba6fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ba6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ba700:
    // 0x1ba700: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba704: 0x0  nop
    ctx->pc = 0x1ba704u;
    // NOP
    // 0x1ba708: 0x0  nop
    ctx->pc = 0x1ba708u;
    // NOP
    // 0x1ba70c: 0x0  nop
    ctx->pc = 0x1ba70cu;
    // NOP
    // 0x1ba710: 0x0  nop
    ctx->pc = 0x1ba710u;
    // NOP
    // 0x1ba714: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BA714u;
    {
        const bool branch_taken_0x1ba714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba714) {
            ctx->pc = 0x1BA700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba700;
        }
    }
    ctx->pc = 0x1BA71Cu;
    // 0x1ba71c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BA71Cu;
    {
        const bool branch_taken_0x1ba71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA71Cu;
        // 0x1ba720: 0x2630d250  addiu       $s0, $s1, -0x2DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba71c) {
            ctx->pc = 0x1BA6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba6c0;
        }
    }
    ctx->pc = 0x1BA724u;
label_1ba724:
    // 0x1ba724: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BA724u;
    {
        const bool branch_taken_0x1ba724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA724u;
        // 0x1ba728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba724) {
            ctx->pc = 0x1BA698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba698;
        }
    }
    ctx->pc = 0x1BA72Cu;
    // 0x1ba72c: 0xae40c0b8  sw          $zero, -0x3F48($s2)
    ctx->pc = 0x1ba72cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294951096), GPR_U32(ctx, 0));
label_1ba730:
    // 0x1ba730: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ba730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba734: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ba734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba738: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ba738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba740: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA740u;
        // 0x1ba744: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA748u;
}
