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

// Function: Cmd_THINK_ENTRY_Entry__FP15BsSCDEntControl
// Address: 0x103860 - 0x103a04
void Cmd_THINK_ENTRY_Entry__FP15BsSCDEntControl_0x103860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_THINK_ENTRY_Entry__FP15BsSCDEntControl_0x103860");
#endif

    switch (ctx->pc) {
        case 0x103860u: goto label_103860;
        case 0x103864u: goto label_103864;
        case 0x103868u: goto label_103868;
        case 0x10386cu: goto label_10386c;
        case 0x103870u: goto label_103870;
        case 0x103874u: goto label_103874;
        case 0x103878u: goto label_103878;
        case 0x10387cu: goto label_10387c;
        case 0x103880u: goto label_103880;
        case 0x103884u: goto label_103884;
        case 0x103888u: goto label_103888;
        case 0x10388cu: goto label_10388c;
        case 0x103890u: goto label_103890;
        case 0x103894u: goto label_103894;
        case 0x103898u: goto label_103898;
        case 0x10389cu: goto label_10389c;
        case 0x1038a0u: goto label_1038a0;
        case 0x1038a4u: goto label_1038a4;
        case 0x1038a8u: goto label_1038a8;
        case 0x1038acu: goto label_1038ac;
        case 0x1038b0u: goto label_1038b0;
        case 0x1038b4u: goto label_1038b4;
        case 0x1038b8u: goto label_1038b8;
        case 0x1038bcu: goto label_1038bc;
        case 0x1038c0u: goto label_1038c0;
        case 0x1038c4u: goto label_1038c4;
        case 0x1038c8u: goto label_1038c8;
        case 0x1038ccu: goto label_1038cc;
        case 0x1038d0u: goto label_1038d0;
        case 0x1038d4u: goto label_1038d4;
        case 0x1038d8u: goto label_1038d8;
        case 0x1038dcu: goto label_1038dc;
        case 0x1038e0u: goto label_1038e0;
        case 0x1038e4u: goto label_1038e4;
        case 0x1038e8u: goto label_1038e8;
        case 0x1038ecu: goto label_1038ec;
        case 0x1038f0u: goto label_1038f0;
        case 0x1038f4u: goto label_1038f4;
        case 0x1038f8u: goto label_1038f8;
        case 0x1038fcu: goto label_1038fc;
        case 0x103900u: goto label_103900;
        case 0x103904u: goto label_103904;
        case 0x103908u: goto label_103908;
        case 0x10390cu: goto label_10390c;
        case 0x103910u: goto label_103910;
        case 0x103914u: goto label_103914;
        case 0x103918u: goto label_103918;
        case 0x10391cu: goto label_10391c;
        case 0x103920u: goto label_103920;
        case 0x103924u: goto label_103924;
        case 0x103928u: goto label_103928;
        case 0x10392cu: goto label_10392c;
        case 0x103930u: goto label_103930;
        case 0x103934u: goto label_103934;
        case 0x103938u: goto label_103938;
        case 0x10393cu: goto label_10393c;
        case 0x103940u: goto label_103940;
        case 0x103944u: goto label_103944;
        case 0x103948u: goto label_103948;
        case 0x10394cu: goto label_10394c;
        case 0x103950u: goto label_103950;
        case 0x103954u: goto label_103954;
        case 0x103958u: goto label_103958;
        case 0x10395cu: goto label_10395c;
        case 0x103960u: goto label_103960;
        case 0x103964u: goto label_103964;
        case 0x103968u: goto label_103968;
        case 0x10396cu: goto label_10396c;
        case 0x103970u: goto label_103970;
        case 0x103974u: goto label_103974;
        case 0x103978u: goto label_103978;
        case 0x10397cu: goto label_10397c;
        case 0x103980u: goto label_103980;
        case 0x103984u: goto label_103984;
        case 0x103988u: goto label_103988;
        case 0x10398cu: goto label_10398c;
        case 0x103990u: goto label_103990;
        case 0x103994u: goto label_103994;
        case 0x103998u: goto label_103998;
        case 0x10399cu: goto label_10399c;
        case 0x1039a0u: goto label_1039a0;
        case 0x1039a4u: goto label_1039a4;
        case 0x1039a8u: goto label_1039a8;
        case 0x1039acu: goto label_1039ac;
        case 0x1039b0u: goto label_1039b0;
        case 0x1039b4u: goto label_1039b4;
        case 0x1039b8u: goto label_1039b8;
        case 0x1039bcu: goto label_1039bc;
        case 0x1039c0u: goto label_1039c0;
        case 0x1039c4u: goto label_1039c4;
        case 0x1039c8u: goto label_1039c8;
        case 0x1039ccu: goto label_1039cc;
        case 0x1039d0u: goto label_1039d0;
        case 0x1039d4u: goto label_1039d4;
        case 0x1039d8u: goto label_1039d8;
        case 0x1039dcu: goto label_1039dc;
        case 0x1039e0u: goto label_1039e0;
        case 0x1039e4u: goto label_1039e4;
        case 0x1039e8u: goto label_1039e8;
        case 0x1039ecu: goto label_1039ec;
        case 0x1039f0u: goto label_1039f0;
        case 0x1039f4u: goto label_1039f4;
        case 0x1039f8u: goto label_1039f8;
        case 0x1039fcu: goto label_1039fc;
        case 0x103a00u: goto label_103a00;
        default: break;
    }

    ctx->pc = 0x103860u;

label_103860:
    // 0x103860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_103864:
    // 0x103864: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x103864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_103868:
    // 0x103868: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x103868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_10386c:
    // 0x10386c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10386cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_103870:
    // 0x103870: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_103874:
    // 0x103874: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_103878:
    // 0x103878: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x103878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_10387c:
    // 0x10387c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10387cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_103880:
    // 0x103880: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x103880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_103884:
    // 0x103884: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x103884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_103888:
    // 0x103888: 0x8e540024  lw          $s4, 0x24($s2)
    ctx->pc = 0x103888u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_10388c:
    // 0x10388c: 0x8e910044  lw          $s1, 0x44($s4)
    ctx->pc = 0x10388cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_103890:
    // 0x103890: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x103890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_103894:
    // 0x103894: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_103898:
    if (ctx->pc == 0x103898u) {
        ctx->pc = 0x103898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103894u;
        // 0x103898: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10389Cu;
        goto label_10389c;
    }
    ctx->pc = 0x103894u;
    {
        const bool branch_taken_0x103894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103894u;
        // 0x103898: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103894) {
            ctx->pc = 0x1038B4u;
            goto label_1038b4;
        }
    }
    ctx->pc = 0x10389Cu;
label_10389c:
    // 0x10389c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x10389cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_1038a0:
    // 0x1038a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1038a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1038a4:
    // 0x1038a4: 0xc068584  jal         func_1A1610
label_1038a8:
    if (ctx->pc == 0x1038A8u) {
        ctx->pc = 0x1038A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038A4u;
        // 0x1038a8: 0x248405e8  addiu       $a0, $a0, 0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1038ACu;
        goto label_1038ac;
    }
    ctx->pc = 0x1038A4u;
    SET_GPR_U32(ctx, 31, 0x1038ACu);
    ctx->pc = 0x1038A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038A4u;
    // 0x1038a8: 0x248405e8  addiu       $a0, $a0, 0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1038A4u, 0x1038ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038ACu;
label_1038ac:
    // 0x1038ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1038acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1038b0:
    // 0x1038b0: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1038b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_1038b4:
    // 0x1038b4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1038b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1038b8:
    // 0x1038b8: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_1038bc:
    if (ctx->pc == 0x1038BCu) {
        ctx->pc = 0x1038BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038B8u;
        // 0x1038bc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1038C0u;
        goto label_1038c0;
    }
    ctx->pc = 0x1038B8u;
    {
        const bool branch_taken_0x1038b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1038b8) {
            ctx->pc = 0x1038BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1038B8u;
            // 0x1038bc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1039C8u;
            goto label_1039c8;
        }
    }
    ctx->pc = 0x1038C0u;
label_1038c0:
    // 0x1038c0: 0xc06a26e  jal         func_1A89B8
label_1038c4:
    if (ctx->pc == 0x1038C4u) {
        ctx->pc = 0x1038C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038C0u;
        // 0x1038c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1038C8u;
        goto label_1038c8;
    }
    ctx->pc = 0x1038C0u;
    SET_GPR_U32(ctx, 31, 0x1038C8u);
    ctx->pc = 0x1038C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038C0u;
    // 0x1038c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1038C0u, 0x1038C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038C8u;
label_1038c8:
    // 0x1038c8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1038c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1038cc:
    // 0x1038cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1038ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1038d0:
    // 0x1038d0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1038d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1038d4:
    // 0x1038d4: 0x24424720  addiu       $v0, $v0, 0x4720
    ctx->pc = 0x1038d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18208));
label_1038d8:
    // 0x1038d8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1038dc:
    if (ctx->pc == 0x1038DCu) {
        ctx->pc = 0x1038E0u;
        goto label_1038e0;
    }
    ctx->pc = 0x1038D8u;
    {
        const bool branch_taken_0x1038d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1038d8) {
            ctx->pc = 0x1038F0u;
            goto label_1038f0;
        }
    }
    ctx->pc = 0x1038E0u;
label_1038e0:
    // 0x1038e0: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x1038e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1038e4:
    // 0x1038e4: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1038e8:
    if (ctx->pc == 0x1038E8u) {
        ctx->pc = 0x1038E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038E4u;
        // 0x1038e8: 0xad130018  sw          $s3, 0x18($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1038ECu;
        goto label_1038ec;
    }
    ctx->pc = 0x1038E4u;
    {
        const bool branch_taken_0x1038e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038E4u;
        // 0x1038e8: 0xad130018  sw          $s3, 0x18($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038e4) {
            ctx->pc = 0x1039E4u;
            goto label_1039e4;
        }
    }
    ctx->pc = 0x1038ECu;
label_1038ec:
    // 0x1038ec: 0x0  nop
    ctx->pc = 0x1038ecu;
    // NOP
label_1038f0:
    // 0x1038f0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_1038f4:
    if (ctx->pc == 0x1038F4u) {
        ctx->pc = 0x1038F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038F0u;
        // 0x1038f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1038F8u;
        goto label_1038f8;
    }
    ctx->pc = 0x1038F0u;
    {
        const bool branch_taken_0x1038f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038F0u;
        // 0x1038f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038f0) {
            ctx->pc = 0x1038FCu;
            goto label_1038fc;
        }
    }
    ctx->pc = 0x1038F8u;
label_1038f8:
    // 0x1038f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1038f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1038fc:
    // 0x1038fc: 0xc068086  jal         func_1A0218
label_103900:
    if (ctx->pc == 0x103900u) {
        ctx->pc = 0x103900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038FCu;
        // 0x103900: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103904u;
        goto label_103904;
    }
    ctx->pc = 0x1038FCu;
    SET_GPR_U32(ctx, 31, 0x103904u);
    ctx->pc = 0x103900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038FCu;
    // 0x103900: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1038FCu, 0x103904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103904u;
label_103904:
    // 0x103904: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x103904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103908:
    // 0x103908: 0x11000021  beqz        $t0, . + 4 + (0x21 << 2)
label_10390c:
    if (ctx->pc == 0x10390Cu) {
        ctx->pc = 0x10390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103908u;
        // 0x10390c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103910u;
        goto label_103910;
    }
    ctx->pc = 0x103908u;
    {
        const bool branch_taken_0x103908 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103908u;
        // 0x10390c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103908) {
            ctx->pc = 0x103990u;
            goto label_103990;
        }
    }
    ctx->pc = 0x103910u;
label_103910:
    // 0x103910: 0xad140010  sw          $s4, 0x10($t0)
    ctx->pc = 0x103910u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 20));
label_103914:
    // 0x103914: 0x8c47b830  lw          $a3, -0x47D0($v0)
    ctx->pc = 0x103914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_103918:
    // 0x103918: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x103918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_10391c:
    // 0x10391c: 0x24a54720  addiu       $a1, $a1, 0x4720
    ctx->pc = 0x10391cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18208));
label_103920:
    // 0x103920: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x103920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_103924:
    // 0x103924: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x103924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
label_103928:
    // 0x103928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10392c:
    // 0x10392c: 0x8ce3004c  lw          $v1, 0x4C($a3)
    ctx->pc = 0x10392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
label_103930:
    // 0x103930: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x103930u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
label_103934:
    // 0x103934: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x103934u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
label_103938:
    // 0x103938: 0xc0667ce  jal         func_199F38
label_10393c:
    if (ctx->pc == 0x10393Cu) {
        ctx->pc = 0x10393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103938u;
        // 0x10393c: 0xad130018  sw          $s3, 0x18($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103940u;
        goto label_103940;
    }
    ctx->pc = 0x103938u;
    SET_GPR_U32(ctx, 31, 0x103940u);
    ctx->pc = 0x10393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103938u;
    // 0x10393c: 0xad130018  sw          $s3, 0x18($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F38u, 0x103938u, 0x103940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103940u;
label_103940:
    // 0x103940: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x103940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_103944:
    // 0x103944: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x103944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_103948:
    // 0x103948: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x103948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_10394c:
    // 0x10394c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10394cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_103950:
    // 0x103950: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x103950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_103954:
    // 0x103954: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x103954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_103958:
    // 0x103958: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x103958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_10395c:
    // 0x10395c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x10395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_103960:
    // 0x103960: 0x38e70002  xori        $a3, $a3, 0x2
    ctx->pc = 0x103960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
label_103964:
    // 0x103964: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x103964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_103968:
    // 0x103968: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x103968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_10396c:
    // 0x10396c: 0x67300a  movz        $a2, $v1, $a3
    ctx->pc = 0x10396cu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_103970:
    // 0x103970: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x103970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_103974:
    // 0x103974: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x103974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_103978:
    // 0x103978: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x103978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_10397c:
    // 0x10397c: 0x40f809  jalr        $v0
label_103980:
    if (ctx->pc == 0x103980u) {
        ctx->pc = 0x103980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10397Cu;
        // 0x103980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103984u;
        goto label_103984;
    }
    ctx->pc = 0x10397Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x103984u);
        ctx->pc = 0x103980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10397Cu;
        // 0x103980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10397Cu, 0x103984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103984u;
label_103984:
    // 0x103984: 0x10000018  b           . + 4 + (0x18 << 2)
label_103988:
    if (ctx->pc == 0x103988u) {
        ctx->pc = 0x103988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103984u;
        // 0x103988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10398Cu;
        goto label_10398c;
    }
    ctx->pc = 0x103984u;
    {
        const bool branch_taken_0x103984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103984u;
        // 0x103988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103984) {
            ctx->pc = 0x1039E8u;
            goto label_1039e8;
        }
    }
    ctx->pc = 0x10398Cu;
label_10398c:
    // 0x10398c: 0x0  nop
    ctx->pc = 0x10398cu;
    // NOP
label_103990:
    // 0x103990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x103990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_103994:
    // 0x103994: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_103998:
    // 0x103998: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x103998u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_10399c:
    // 0x10399c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10399cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1039a0:
    // 0x1039a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1039a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1039a4:
    // 0x1039a4: 0x24c61c28  addiu       $a2, $a2, 0x1C28
    ctx->pc = 0x1039a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7208));
label_1039a8:
    // 0x1039a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1039a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1039ac:
    // 0x1039ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1039acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1039b0:
    // 0x1039b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1039b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1039b4:
    // 0x1039b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1039b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1039b8:
    // 0x1039b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1039b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1039bc:
    // 0x1039bc: 0x8041606  j           func_105818
label_1039c0:
    if (ctx->pc == 0x1039C0u) {
        ctx->pc = 0x1039C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039BCu;
        // 0x1039c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1039C4u;
        goto label_1039c4;
    }
    ctx->pc = 0x1039BCu;
    ctx->pc = 0x1039C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1039BCu;
    // 0x1039c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105818u;
    ApSCDEntError__FP15BsSCDEntControliPci_0x105818(rdram, ctx, runtime); return;
    ctx->pc = 0x1039C4u;
label_1039c4:
    // 0x1039c4: 0x0  nop
    ctx->pc = 0x1039c4u;
    // NOP
label_1039c8:
    // 0x1039c8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1039c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1039cc:
    // 0x1039cc: 0x24424720  addiu       $v0, $v0, 0x4720
    ctx->pc = 0x1039ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18208));
label_1039d0:
    // 0x1039d0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_1039d4:
    if (ctx->pc == 0x1039D4u) {
        ctx->pc = 0x1039D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039D0u;
        // 0x1039d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1039D8u;
        goto label_1039d8;
    }
    ctx->pc = 0x1039D0u;
    {
        const bool branch_taken_0x1039d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1039d0) {
            ctx->pc = 0x1039D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1039D0u;
            // 0x1039d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1039E8u;
            goto label_1039e8;
        }
    }
    ctx->pc = 0x1039D8u;
label_1039d8:
    // 0x1039d8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1039d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1039dc:
    // 0x1039dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1039dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1039e0:
    // 0x1039e0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x1039e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_1039e4:
    // 0x1039e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1039e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1039e8:
    // 0x1039e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1039e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1039ec:
    // 0x1039ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1039ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1039f0:
    // 0x1039f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1039f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1039f4:
    // 0x1039f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1039f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1039f8:
    // 0x1039f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1039f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1039fc:
    // 0x1039fc: 0x3e00008  jr          $ra
label_103a00:
    if (ctx->pc == 0x103A00u) {
        ctx->pc = 0x103A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039FCu;
        // 0x103a00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103A04u;
        goto label_fallthrough_0x1039fc;
    }
    ctx->pc = 0x1039FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1039FCu;
        // 0x103a00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1039FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1039fc:
    ctx->pc = 0x103A04u;
}
