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

// Function: DrawFunc__8WcMulobjP8WcEntity
// Address: 0x198498 - 0x198b40
void DrawFunc__8WcMulobjP8WcEntity_0x198498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__8WcMulobjP8WcEntity_0x198498");
#endif

    switch (ctx->pc) {
        case 0x1984ecu: goto label_1984ec;
        case 0x1984f4u: goto label_1984f4;
        case 0x198500u: goto label_198500;
        case 0x198510u: goto label_198510;
        case 0x198530u: goto label_198530;
        case 0x198538u: goto label_198538;
        case 0x198578u: goto label_198578;
        case 0x1985f0u: goto label_1985f0;
        case 0x198610u: goto label_198610;
        case 0x198650u: goto label_198650;
        case 0x198658u: goto label_198658;
        case 0x19867cu: goto label_19867c;
        case 0x198988u: goto label_198988;
        case 0x198994u: goto label_198994;
        case 0x1989acu: goto label_1989ac;
        case 0x1989c0u: goto label_1989c0;
        case 0x1989d8u: goto label_1989d8;
        case 0x1989f0u: goto label_1989f0;
        case 0x198a1cu: goto label_198a1c;
        case 0x198a30u: goto label_198a30;
        case 0x198a38u: goto label_198a38;
        case 0x198a98u: goto label_198a98;
        case 0x198aa0u: goto label_198aa0;
        case 0x198ab4u: goto label_198ab4;
        case 0x198adcu: goto label_198adc;
        case 0x198ae4u: goto label_198ae4;
        case 0x198af8u: goto label_198af8;
        default: break;
    }

    ctx->pc = 0x198498u;

    // 0x198498: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x198498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19849c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1984a0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1984a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1984a4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1984a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1984a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1984a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984ac: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1984acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1984b0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1984b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1984b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1984b8: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x1984b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1984bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1984c0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1984c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1984c4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1984c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1984c8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1984c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1984cc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1984ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1984d0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1984d4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1984d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1984d8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1984D8u;
    {
        const bool branch_taken_0x1984d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1984DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984D8u;
        // 0x1984dc: 0x26b10150  addiu       $s1, $s5, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984d8) {
            ctx->pc = 0x1985A8u;
            goto label_1985a8;
        }
    }
    ctx->pc = 0x1984E0u;
    // 0x1984e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1984e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984e4: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1984E4u;
    SET_GPR_U32(ctx, 31, 0x1984ECu);
    ctx->pc = 0x1984E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1984E4u;
    // 0x1984e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1984E4u, 0x1984ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984ECu;
label_1984ec:
    // 0x1984ec: 0xc065eec  jal         func_197BB0
    ctx->pc = 0x1984ECu;
    SET_GPR_U32(ctx, 31, 0x1984F4u);
    ctx->pc = 0x1984F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1984ECu;
    // 0x1984f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197BB0u, 0x1984ECu, 0x1984F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984F4u;
label_1984f4:
    // 0x1984f4: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x1984f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x1984f8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1984F8u;
    SET_GPR_U32(ctx, 31, 0x198500u);
    ctx->pc = 0x1984FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1984F8u;
    // 0x1984fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1984F8u, 0x198500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198500u;
label_198500:
    // 0x198500: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198504: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x198504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198508: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x198508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19850c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x19850cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_198510:
    // 0x198510: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198514: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198518: 0x0  nop
    ctx->pc = 0x198518u;
    // NOP
    // 0x19851c: 0x0  nop
    ctx->pc = 0x19851cu;
    // NOP
    // 0x198520: 0x0  nop
    ctx->pc = 0x198520u;
    // NOP
    // 0x198524: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198524u;
    {
        const bool branch_taken_0x198524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198524) {
            ctx->pc = 0x198510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198510;
        }
    }
    ctx->pc = 0x19852Cu;
    // 0x19852c: 0x0  nop
    ctx->pc = 0x19852cu;
    // NOP
label_198530:
    // 0x198530: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x198530u;
    SET_GPR_U32(ctx, 31, 0x198538u);
    ctx->pc = 0x198534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198530u;
    // 0x198534: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x198530u, 0x198538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198538u;
label_198538:
    // 0x198538: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x198538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x19853c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19853Cu;
    {
        const bool branch_taken_0x19853c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x198540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19853Cu;
        // 0x198540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19853c) {
            ctx->pc = 0x198530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198530;
        }
    }
    ctx->pc = 0x198544u;
    // 0x198544: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x198544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x198548: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x198548u;
    {
        const bool branch_taken_0x198548 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198548u;
        // 0x19854c: 0xaf828c70  sw          $v0, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198548) {
            ctx->pc = 0x198568u;
            goto label_198568;
        }
    }
    ctx->pc = 0x198550u;
    // 0x198550: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x198550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x198554: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x198554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x198558: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x198558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19855c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x19855cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x198560: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x198560u;
    {
        const bool branch_taken_0x198560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198560u;
        // 0x198564: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198560) {
            ctx->pc = 0x198578u;
            goto label_198578;
        }
    }
    ctx->pc = 0x198568u;
label_198568:
    // 0x198568: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x198568u;
    {
        const bool branch_taken_0x198568 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x19856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198568u;
        // 0x19856c: 0x8f838c54  lw          $v1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198568) {
            ctx->pc = 0x19857Cu;
            goto label_19857c;
        }
    }
    ctx->pc = 0x198570u;
    // 0x198570: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x198570u;
    SET_GPR_U32(ctx, 31, 0x198578u);
    ctx->pc = 0x198574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198570u;
    // 0x198574: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x198570u, 0x198578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198578u;
label_198578:
    // 0x198578: 0x8f838c54  lw          $v1, -0x73AC($gp)
    ctx->pc = 0x198578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
label_19857c:
    // 0x19857c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x19857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x198580: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x198580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x198584: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198588: 0xac700030  sw          $s0, 0x30($v1)
    ctx->pc = 0x198588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
    // 0x19858c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x198590: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x198590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x198594: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x198594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x198598: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x198598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x19859c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x19859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1985a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1985a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1985a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1985a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1985a8:
    // 0x1985a8: 0x26960160  addiu       $s6, $s4, 0x160
    ctx->pc = 0x1985a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
    // 0x1985ac: 0x8ed00004  lw          $s0, 0x4($s6)
    ctx->pc = 0x1985acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1985b0: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1985B0u;
    {
        const bool branch_taken_0x1985b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1985B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985B0u;
        // 0x1985b4: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985b0) {
            ctx->pc = 0x198618u;
            goto label_198618;
        }
    }
    ctx->pc = 0x1985B8u;
    // 0x1985b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1985b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1985bc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x1985bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1985c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1985c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985c4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1985c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1985c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1985c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1985cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1985ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1985d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1985d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1985d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1985d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1985d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1985d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1985dc: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1985DCu;
    {
        const bool branch_taken_0x1985dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1985E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985DCu;
        // 0x1985e0: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985dc) {
            ctx->pc = 0x1985E8u;
            goto label_1985e8;
        }
    }
    ctx->pc = 0x1985E4u;
    // 0x1985e4: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1985e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1985e8:
    // 0x1985e8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1985E8u;
    SET_GPR_U32(ctx, 31, 0x1985F0u);
    ctx->pc = 0x1985ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1985E8u;
    // 0x1985ec: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1985E8u, 0x1985F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1985F0u;
label_1985f0:
    // 0x1985f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1985f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985f4: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1985F4u;
    {
        const bool branch_taken_0x1985f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1985f4) {
            ctx->pc = 0x1985F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1985F4u;
            // 0x1985f8: 0xaed00004  sw          $s0, 0x4($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198614u;
            goto label_198614;
        }
    }
    ctx->pc = 0x1985FCu;
    // 0x1985fc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1985fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x198600: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198604: 0x24a583f0  addiu       $a1, $a1, -0x7C10
    ctx->pc = 0x198604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935536));
    // 0x198608: 0xc068186  jal         func_1A0618
    ctx->pc = 0x198608u;
    SET_GPR_U32(ctx, 31, 0x198610u);
    ctx->pc = 0x19860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198608u;
    // 0x19860c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x198608u, 0x198610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198610u;
label_198610:
    // 0x198610: 0xaed00004  sw          $s0, 0x4($s6)
    ctx->pc = 0x198610u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 16));
label_198614:
    // 0x198614: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x198614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_198618:
    // 0x198618: 0x2473d650  addiu       $s3, $v1, -0x29B0
    ctx->pc = 0x198618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x19861c: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x19861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x198620: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x198620u;
    {
        const bool branch_taken_0x198620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198620u;
        // 0x198624: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198620) {
            ctx->pc = 0x198648u;
            goto label_198648;
        }
    }
    ctx->pc = 0x198628u;
    // 0x198628: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x198628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x19862c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x19862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198630: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x198630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x198634: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x198634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x198638: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x198638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19863c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19863Cu;
    {
        const bool branch_taken_0x19863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19863Cu;
        // 0x198640: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19863c) {
            ctx->pc = 0x19867Cu;
            goto label_19867c;
        }
    }
    ctx->pc = 0x198644u;
    // 0x198644: 0x0  nop
    ctx->pc = 0x198644u;
    // NOP
label_198648:
    // 0x198648: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x198648u;
    SET_GPR_U32(ctx, 31, 0x198650u);
    ctx->pc = 0x19864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198648u;
    // 0x19864c: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x198648u, 0x198650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198650u;
label_198650:
    // 0x198650: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x198650u;
    SET_GPR_U32(ctx, 31, 0x198658u);
    ctx->pc = 0x198654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198650u;
    // 0x198654: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x198650u, 0x198658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198658u;
label_198658:
    // 0x198658: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x198658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x19865c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x19865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x198660: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x198660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x198664: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x198664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x198668: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19866c: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x19866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x198670: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x198670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x198674: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x198674u;
    SET_GPR_U32(ctx, 31, 0x19867Cu);
    ctx->pc = 0x198678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198674u;
    // 0x198678: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x198674u, 0x19867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19867Cu;
label_19867c:
    // 0x19867c: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x19867cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198680: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x198680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198684: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x198684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x198688: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x198688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x19868c: 0x8e85019c  lw          $a1, 0x19C($s4)
    ctx->pc = 0x19868cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x198690: 0x30441000  andi        $a0, $v0, 0x1000
    ctx->pc = 0x198690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x198694: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x198694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x198698: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x198698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x19869c: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x19869cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1986a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1986a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986a4: 0xaee30008  sw          $v1, 0x8($s7)
    ctx->pc = 0x1986a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 3));
    // 0x1986a8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1986a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986ac: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1986acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1986b0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1986B0u;
    {
        const bool branch_taken_0x1986b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986B0u;
        // 0x1986b4: 0x8fc60164  lw          $a2, 0x164($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986b0) {
            ctx->pc = 0x1986C8u;
            goto label_1986c8;
        }
    }
    ctx->pc = 0x1986B8u;
    // 0x1986b8: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x1986b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1986bc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1986bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1986c0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1986c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1986c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1986c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1986c8:
    // 0x1986c8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1986c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986cc: 0x260203c0  addiu       $v0, $s0, 0x3C0
    ctx->pc = 0x1986ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x1986d0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1986d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1986d4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1986d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1986d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1986d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1986dc: 0xc6800190  lwc1        $f0, 0x190($s4)
    ctx->pc = 0x1986dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1986e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1986e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1986e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1986e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1986e8: 0xe60003d8  swc1        $f0, 0x3D8($s0)
    ctx->pc = 0x1986e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 984), bits); }
    // 0x1986ec: 0xc4c00174  lwc1        $f0, 0x174($a2)
    ctx->pc = 0x1986ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1986f0: 0xc4c10170  lwc1        $f1, 0x170($a2)
    ctx->pc = 0x1986f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1986f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1986f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1986f8: 0xe60103dc  swc1        $f1, 0x3DC($s0)
    ctx->pc = 0x1986f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 988), bits); }
    // 0x1986fc: 0xc68001a0  lwc1        $f0, 0x1A0($s4)
    ctx->pc = 0x1986fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198700: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x198700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198704: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x198704u;
    {
        const bool branch_taken_0x198704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198704) {
            ctx->pc = 0x198708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198704u;
            // 0x198708: 0xe60203e4  swc1        $f2, 0x3E4($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 996), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x198740u;
            goto label_198740;
        }
    }
    ctx->pc = 0x19870Cu;
    // 0x19870c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x19870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x198710: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x198710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x198714: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x198714u;
    {
        const bool branch_taken_0x198714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198714) {
            ctx->pc = 0x198718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198714u;
            // 0x198718: 0xe60003e4  swc1        $f0, 0x3E4($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 996), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x198738u;
            goto label_198738;
        }
    }
    ctx->pc = 0x19871Cu;
    // 0x19871c: 0xe60003e0  swc1        $f0, 0x3E0($s0)
    ctx->pc = 0x19871cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
    // 0x198720: 0xc7818d88  lwc1        $f1, -0x7278($gp)
    ctx->pc = 0x198720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198724: 0xc68001a0  lwc1        $f0, 0x1A0($s4)
    ctx->pc = 0x198724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198728: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x198728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19872c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19872Cu;
    {
        const bool branch_taken_0x19872c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19872Cu;
        // 0x198730: 0xe60003e4  swc1        $f0, 0x3E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 996), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19872c) {
            ctx->pc = 0x19874Cu;
            goto label_19874c;
        }
    }
    ctx->pc = 0x198734u;
    // 0x198734: 0x0  nop
    ctx->pc = 0x198734u;
    // NOP
label_198738:
    // 0x198738: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x198738u;
    {
        const bool branch_taken_0x198738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198738u;
        // 0x19873c: 0xe60203e0  swc1        $f2, 0x3E0($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x198738) {
            ctx->pc = 0x19874Cu;
            goto label_19874c;
        }
    }
    ctx->pc = 0x198740u;
label_198740:
    // 0x198740: 0xc68001a0  lwc1        $f0, 0x1A0($s4)
    ctx->pc = 0x198740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198744: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x198744u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x198748: 0xe60003e0  swc1        $f0, 0x3E0($s0)
    ctx->pc = 0x198748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 992), bits); }
label_19874c:
    // 0x19874c: 0x8fc201c4  lw          $v0, 0x1C4($fp)
    ctx->pc = 0x19874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 452)));
    // 0x198750: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198750u;
    {
        const bool branch_taken_0x198750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198750u;
        // 0x198754: 0xae0403ec  sw          $a0, 0x3EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198750) {
            ctx->pc = 0x19876Cu;
            goto label_19876c;
        }
    }
    ctx->pc = 0x198758u;
    // 0x198758: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x198758u;
    {
        const bool branch_taken_0x198758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x198758) {
            ctx->pc = 0x19875Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198758u;
            // 0x19875c: 0x8ea201a8  lw          $v0, 0x1A8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198770u;
            goto label_198770;
        }
    }
    ctx->pc = 0x198760u;
    // 0x198760: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x198760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198764: 0x3042f7ff  andi        $v0, $v0, 0xF7FF
    ctx->pc = 0x198764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63487);
    // 0x198768: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x198768u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_19876c:
    // 0x19876c: 0x8ea201a8  lw          $v0, 0x1A8($s5)
    ctx->pc = 0x19876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 424)));
label_198770:
    // 0x198770: 0xae1e03d0  sw          $fp, 0x3D0($s0)
    ctx->pc = 0x198770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 30));
    // 0x198774: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198774u;
    {
        const bool branch_taken_0x198774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198774u;
        // 0x198778: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198774) {
            ctx->pc = 0x198784u;
            goto label_198784;
        }
    }
    ctx->pc = 0x19877Cu;
    // 0x19877c: 0x8fc201bc  lw          $v0, 0x1BC($fp)
    ctx->pc = 0x19877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 444)));
    // 0x198780: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x198780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_198784:
    // 0x198784: 0xae0303d4  sw          $v1, 0x3D4($s0)
    ctx->pc = 0x198784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 980), GPR_U32(ctx, 3));
    // 0x198788: 0xde220030  ld          $v0, 0x30($s1)
    ctx->pc = 0x198788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x19878c: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19878Cu;
    {
        const bool branch_taken_0x19878c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x198790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19878Cu;
        // 0x198790: 0xfe020220  sd          $v0, 0x220($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 544), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19878c) {
            ctx->pc = 0x1987ACu;
            goto label_1987ac;
        }
    }
    ctx->pc = 0x198794u;
    // 0x198794: 0xc4c10154  lwc1        $f1, 0x154($a2)
    ctx->pc = 0x198794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198798: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x198798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x19879c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19879cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1987a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1987a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1987a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1987a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1987a8: 0xe6000228  swc1        $f0, 0x228($s0)
    ctx->pc = 0x1987a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
label_1987ac:
    // 0x1987ac: 0xc4c00180  lwc1        $f0, 0x180($a2)
    ctx->pc = 0x1987acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1987b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1987b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1987b4: 0xae02021c  sw          $v0, 0x21C($s0)
    ctx->pc = 0x1987b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 2));
    // 0x1987b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1987b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1987bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1987bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1987c0: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x1987c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
    // 0x1987c4: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x1987c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x1987c8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1987c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1987cc: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x1987ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x1987d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1987d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1987d4: 0xc4c0017c  lwc1        $f0, 0x17C($a2)
    ctx->pc = 0x1987d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1987d8: 0xe6000214  swc1        $f0, 0x214($s0)
    ctx->pc = 0x1987d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
    // 0x1987dc: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x1987dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x1987e0: 0xfe0301d0  sd          $v1, 0x1D0($s0)
    ctx->pc = 0x1987e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 464), GPR_U64(ctx, 3));
    // 0x1987e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1987e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1987e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1987e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1987ec: 0xfe0401d8  sd          $a0, 0x1D8($s0)
    ctx->pc = 0x1987ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 472), GPR_U64(ctx, 4));
    // 0x1987f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1987f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1987f4: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1987F4u;
    {
        const bool branch_taken_0x1987f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1987F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987F4u;
        // 0x1987f8: 0xe6000218  swc1        $f0, 0x218($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987f4) {
            ctx->pc = 0x19881Cu;
            goto label_19881c;
        }
    }
    ctx->pc = 0x1987FCu;
    // 0x1987fc: 0x260201e0  addiu       $v0, $s0, 0x1E0
    ctx->pc = 0x1987fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x198800: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x198800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x198804: 0x3c04302e  lui         $a0, 0x302E
    ctx->pc = 0x198804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12334 << 16));
    // 0x198808: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x198808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x19880c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19880cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x198810: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x198810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x198814: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x198814u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x198818: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x198818u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
label_19881c:
    // 0x19881c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x19881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x198820: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x198820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x198824: 0xfe0201f0  sd          $v0, 0x1F0($s0)
    ctx->pc = 0x198824u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 496), GPR_U64(ctx, 2));
    // 0x198828: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x198828u;
    {
        const bool branch_taken_0x198828 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x19882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198828u;
        // 0x19882c: 0xfe0501f8  sd          $a1, 0x1F8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 504), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198828) {
            ctx->pc = 0x198854u;
            goto label_198854;
        }
    }
    ctx->pc = 0x198830u;
    // 0x198830: 0x8cc20158  lw          $v0, 0x158($a2)
    ctx->pc = 0x198830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 344)));
    // 0x198834: 0x24040368  addiu       $a0, $zero, 0x368
    ctx->pc = 0x198834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x198838: 0x8e83019c  lw          $v1, 0x19C($s4)
    ctx->pc = 0x198838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x19883c: 0xfe050208  sd          $a1, 0x208($s0)
    ctx->pc = 0x19883cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 520), GPR_U64(ctx, 5));
    // 0x198840: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x198840u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198844: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x198844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x198848: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x19884c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19884cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x198850: 0xfe030200  sd          $v1, 0x200($s0)
    ctx->pc = 0x198850u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 512), GPR_U64(ctx, 3));
label_198854:
    // 0x198854: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x198854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198858: 0x260b0240  addiu       $t3, $s0, 0x240
    ctx->pc = 0x198858u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x19885c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x19885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x198860: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x198860u;
    {
        const bool branch_taken_0x198860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198860u;
        // 0x198864: 0x26070250  addiu       $a3, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198860) {
            ctx->pc = 0x1988A8u;
            goto label_1988a8;
        }
    }
    ctx->pc = 0x198868u;
    // 0x198868: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x198868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x19886c: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x19886cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x198870: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x198870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x198874: 0x26030260  addiu       $v1, $s0, 0x260
    ctx->pc = 0x198874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x198878: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x198878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19887c: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x19887cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x198880: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x198880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x198884: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x198884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x198888: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x198888u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x19888c: 0x26070270  addiu       $a3, $s0, 0x270
    ctx->pc = 0x19888cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x198890: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x198890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x198894: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x198894u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x198898: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x198898u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x19889c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19889cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1988a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1988A0u;
    {
        const bool branch_taken_0x1988a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1988A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988A0u;
        // 0x1988a4: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988a0) {
            ctx->pc = 0x1988D8u;
            goto label_1988d8;
        }
    }
    ctx->pc = 0x1988A8u;
label_1988a8:
    // 0x1988a8: 0x26050260  addiu       $a1, $s0, 0x260
    ctx->pc = 0x1988a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x1988ac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1988acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1988b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1988b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1988b4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x1988b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x1988b8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1988b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1988bc: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1988bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1988c0: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1988c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1988c4: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x1988c4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x1988c8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x1988c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x1988cc: 0x26070270  addiu       $a3, $s0, 0x270
    ctx->pc = 0x1988ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x1988d0: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1988d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x1988d4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1988d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_1988d8:
    // 0x1988d8: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x1988d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x1988dc: 0x3463130d  ori         $v1, $v1, 0x130D
    ctx->pc = 0x1988dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4877);
    // 0x1988e0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1988e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1988e4: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1988e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1988e8: 0x27838c80  addiu       $v1, $gp, -0x7380
    ctx->pc = 0x1988e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x1988ec: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x1988ecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x1988f0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1988f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1988f4: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x1988f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1988f8: 0x27868c90  addiu       $a2, $gp, -0x7370
    ctx->pc = 0x1988f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
    // 0x1988fc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1988fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198900: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x198900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198904: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x198904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x198908: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x198908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x19890c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x19890cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x198910: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x198910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198914: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x198914u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x198918: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x198918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19891c: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x19891cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x198920: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x198920u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198924: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x198924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x198928: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x198928u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x19892c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x19892cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x198930: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x198930u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x198934: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x198934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x198938: 0xeb3823  subu        $a3, $a3, $t3
    ctx->pc = 0x198938u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x19893c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x19893cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x198940: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x198940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198944: 0x73902  srl         $a3, $a3, 4
    ctx->pc = 0x198944u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x198948: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x198948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x19894c: 0xfd280008  sd          $t0, 0x8($t1)
    ctx->pc = 0x19894cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 8));
    // 0x198950: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x198950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x198954: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x198954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x198958: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x198958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x19895c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x19895cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x198960: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x198960u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x198964: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x198964u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x198968: 0xfd650008  sd          $a1, 0x8($t3)
    ctx->pc = 0x198968u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 5));
    // 0x19896c: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x19896cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x198970: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x198970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x198974: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x198974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x198978: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198978u;
    {
        const bool branch_taken_0x198978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198978u;
        // 0x19897c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198978) {
            ctx->pc = 0x198994u;
            goto label_198994;
        }
    }
    ctx->pc = 0x198980u;
    // 0x198980: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x198980u;
    SET_GPR_U32(ctx, 31, 0x198988u);
    ctx->pc = 0x198984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198980u;
    // 0x198984: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x198980u, 0x198988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198988u;
label_198988:
    // 0x198988: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19898c: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x19898Cu;
    SET_GPR_U32(ctx, 31, 0x198994u);
    ctx->pc = 0x198990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19898Cu;
    // 0x198990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x19898Cu, 0x198994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198994u;
label_198994:
    // 0x198994: 0x8fc201c4  lw          $v0, 0x1C4($fp)
    ctx->pc = 0x198994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 452)));
    // 0x198998: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x198998u;
    {
        const bool branch_taken_0x198998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198998) {
            ctx->pc = 0x19899Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198998u;
            // 0x19899c: 0x3c04001e  lui         $a0, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1989B8u;
            goto label_1989b8;
        }
    }
    ctx->pc = 0x1989A0u;
    // 0x1989a0: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1989a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1989a4: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x1989A4u;
    SET_GPR_U32(ctx, 31, 0x1989ACu);
    ctx->pc = 0x1989A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989A4u;
    // 0x1989a8: 0x24848de0  addiu       $a0, $a0, -0x7220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x1989A4u, 0x1989ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989ACu;
label_1989ac:
    // 0x1989ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1989ACu;
    {
        const bool branch_taken_0x1989ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1989B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989ACu;
        // 0x1989b0: 0x8ec60004  lw          $a2, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989ac) {
            ctx->pc = 0x1989C4u;
            goto label_1989c4;
        }
    }
    ctx->pc = 0x1989B4u;
    // 0x1989b4: 0x0  nop
    ctx->pc = 0x1989b4u;
    // NOP
label_1989b8:
    // 0x1989b8: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x1989B8u;
    SET_GPR_U32(ctx, 31, 0x1989C0u);
    ctx->pc = 0x1989BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989B8u;
    // 0x1989bc: 0x248463f0  addiu       $a0, $a0, 0x63F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x1989B8u, 0x1989C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989C0u;
label_1989c0:
    // 0x1989c0: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x1989c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1989c4:
    // 0x1989c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1989c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989c8: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x1989c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x1989cc: 0x263021  addu        $a2, $at, $a2
    ctx->pc = 0x1989ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x1989d0: 0xc0653c6  jal         func_194F18
    ctx->pc = 0x1989D0u;
    SET_GPR_U32(ctx, 31, 0x1989D8u);
    ctx->pc = 0x1989D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989D0u;
    // 0x1989d4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194F18u, 0x1989D0u, 0x1989D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989D8u;
label_1989d8:
    // 0x1989d8: 0x8eb101b0  lw          $s1, 0x1B0($s5)
    ctx->pc = 0x1989d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 432)));
    // 0x1989dc: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1989DCu;
    {
        const bool branch_taken_0x1989dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1989dc) {
            ctx->pc = 0x198A90u;
            goto label_198a90;
        }
    }
    ctx->pc = 0x1989E4u;
    // 0x1989e4: 0x3c150010  lui         $s5, 0x10
    ctx->pc = 0x1989e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16 << 16));
    // 0x1989e8: 0x2414fff3  addiu       $s4, $zero, -0xD
    ctx->pc = 0x1989e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1989ec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1989ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1989f0:
    // 0x1989f0: 0x94a20150  lhu         $v0, 0x150($a1)
    ctx->pc = 0x1989f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x1989f4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1989f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1989f8: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1989F8u;
    {
        const bool branch_taken_0x1989f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1989f8) {
            ctx->pc = 0x1989FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1989F8u;
            // 0x1989fc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198A88u;
            goto label_198a88;
        }
    }
    ctx->pc = 0x198A00u;
    // 0x198a00: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x198a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x198a04: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x198a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x198a08: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x198A08u;
    {
        const bool branch_taken_0x198a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198a08) {
            ctx->pc = 0x198A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198A08u;
            // 0x198a0c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198A88u;
            goto label_198a88;
        }
    }
    ctx->pc = 0x198A10u;
    // 0x198a10: 0x8ca601a8  lw          $a2, 0x1A8($a1)
    ctx->pc = 0x198a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 424)));
    // 0x198a14: 0xc065f7a  jal         func_197DE8
    ctx->pc = 0x198A14u;
    SET_GPR_U32(ctx, 31, 0x198A1Cu);
    ctx->pc = 0x198A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A14u;
    // 0x198a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197DE8u, 0x198A14u, 0x198A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A1Cu;
label_198a1c:
    // 0x198a1c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x198A1Cu;
    {
        const bool branch_taken_0x198a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A1Cu;
        // 0x198a20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a1c) {
            ctx->pc = 0x198A84u;
            goto label_198a84;
        }
    }
    ctx->pc = 0x198A24u;
    // 0x198a24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x198a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198a28: 0xc0663f0  jal         func_198FC0
    ctx->pc = 0x198A28u;
    SET_GPR_U32(ctx, 31, 0x198A30u);
    ctx->pc = 0x198A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A28u;
    // 0x198a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198FC0u, 0x198A28u, 0x198A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A30u;
label_198a30:
    // 0x198a30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198a34: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x198a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_198a38:
    // 0x198a38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198a3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198a40: 0x0  nop
    ctx->pc = 0x198a40u;
    // NOP
    // 0x198a44: 0x0  nop
    ctx->pc = 0x198a44u;
    // NOP
    // 0x198a48: 0x0  nop
    ctx->pc = 0x198a48u;
    // NOP
    // 0x198a4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198A4Cu;
    {
        const bool branch_taken_0x198a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198a4c) {
            ctx->pc = 0x198A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198a38;
        }
    }
    ctx->pc = 0x198A54u;
    // 0x198a54: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x198a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x198a58: 0x8f849158  lw          $a0, -0x6EA8($gp)
    ctx->pc = 0x198a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938968)));
    // 0x198a5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198a60: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x198a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x198a64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x198a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x198a68: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x198a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x198a6c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x198a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x198a70: 0x34420145  ori         $v0, $v0, 0x145
    ctx->pc = 0x198a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)325);
    // 0x198a74: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x198a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x198a78: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x198a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x198a7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x198a80: 0xaf849158  sw          $a0, -0x6EA8($gp)
    ctx->pc = 0x198a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938968), GPR_U32(ctx, 4));
label_198a84:
    // 0x198a84: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x198a84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198a88:
    // 0x198a88: 0x5620ffd9  bnel        $s1, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x198A88u;
    {
        const bool branch_taken_0x198a88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x198a88) {
            ctx->pc = 0x198A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198A88u;
            // 0x198a8c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1989F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1989f0;
        }
    }
    ctx->pc = 0x198A90u;
label_198a90:
    // 0x198a90: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x198A90u;
    SET_GPR_U32(ctx, 31, 0x198A98u);
    ctx->pc = 0x198A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A90u;
    // 0x198a94: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x198A90u, 0x198A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A98u;
label_198a98:
    // 0x198a98: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x198A98u;
    SET_GPR_U32(ctx, 31, 0x198AA0u);
    ctx->pc = 0x198A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A98u;
    // 0x198a9c: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x198A98u, 0x198AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AA0u;
label_198aa0:
    // 0x198aa0: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x198aa4: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x198AA4u;
    {
        const bool branch_taken_0x198aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198aa4) {
            ctx->pc = 0x198AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198AA4u;
            // 0x198aa8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198AF0u;
            goto label_198af0;
        }
    }
    ctx->pc = 0x198AACu;
    // 0x198aac: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x198AACu;
    SET_GPR_U32(ctx, 31, 0x198AB4u);
    ctx->pc = 0x198AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AACu;
    // 0x198ab0: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x198AACu, 0x198AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AB4u;
label_198ab4:
    // 0x198ab4: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x198ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x198ab8: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x198ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x198abc: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x198abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x198ac0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x198ac0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x198ac4: 0xaee30018  sw          $v1, 0x18($s7)
    ctx->pc = 0x198ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 3));
    // 0x198ac8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x198ac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x198acc: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x198accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x198ad0: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x198ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x198ad4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x198AD4u;
    SET_GPR_U32(ctx, 31, 0x198ADCu);
    ctx->pc = 0x198AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AD4u;
    // 0x198ad8: 0xae77008c  sw          $s7, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x198AD4u, 0x198ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198ADCu;
label_198adc:
    // 0x198adc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x198ADCu;
    SET_GPR_U32(ctx, 31, 0x198AE4u);
    ctx->pc = 0x198AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198ADCu;
    // 0x198ae0: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x198ADCu, 0x198AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AE4u;
label_198ae4:
    // 0x198ae4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x198AE4u;
    {
        const bool branch_taken_0x198ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AE4u;
        // 0x198ae8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ae4) {
            ctx->pc = 0x198B14u;
            goto label_198b14;
        }
    }
    ctx->pc = 0x198AECu;
    // 0x198aec: 0x0  nop
    ctx->pc = 0x198aecu;
    // NOP
label_198af0:
    // 0x198af0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x198af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x198af4: 0x0  nop
    ctx->pc = 0x198af4u;
    // NOP
label_198af8:
    // 0x198af8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198afc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198b00: 0x0  nop
    ctx->pc = 0x198b00u;
    // NOP
    // 0x198b04: 0x0  nop
    ctx->pc = 0x198b04u;
    // NOP
    // 0x198b08: 0x0  nop
    ctx->pc = 0x198b08u;
    // NOP
    // 0x198b0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198B0Cu;
    {
        const bool branch_taken_0x198b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B0Cu;
        // 0x198b10: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b0c) {
            ctx->pc = 0x198AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198af8;
        }
    }
    ctx->pc = 0x198B14u;
label_198b14:
    // 0x198b14: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x198b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x198b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198b1c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x198b1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198b20: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x198b20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198b24: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x198b24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198b28: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x198b28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198b2c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x198b2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x198b30: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x198b30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198b34: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x198b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x198b38: 0x3e00008  jr          $ra
    ctx->pc = 0x198B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B38u;
        // 0x198b3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198B40u;
}
