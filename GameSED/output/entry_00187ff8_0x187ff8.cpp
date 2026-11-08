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

// Function: entry_00187ff8
// Address: 0x187ff8 - 0x1880f8
void entry_00187ff8_0x187ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187ff8_0x187ff8");
#endif

    switch (ctx->pc) {
        case 0x188008u: goto label_188008;
        case 0x1880e4u: goto label_1880e4;
        case 0x1880f0u: goto label_1880f0;
        default: break;
    }

    ctx->pc = 0x187ff8u;

    // 0x187ff8: 0x2610d640  addiu       $s0, $s0, -0x29C0
    ctx->pc = 0x187ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956608));
    // 0x187ffc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x187ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x188000: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x188000u;
    SET_GPR_U32(ctx, 31, 0x188008u);
    ctx->pc = 0x188004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188000u;
    // 0x188004: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x188000u, 0x188008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188008u;
label_188008:
    // 0x188008: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x188008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18800c: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x18800cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x188010: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x188010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x188014: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x188014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x188018: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x188018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18801c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x18801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x188020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188024: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x188024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x188028: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x188028u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x18802c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x18802cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x188030: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x188030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x188034: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x188034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x188038: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x188038u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x18803c: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x18803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x188040: 0x3c0a2000  lui         $t2, 0x2000
    ctx->pc = 0x188040u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8192 << 16));
    // 0x188044: 0x354a0040  ori         $t2, $t2, 0x40
    ctx->pc = 0x188044u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)64);
    // 0x188048: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x188048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18804c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x18804cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x188050: 0x34a50030  ori         $a1, $a1, 0x30
    ctx->pc = 0x188050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48);
    // 0x188054: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x188054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x188058: 0xdf848c80  ld          $a0, -0x7380($gp)
    ctx->pc = 0x188058u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x18805c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x18805cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x188060: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x188060u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x188064: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x188064u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x188068: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x188068u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x18806c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x18806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x188070: 0xfd470008  sd          $a3, 0x8($t2)
    ctx->pc = 0x188070u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 7));
    // 0x188074: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x188074u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x188078: 0x94b7c  dsll32      $t1, $t1, 13
    ctx->pc = 0x188078u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 13));
    // 0x18807c: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x18807cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
    // 0x188080: 0x3c0a2000  lui         $t2, 0x2000
    ctx->pc = 0x188080u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8192 << 16));
    // 0x188084: 0x354a0050  ori         $t2, $t2, 0x50
    ctx->pc = 0x188084u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)80);
    // 0x188088: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x188088u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18808c: 0x1461023  subu        $v0, $t2, $a2
    ctx->pc = 0x18808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x188090: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x188090u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x188094: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x188094u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x188098: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x188098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x18809c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1880a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1880a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1880a4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1880a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1880a8: 0x1432024  and         $a0, $t2, $v1
    ctx->pc = 0x1880a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1880ac: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1880acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1880b0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1880b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1880b4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1880b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1880b8: 0x2463d000  addiu       $v1, $v1, -0x3000
    ctx->pc = 0x1880b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955008));
    // 0x1880bc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1880bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1880c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1880c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1880c4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1880c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1880c8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1880c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1880cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1880ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1880d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1880D0u;
    {
        const bool branch_taken_0x1880d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1880D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880D0u;
        // 0x1880d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880d0) {
            ctx->pc = 0x1880F8u;
            return;
        }
    }
    ctx->pc = 0x1880D8u;
    // 0x1880d8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1880d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1880dc: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1880DCu;
    SET_GPR_U32(ctx, 31, 0x1880E4u);
    ctx->pc = 0x1880E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1880DCu;
    // 0x1880e0: 0x24847f18  addiu       $a0, $a0, 0x7F18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1880DCu, 0x1880E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1880E4u;
label_1880e4:
    // 0x1880e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1880e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1880e8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1880E8u;
    SET_GPR_U32(ctx, 31, 0x1880F0u);
    ctx->pc = 0x1880ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1880E8u;
    // 0x1880ec: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1880E8u, 0x1880F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1880F0u;
label_1880f0:
    // 0x1880f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1880F0u;
    {
        const bool branch_taken_0x1880f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F0u;
        // 0x1880f4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880f0) {
            ctx->pc = 0x188100u;
            return;
        }
    }
    ctx->pc = 0x1880F8u;
}
