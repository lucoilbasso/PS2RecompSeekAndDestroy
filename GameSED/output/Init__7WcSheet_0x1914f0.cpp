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

// Function: Init__7WcSheet
// Address: 0x1914f0 - 0x191610
void Init__7WcSheet_0x1914f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7WcSheet_0x1914f0");
#endif

    switch (ctx->pc) {
        case 0x19150cu: goto label_19150c;
        case 0x191584u: goto label_191584;
        case 0x1915a4u: goto label_1915a4;
        case 0x1915c0u: goto label_1915c0;
        default: break;
    }

    ctx->pc = 0x1914f0u;

    // 0x1914f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1914f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1914f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1914f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1914f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1914f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1914fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1914fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x191500: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x191500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x191504: 0xc061258  jal         func_184960
    ctx->pc = 0x191504u;
    SET_GPR_U32(ctx, 31, 0x19150Cu);
    ctx->pc = 0x191508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191504u;
    // 0x191508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x191504u, 0x19150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19150Cu;
label_19150c:
    // 0x19150c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x19150cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x191510: 0x240200a6  addiu       $v0, $zero, 0xA6
    ctx->pc = 0x191510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x191514: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x191514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x191518: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x191518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x19151c: 0xae0001dc  sw          $zero, 0x1DC($s0)
    ctx->pc = 0x19151cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    // 0x191520: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x191520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x191524: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x191524u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x191528: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x191528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19152c: 0x90c4ee68  lbu         $a0, -0x1198($a2)
    ctx->pc = 0x19152cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x21EE68u));
    // 0x191530: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x191530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x191534: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x191534u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x191538: 0x8ca2d630  lw          $v0, -0x29D0($a1)
    ctx->pc = 0x191538u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x19153c: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x19153cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x191540: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x191540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191544: 0x261001d0  addiu       $s0, $s0, 0x1D0
    ctx->pc = 0x191544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x191548: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x191548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19154c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x19154cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x191550: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x191550u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x191554: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x191554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191558: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x191558u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x19155c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19155cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191560: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x191560u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x191564: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x191564u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x191568: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x191568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x19156c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19156cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x191570: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x191570u;
    {
        const bool branch_taken_0x191570 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x191574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191570u;
        // 0x191574: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191570) {
            ctx->pc = 0x19157Cu;
            goto label_19157c;
        }
    }
    ctx->pc = 0x191578u;
    // 0x191578: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x191578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19157c:
    // 0x19157c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x19157Cu;
    SET_GPR_U32(ctx, 31, 0x191584u);
    ctx->pc = 0x191580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19157Cu;
    // 0x191580: 0x240507f0  addiu       $a1, $zero, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x19157Cu, 0x191584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191584u;
label_191584:
    // 0x191584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x191584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191588: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x191588u;
    {
        const bool branch_taken_0x191588 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x191588) {
            ctx->pc = 0x19158Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191588u;
            // 0x19158c: 0xaca007e0  sw          $zero, 0x7E0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1915B0u;
            goto label_1915b0;
        }
    }
    ctx->pc = 0x191590u;
    // 0x191590: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x191590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x191594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191598: 0x24a581b0  addiu       $a1, $a1, -0x7E50
    ctx->pc = 0x191598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    // 0x19159c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x19159Cu;
    SET_GPR_U32(ctx, 31, 0x1915A4u);
    ctx->pc = 0x1915A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19159Cu;
    // 0x1915a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x19159Cu, 0x1915A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1915A4u;
label_1915a4:
    // 0x1915a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1915A4u;
    {
        const bool branch_taken_0x1915a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1915A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915A4u;
        // 0x1915a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915a4) {
            ctx->pc = 0x1915FCu;
            goto label_1915fc;
        }
    }
    ctx->pc = 0x1915ACu;
    // 0x1915ac: 0x0  nop
    ctx->pc = 0x1915acu;
    // NOP
label_1915b0:
    // 0x1915b0: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x1915b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1915b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1915b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1915b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915bc: 0x0  nop
    ctx->pc = 0x1915bcu;
    // NOP
label_1915c0:
    // 0x1915c0: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1915C0u;
    {
        const bool branch_taken_0x1915c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1915c0) {
            ctx->pc = 0x1915C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1915C0u;
            // 0x1915c4: 0x2482ffe0  addiu       $v0, $a0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1915CCu;
            goto label_1915cc;
        }
    }
    ctx->pc = 0x1915C8u;
    // 0x1915c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1915c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1915cc:
    // 0x1915cc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1915ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1915d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1915d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1915d4: 0x2862003f  slti        $v0, $v1, 0x3F
    ctx->pc = 0x1915d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x1915d8: 0x0  nop
    ctx->pc = 0x1915d8u;
    // NOP
    // 0x1915dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1915DCu;
    {
        const bool branch_taken_0x1915dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1915E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1915DCu;
        // 0x1915e0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915dc) {
            ctx->pc = 0x1915C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1915c0;
        }
    }
    ctx->pc = 0x1915E4u;
    // 0x1915e4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1915e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1915e8: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x1915e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x1915ec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1915ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1915f0: 0xaca307e0  sw          $v1, 0x7E0($a1)
    ctx->pc = 0x1915f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 3));
    // 0x1915f4: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x1915f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x1915f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1915f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1915fc:
    // 0x1915fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1915fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x191600: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x191600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191604: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x191604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x191608: 0x3e00008  jr          $ra
    ctx->pc = 0x191608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191608u;
        // 0x19160c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191610u;
}
