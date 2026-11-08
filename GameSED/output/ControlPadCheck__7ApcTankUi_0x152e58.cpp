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

// Function: ControlPadCheck__7ApcTankUi
// Address: 0x152e58 - 0x1538e8
void ControlPadCheck__7ApcTankUi_0x152e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ControlPadCheck__7ApcTankUi_0x152e58");
#endif

    switch (ctx->pc) {
        case 0x152ed8u: goto label_152ed8;
        case 0x152ee0u: goto label_152ee0;
        case 0x152ef4u: goto label_152ef4;
        case 0x152fdcu: goto label_152fdc;
        case 0x152fe8u: goto label_152fe8;
        case 0x152ff4u: goto label_152ff4;
        case 0x153004u: goto label_153004;
        case 0x153014u: goto label_153014;
        case 0x153024u: goto label_153024;
        case 0x153034u: goto label_153034;
        case 0x1530bcu: goto label_1530bc;
        case 0x153128u: goto label_153128;
        case 0x153224u: goto label_153224;
        case 0x153230u: goto label_153230;
        case 0x153260u: goto label_153260;
        case 0x153274u: goto label_153274;
        case 0x153304u: goto label_153304;
        case 0x153334u: goto label_153334;
        case 0x1533d8u: goto label_1533d8;
        case 0x1534acu: goto label_1534ac;
        case 0x1534b4u: goto label_1534b4;
        case 0x1534f0u: goto label_1534f0;
        case 0x1535dcu: goto label_1535dc;
        case 0x1536e4u: goto label_1536e4;
        case 0x1537d4u: goto label_1537d4;
        case 0x15380cu: goto label_15380c;
        case 0x153830u: goto label_153830;
        case 0x15384cu: goto label_15384c;
        case 0x153870u: goto label_153870;
        case 0x153880u: goto label_153880;
        case 0x1538bcu: goto label_1538bc;
        default: break;
    }

    ctx->pc = 0x152e58u;

    // 0x152e58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x152e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x152e5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x152e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x152e60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e64: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x152e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x152e68: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x152e68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152e6c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x152e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x152e70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152e74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x152e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x152e78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x152e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x152e7c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x152e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x152e80: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x152e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x152e84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x152e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x152e88: 0x8e240170  lw          $a0, 0x170($s1)
    ctx->pc = 0x152e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x152e8c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x152e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x152e90: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x152e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x152e94: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x152e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x152e98: 0x14400288  bnez        $v0, . + 4 + (0x288 << 2)
    ctx->pc = 0x152E98u;
    {
        const bool branch_taken_0x152e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E98u;
        // 0x152e9c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e98) {
            ctx->pc = 0x1538BCu;
            goto label_1538bc;
        }
    }
    ctx->pc = 0x152EA0u;
    // 0x152ea0: 0x263306dc  addiu       $s3, $s1, 0x6DC
    ctx->pc = 0x152ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    // 0x152ea4: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x152ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x152ea8: 0x52000042  beql        $s0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x152EA8u;
    {
        const bool branch_taken_0x152ea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ea8) {
            ctx->pc = 0x152EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152EA8u;
            // 0x152eac: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152FB4u;
            goto label_152fb4;
        }
    }
    ctx->pc = 0x152EB0u;
    // 0x152eb0: 0x92020c04  lbu         $v0, 0xC04($s0)
    ctx->pc = 0x152eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x152eb4: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x152eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x152eb8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x152EB8u;
    {
        const bool branch_taken_0x152eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EB8u;
        // 0x152ebc: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152eb8) {
            ctx->pc = 0x152FB0u;
            goto label_152fb0;
        }
    }
    ctx->pc = 0x152EC0u;
    // 0x152ec0: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x152ec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x152ec4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x152ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x152ec8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152EC8u;
    {
        const bool branch_taken_0x152ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ec8) {
            ctx->pc = 0x152ED8u;
            goto label_152ed8;
        }
    }
    ctx->pc = 0x152ED0u;
    // 0x152ed0: 0xc061920  jal         func_186480
    ctx->pc = 0x152ED0u;
    SET_GPR_U32(ctx, 31, 0x152ED8u);
    ctx->pc = 0x152ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152ED0u;
    // 0x152ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x152ED0u, 0x152ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152ED8u;
label_152ed8:
    // 0x152ed8: 0xc061422  jal         func_185088
    ctx->pc = 0x152ED8u;
    SET_GPR_U32(ctx, 31, 0x152EE0u);
    ctx->pc = 0x152EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152ED8u;
    // 0x152edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x152ED8u, 0x152EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EE0u;
label_152ee0:
    // 0x152ee0: 0x8e021268  lw          $v0, 0x1268($s0)
    ctx->pc = 0x152ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4712)));
    // 0x152ee4: 0x54540033  bnel        $v0, $s4, . + 4 + (0x33 << 2)
    ctx->pc = 0x152EE4u;
    {
        const bool branch_taken_0x152ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x152ee4) {
            ctx->pc = 0x152EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152EE4u;
            // 0x152ee8: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152FB4u;
            goto label_152fb4;
        }
    }
    ctx->pc = 0x152EECu;
    // 0x152eec: 0xc059504  jal         func_165410
    ctx->pc = 0x152EECu;
    SET_GPR_U32(ctx, 31, 0x152EF4u);
    ctx->pc = 0x152EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152EECu;
    // 0x152ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165410u, 0x152EECu, 0x152EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EF4u;
label_152ef4:
    // 0x152ef4: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x152ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x152ef8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x152ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x152efc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x152EFCu;
    {
        const bool branch_taken_0x152efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EFCu;
        // 0x152f00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152efc) {
            ctx->pc = 0x152FB0u;
            goto label_152fb0;
        }
    }
    ctx->pc = 0x152F04u;
    // 0x152f04: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x152f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x152f08: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x152f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x152f0c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x152f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x152f10: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x152f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x152f14: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x152f14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x152f18: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x152f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x152f1c: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x152f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x152f20: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x152F20u;
    {
        const bool branch_taken_0x152f20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x152F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F20u;
        // 0x152f24: 0xaca40030  sw          $a0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f20) {
            ctx->pc = 0x152F80u;
            goto label_152f80;
        }
    }
    ctx->pc = 0x152F28u;
    // 0x152f28: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x152f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x152f2c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x152f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x152f30: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x152f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x152f34: 0x5480001f  bnel        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x152F34u;
    {
        const bool branch_taken_0x152f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x152f34) {
            ctx->pc = 0x152F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152F34u;
            // 0x152f38: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152FB4u;
            goto label_152fb4;
        }
    }
    ctx->pc = 0x152F3Cu;
    // 0x152f3c: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x152f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x152f40: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x152F40u;
    {
        const bool branch_taken_0x152f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152f40) {
            ctx->pc = 0x152F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152F40u;
            // 0x152f44: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152F70u;
            goto label_152f70;
        }
    }
    ctx->pc = 0x152F48u;
    // 0x152f48: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x152f48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x152f4c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x152F4Cu;
    {
        const bool branch_taken_0x152f4c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x152F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F4Cu;
        // 0x152f50: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f4c) {
            ctx->pc = 0x152FB0u;
            goto label_152fb0;
        }
    }
    ctx->pc = 0x152F54u;
    // 0x152f54: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x152f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x152f58: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x152F58u;
    {
        const bool branch_taken_0x152f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F58u;
        // 0x152f5c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f58) {
            ctx->pc = 0x152FB0u;
            goto label_152fb0;
        }
    }
    ctx->pc = 0x152F60u;
    // 0x152f60: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x152f60u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x152f64: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x152f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x152f68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x152F68u;
    {
        const bool branch_taken_0x152f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F68u;
        // 0x152f6c: 0xaca2003c  sw          $v0, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f68) {
            ctx->pc = 0x152FB0u;
            goto label_152fb0;
        }
    }
    ctx->pc = 0x152F70u;
label_152f70:
    // 0x152f70: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x152f70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x152f74: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x152f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x152f78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x152F78u;
    {
        const bool branch_taken_0x152f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F78u;
        // 0x152f7c: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f78) {
            ctx->pc = 0x152FB0u;
            goto label_152fb0;
        }
    }
    ctx->pc = 0x152F80u;
label_152f80:
    // 0x152f80: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x152f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x152f84: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x152f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x152f88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x152F88u;
    {
        const bool branch_taken_0x152f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F88u;
        // 0x152f8c: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f88) {
            ctx->pc = 0x152FB0u;
            goto label_152fb0;
        }
    }
    ctx->pc = 0x152F90u;
    // 0x152f90: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x152f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x152f94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x152f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x152f98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152F98u;
    {
        const bool branch_taken_0x152f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F98u;
        // 0x152f9c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f98) {
            ctx->pc = 0x152FB0u;
            goto label_152fb0;
        }
    }
    ctx->pc = 0x152FA0u;
    // 0x152fa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x152fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152fa4: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x152fa4u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x152fa8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x152fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x152fac: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x152facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
label_152fb0:
    // 0x152fb0: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x152fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_152fb4:
    // 0x152fb4: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x152fb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x152fb8: 0x30530001  andi        $s3, $v0, 0x1
    ctx->pc = 0x152fb8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152fbc: 0x16600240  bnez        $s3, . + 4 + (0x240 << 2)
    ctx->pc = 0x152FBCu;
    {
        const bool branch_taken_0x152fbc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x152FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FBCu;
        // 0x152fc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fbc) {
            ctx->pc = 0x1538C0u;
            goto label_1538c0;
        }
    }
    ctx->pc = 0x152FC4u;
    // 0x152fc4: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x152fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x152fc8: 0x162402  srl         $a0, $s6, 16
    ctx->pc = 0x152fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), 16));
    // 0x152fcc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x152fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fd0: 0x94570036  lhu         $s7, 0x36($v0)
    ctx->pc = 0x152fd0u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x152fd4: 0xc055a32  jal         func_1568C8
    ctx->pc = 0x152FD4u;
    SET_GPR_U32(ctx, 31, 0x152FDCu);
    ctx->pc = 0x152FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FD4u;
    // 0x152fd8: 0x94550030  lhu         $s5, 0x30($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1568C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1568C8u, 0x152FD4u, 0x152FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FDCu;
label_152fdc:
    // 0x152fdc: 0x162502  srl         $a0, $s6, 20
    ctx->pc = 0x152fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), 20));
    // 0x152fe0: 0xc055a32  jal         func_1568C8
    ctx->pc = 0x152FE0u;
    SET_GPR_U32(ctx, 31, 0x152FE8u);
    ctx->pc = 0x152FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FE0u;
    // 0x152fe4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1568C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1568C8u, 0x152FE0u, 0x152FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FE8u;
label_152fe8:
    // 0x152fe8: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x152fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x152fec: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x152FECu;
    SET_GPR_U32(ctx, 31, 0x152FF4u);
    ctx->pc = 0x152FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FECu;
    // 0x152ff0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x152FECu, 0x152FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FF4u;
label_152ff4:
    // 0x152ff4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x152ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x152ff8: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x152ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x152ffc: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x152FFCu;
    SET_GPR_U32(ctx, 31, 0x153004u);
    ctx->pc = 0x153000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FFCu;
    // 0x153000: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x152FFCu, 0x153004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153004u;
label_153004:
    // 0x153004: 0x36030040  ori         $v1, $s0, 0x40
    ctx->pc = 0x153004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
    // 0x153008: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x153008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x15300c: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x15300Cu;
    SET_GPR_U32(ctx, 31, 0x153014u);
    ctx->pc = 0x153010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15300Cu;
    // 0x153010: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x15300Cu, 0x153014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153014u;
label_153014:
    // 0x153014: 0x36030001  ori         $v1, $s0, 0x1
    ctx->pc = 0x153014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x153018: 0x2404003a  addiu       $a0, $zero, 0x3A
    ctx->pc = 0x153018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x15301c: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x15301Cu;
    SET_GPR_U32(ctx, 31, 0x153024u);
    ctx->pc = 0x153020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15301Cu;
    // 0x153020: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x15301Cu, 0x153024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153024u;
label_153024:
    // 0x153024: 0x36030002  ori         $v1, $s0, 0x2
    ctx->pc = 0x153024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x153028: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x153028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x15302c: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x15302Cu;
    SET_GPR_U32(ctx, 31, 0x153034u);
    ctx->pc = 0x153030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15302Cu;
    // 0x153030: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x15302Cu, 0x153034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153034u;
label_153034:
    // 0x153034: 0x36030004  ori         $v1, $s0, 0x4
    ctx->pc = 0x153034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x153038: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x153038u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x15303c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15303Cu;
    {
        const bool branch_taken_0x15303c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x153040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15303Cu;
        // 0x153040: 0x101027  nor         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15303c) {
            ctx->pc = 0x15304Cu;
            goto label_15304c;
        }
    }
    ctx->pc = 0x153044u;
    // 0x153044: 0x2e2b824  and         $s7, $s7, $v0
    ctx->pc = 0x153044u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
    // 0x153048: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x153048u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_15304c:
    // 0x15304c: 0x8e2303b0  lw          $v1, 0x3B0($s1)
    ctx->pc = 0x15304cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 944)));
    // 0x153050: 0x24101000  addiu       $s0, $zero, 0x1000
    ctx->pc = 0x153050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x153054: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x153054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x153058: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x153058u;
    {
        const bool branch_taken_0x153058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153058u;
        // 0x15305c: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153058) {
            ctx->pc = 0x153100u;
            goto label_153100;
        }
    }
    ctx->pc = 0x153060u;
    // 0x153060: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x153060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x153064: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x153064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x153068: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x153068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15306c: 0x32a60040  andi        $a2, $s5, 0x40
    ctx->pc = 0x15306cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x153070: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x153070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x153074: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x153074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153078: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x153078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x15307c: 0xae340374  sw          $s4, 0x374($s1)
    ctx->pc = 0x15307cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 20));
    // 0x153080: 0xae270370  sw          $a3, 0x370($s1)
    ctx->pc = 0x153080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 7));
    // 0x153084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153084u;
    {
        const bool branch_taken_0x153084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153084u;
        // 0x153088: 0x66200a  movz        $a0, $v1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153084) {
            ctx->pc = 0x1530A0u;
            goto label_1530a0;
        }
    }
    ctx->pc = 0x15308Cu;
    // 0x15308c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x15308cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153090: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x153090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x153094: 0x66100a  movz        $v0, $v1, $a2
    ctx->pc = 0x153094u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x153098: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x153098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15309c: 0xae220370  sw          $v0, 0x370($s1)
    ctx->pc = 0x15309cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
label_1530a0:
    // 0x1530a0: 0x2450018  mult        $zero, $s2, $a1
    ctx->pc = 0x1530a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1530a4: 0x70850000  madd        $zero, $a0, $a1
    ctx->pc = 0x1530a4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x1530a8: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x1530a8u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x1530ac: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x1530acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x1530b0: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x1530b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1530b4: 0xc067b88  jal         func_19EE20
    ctx->pc = 0x1530B4u;
    SET_GPR_U32(ctx, 31, 0x1530BCu);
    ctx->pc = 0x1530B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530B4u;
    // 0x1530b8: 0x2624037c  addiu       $a0, $s1, 0x37C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 892));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE20u, 0x1530B4u, 0x1530BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530BCu;
label_1530bc:
    // 0x1530bc: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x1530bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1530c0: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x1530c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1530c4: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1530C4u;
    {
        const bool branch_taken_0x1530c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1530c4) {
            ctx->pc = 0x1530C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1530C4u;
            // 0x1530c8: 0x121043  sra         $v0, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1530D0u;
            goto label_1530d0;
        }
    }
    ctx->pc = 0x1530CCu;
    // 0x1530cc: 0x121083  sra         $v0, $s2, 2
    ctx->pc = 0x1530ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 2));
label_1530d0:
    // 0x1530d0: 0x705310e8  pminw       $v0, $v0, $s3
    ctx->pc = 0x1530d0u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x1530d4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1530d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1530d8: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x1530d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x1530dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1530dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1530e0: 0xae230370  sw          $v1, 0x370($s1)
    ctx->pc = 0x1530e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 3));
    // 0x1530e4: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x1530e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x1530e8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1530e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1530ec: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1530ecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1530f0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1530f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1530f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1530f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1530f8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1530F8u;
    {
        const bool branch_taken_0x1530f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1530FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530F8u;
        // 0x1530fc: 0xc620034c  lwc1        $f0, 0x34C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530f8) {
            ctx->pc = 0x1531A8u;
            goto label_1531a8;
        }
    }
    ctx->pc = 0x153100u;
label_153100:
    // 0x153100: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x153100u;
    {
        const bool branch_taken_0x153100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153100u;
        // 0x153104: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153100) {
            ctx->pc = 0x153148u;
            goto label_153148;
        }
    }
    ctx->pc = 0x153108u;
    // 0x153108: 0x151240  sll         $v0, $s5, 9
    ctx->pc = 0x153108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 9));
    // 0x15310c: 0xae340374  sw          $s4, 0x374($s1)
    ctx->pc = 0x15310cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 20));
    // 0x153110: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x153110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x153114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x153114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153118: 0xae220370  sw          $v0, 0x370($s1)
    ctx->pc = 0x153118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
    // 0x15311c: 0x2624037c  addiu       $a0, $s1, 0x37C
    ctx->pc = 0x15311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 892));
    // 0x153120: 0xc067b88  jal         func_19EE20
    ctx->pc = 0x153120u;
    SET_GPR_U32(ctx, 31, 0x153128u);
    ctx->pc = 0x153124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153120u;
    // 0x153124: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE20u, 0x153120u, 0x153128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153128u;
label_153128:
    // 0x153128: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x153128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x15312c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x15312cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x153130: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153130u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153134: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153134u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15313c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15313Cu;
    {
        const bool branch_taken_0x15313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15313Cu;
        // 0x153140: 0xc620034c  lwc1        $f0, 0x34C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15313c) {
            ctx->pc = 0x1531A8u;
            goto label_1531a8;
        }
    }
    ctx->pc = 0x153144u;
    // 0x153144: 0x0  nop
    ctx->pc = 0x153144u;
    // NOP
label_153148:
    // 0x153148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153148u;
    {
        const bool branch_taken_0x153148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153148u;
        // 0x15314c: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153148) {
            ctx->pc = 0x153158u;
            goto label_153158;
        }
    }
    ctx->pc = 0x153150u;
    // 0x153150: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x153150u;
    {
        const bool branch_taken_0x153150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153150u;
        // 0x153154: 0xae220370  sw          $v0, 0x370($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153150) {
            ctx->pc = 0x15315Cu;
            goto label_15315c;
        }
    }
    ctx->pc = 0x153158u;
label_153158:
    // 0x153158: 0xae320370  sw          $s2, 0x370($s1)
    ctx->pc = 0x153158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 18));
label_15315c:
    // 0x15315c: 0x8e2203b0  lw          $v0, 0x3B0($s1)
    ctx->pc = 0x15315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 944)));
    // 0x153160: 0xae340374  sw          $s4, 0x374($s1)
    ctx->pc = 0x153160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 20));
    // 0x153164: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x153164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x153168: 0xae200378  sw          $zero, 0x378($s1)
    ctx->pc = 0x153168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 0));
    // 0x15316c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15316Cu;
    {
        const bool branch_taken_0x15316c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15316Cu;
        // 0x153170: 0xae20037c  sw          $zero, 0x37C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15316c) {
            ctx->pc = 0x153190u;
            goto label_153190;
        }
    }
    ctx->pc = 0x153174u;
    // 0x153174: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x153174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x153178: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x153178u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x15317c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15317cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153180: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153180u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153188: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153188u;
    {
        const bool branch_taken_0x153188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153188u;
        // 0x15318c: 0xc620034c  lwc1        $f0, 0x34C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153188) {
            ctx->pc = 0x1531A8u;
            goto label_1531a8;
        }
    }
    ctx->pc = 0x153190u;
label_153190:
    // 0x153190: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x153190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x153194: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x153194u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x153198: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153198u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15319c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15319cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1531a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1531a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1531a4: 0xc620032c  lwc1        $f0, 0x32C($s1)
    ctx->pc = 0x1531a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1531a8:
    // 0x1531a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1531a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1531ac: 0xe6200380  swc1        $f0, 0x380($s1)
    ctx->pc = 0x1531acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 896), bits); }
    // 0x1531b0: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x1531b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1531b4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1531b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1531b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1531B8u;
    {
        const bool branch_taken_0x1531b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1531b8) {
            ctx->pc = 0x1531BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1531B8u;
            // 0x1531bc: 0xae200380  sw          $zero, 0x380($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1531C0u;
            goto label_1531c0;
        }
    }
    ctx->pc = 0x1531C0u;
label_1531c0:
    // 0x1531c0: 0x8e230374  lw          $v1, 0x374($s1)
    ctx->pc = 0x1531c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x1531c4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1531c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1531c8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1531c8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1531cc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1531ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1531d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1531d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1531d4: 0xc6200308  lwc1        $f0, 0x308($s1)
    ctx->pc = 0x1531d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1531d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1531d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1531dc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1531DCu;
    {
        const bool branch_taken_0x1531dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531DCu;
        // 0x1531e0: 0xe6200384  swc1        $f0, 0x384($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531dc) {
            ctx->pc = 0x153218u;
            goto label_153218;
        }
    }
    ctx->pc = 0x1531E4u;
    // 0x1531e4: 0x8e220690  lw          $v0, 0x690($s1)
    ctx->pc = 0x1531e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1531e8: 0x8c431ab0  lw          $v1, 0x1AB0($v0)
    ctx->pc = 0x1531e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6832)));
    // 0x1531ec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1531ECu;
    {
        const bool branch_taken_0x1531ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531ECu;
        // 0x1531f0: 0x162602  srl         $a0, $s6, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531ec) {
            ctx->pc = 0x15321Cu;
            goto label_15321c;
        }
    }
    ctx->pc = 0x1531F4u;
    // 0x1531f4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x1531f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1531f8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1531f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1531fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1531fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x153200: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153200u;
    {
        const bool branch_taken_0x153200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153200) {
            ctx->pc = 0x15321Cu;
            goto label_15321c;
        }
    }
    ctx->pc = 0x153208u;
    // 0x153208: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x153208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x15320c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15320cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x153210: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x153210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x153214: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x153214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
label_153218:
    // 0x153218: 0x162602  srl         $a0, $s6, 24
    ctx->pc = 0x153218u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), 24));
label_15321c:
    // 0x15321c: 0xc055a32  jal         func_1568C8
    ctx->pc = 0x15321Cu;
    SET_GPR_U32(ctx, 31, 0x153224u);
    ctx->pc = 0x153220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15321Cu;
    // 0x153220: 0x34128000  ori         $s2, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1568C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1568C8u, 0x15321Cu, 0x153224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153224u;
label_153224:
    // 0x153224: 0x162702  srl         $a0, $s6, 28
    ctx->pc = 0x153224u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), 28));
    // 0x153228: 0xc055a32  jal         func_1568C8
    ctx->pc = 0x153228u;
    SET_GPR_U32(ctx, 31, 0x153230u);
    ctx->pc = 0x15322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153228u;
    // 0x15322c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1568C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1568C8u, 0x153228u, 0x153230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153230u;
label_153230:
    // 0x153230: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x153230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153234: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x153234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x153238: 0x202900a  movz        $s2, $s0, $v0
    ctx->pc = 0x153238u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
    // 0x15323c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x15323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x153240: 0x32a30008  andi        $v1, $s5, 0x8
    ctx->pc = 0x153240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
    // 0x153244: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x153244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
    // 0x153248: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x153248u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x15324c: 0xb20018  mult        $zero, $a1, $s2
    ctx->pc = 0x15324cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153250: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x153250u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x153254: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x153254u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x153258: 0xc058528  jal         func_1614A0
    ctx->pc = 0x153258u;
    SET_GPR_U32(ctx, 31, 0x153260u);
    ctx->pc = 0x15325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153258u;
    // 0x15325c: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614A0u, 0x153258u, 0x153260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153260u;
label_153260:
    // 0x153260: 0x8e24076c  lw          $a0, 0x76C($s1)
    ctx->pc = 0x153260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1900)));
    // 0x153264: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x153264u;
    {
        const bool branch_taken_0x153264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x153264) {
            ctx->pc = 0x153268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153264u;
            // 0x153268: 0x8e220184  lw          $v0, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153278u;
            goto label_153278;
        }
    }
    ctx->pc = 0x15326Cu;
    // 0x15326c: 0xc061944  jal         func_186510
    ctx->pc = 0x15326Cu;
    SET_GPR_U32(ctx, 31, 0x153274u);
    ctx->pc = 0x186510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186510u, 0x15326Cu, 0x153274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153274u;
label_153274:
    // 0x153274: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x153274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_153278:
    // 0x153278: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x153278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x15327c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15327cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x153280: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x153280u;
    {
        const bool branch_taken_0x153280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153280) {
            ctx->pc = 0x1532A8u;
            goto label_1532a8;
        }
    }
    ctx->pc = 0x153288u;
    // 0x153288: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x153288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x15328c: 0x8c621ab4  lw          $v0, 0x1AB4($v1)
    ctx->pc = 0x15328cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6836)));
    // 0x153290: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x153290u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x153294: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x153294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x153298: 0x2842001b  slti        $v0, $v0, 0x1B
    ctx->pc = 0x153298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x15329c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15329Cu;
    {
        const bool branch_taken_0x15329c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1532A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15329Cu;
        // 0x1532a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15329c) {
            ctx->pc = 0x1532A8u;
            goto label_1532a8;
        }
    }
    ctx->pc = 0x1532A4u;
    // 0x1532a4: 0xae220850  sw          $v0, 0x850($s1)
    ctx->pc = 0x1532a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
label_1532a8:
    // 0x1532a8: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1532A8u;
    {
        const bool branch_taken_0x1532a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532A8u;
        // 0x1532ac: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532a8) {
            ctx->pc = 0x1532E4u;
            goto label_1532e4;
        }
    }
    ctx->pc = 0x1532B0u;
    // 0x1532b0: 0x8e230690  lw          $v1, 0x690($s1)
    ctx->pc = 0x1532b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1532b4: 0x8c621ab0  lw          $v0, 0x1AB0($v1)
    ctx->pc = 0x1532b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6832)));
    // 0x1532b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1532b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1532bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1532BCu;
    {
        const bool branch_taken_0x1532bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532BCu;
        // 0x1532c0: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532bc) {
            ctx->pc = 0x1532E4u;
            goto label_1532e4;
        }
    }
    ctx->pc = 0x1532C4u;
    // 0x1532c4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x1532c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1532c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1532c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1532cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1532CCu;
    {
        const bool branch_taken_0x1532cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1532cc) {
            ctx->pc = 0x1532E4u;
            goto label_1532e4;
        }
    }
    ctx->pc = 0x1532D4u;
    // 0x1532d4: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x1532d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x1532d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1532d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1532dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1532dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1532e0: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x1532e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
label_1532e4:
    // 0x1532e4: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1532E4u;
    {
        const bool branch_taken_0x1532e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532E4u;
        // 0x1532e8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532e4) {
            ctx->pc = 0x15333Cu;
            goto label_15333c;
        }
    }
    ctx->pc = 0x1532ECu;
    // 0x1532ec: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x1532ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1532f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1532f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1532f4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1532F4u;
    {
        const bool branch_taken_0x1532f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1532f4) {
            ctx->pc = 0x1532F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1532F4u;
            // 0x1532f8: 0x8e250310  lw          $a1, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15331Cu;
            goto label_15331c;
        }
    }
    ctx->pc = 0x1532FCu;
    // 0x1532fc: 0xc066800  jal         func_19A000
    ctx->pc = 0x1532FCu;
    SET_GPR_U32(ctx, 31, 0x153304u);
    ctx->pc = 0x153300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1532FCu;
    // 0x153300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A000u, 0x1532FCu, 0x153304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153304u;
label_153304:
    // 0x153304: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x153304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x153308: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x153308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x15330c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x153310: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x153310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x153314: 0xae230184  sw          $v1, 0x184($s1)
    ctx->pc = 0x153314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
    // 0x153318: 0x8e250310  lw          $a1, 0x310($s1)
    ctx->pc = 0x153318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_15331c:
    // 0x15331c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x15331cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x153320: 0xb20018  mult        $zero, $a1, $s2
    ctx->pc = 0x153320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153324: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x153324u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x153328: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x153328u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x15332c: 0xc0585a2  jal         func_161688
    ctx->pc = 0x15332Cu;
    SET_GPR_U32(ctx, 31, 0x153334u);
    ctx->pc = 0x153330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15332Cu;
    // 0x153330: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161688u, 0x15332Cu, 0x153334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153334u;
label_153334:
    // 0x153334: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x153334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x153338: 0xae220818  sw          $v0, 0x818($s1)
    ctx->pc = 0x153338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
label_15333c:
    // 0x15333c: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x15333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x153340: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x153340u;
    {
        const bool branch_taken_0x153340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153340u;
        // 0x153344: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153340) {
            ctx->pc = 0x1535E0u;
            goto label_1535e0;
        }
    }
    ctx->pc = 0x153348u;
    // 0x153348: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x153348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
    // 0x15334c: 0x544000a4  bnel        $v0, $zero, . + 4 + (0xA4 << 2)
    ctx->pc = 0x15334Cu;
    {
        const bool branch_taken_0x15334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15334c) {
            ctx->pc = 0x153350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15334Cu;
            // 0x153350: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535E0u;
            goto label_1535e0;
        }
    }
    ctx->pc = 0x153354u;
    // 0x153354: 0x262506dc  addiu       $a1, $s1, 0x6DC
    ctx->pc = 0x153354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    // 0x153358: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x153358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x15335c: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x15335cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x153360: 0x8ca4003c  lw          $a0, 0x3C($a1)
    ctx->pc = 0x153360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x153364: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x153364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x153368: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x153368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15336c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15336Cu;
    {
        const bool branch_taken_0x15336c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15336Cu;
        // 0x153370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15336c) {
            ctx->pc = 0x15337Cu;
            goto label_15337c;
        }
    }
    ctx->pc = 0x153374u;
    // 0x153374: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x153374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x153378: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x153378u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15337c:
    // 0x15337c: 0x50c00098  beql        $a2, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x15337Cu;
    {
        const bool branch_taken_0x15337c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15337c) {
            ctx->pc = 0x153380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15337Cu;
            // 0x153380: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535E0u;
            goto label_1535e0;
        }
    }
    ctx->pc = 0x153384u;
    // 0x153384: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x153384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x153388: 0x5200004e  beql        $s0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x153388u;
    {
        const bool branch_taken_0x153388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x153388) {
            ctx->pc = 0x15338Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153388u;
            // 0x15338c: 0x8e2306dc  lw          $v1, 0x6DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1534C4u;
            goto label_1534c4;
        }
    }
    ctx->pc = 0x153390u;
    // 0x153390: 0x8e030c04  lw          $v1, 0xC04($s0)
    ctx->pc = 0x153390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x153394: 0x311c3  sra         $v0, $v1, 7
    ctx->pc = 0x153394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
    // 0x153398: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x153398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15339c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x15339Cu;
    {
        const bool branch_taken_0x15339c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15339Cu;
        // 0x1533a0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15339c) {
            ctx->pc = 0x1534C0u;
            goto label_1534c0;
        }
    }
    ctx->pc = 0x1533A4u;
    // 0x1533a4: 0x8e021268  lw          $v0, 0x1268($s0)
    ctx->pc = 0x1533a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4712)));
    // 0x1533a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1533A8u;
    {
        const bool branch_taken_0x1533a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1533ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533A8u;
        // 0x1533ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533a8) {
            ctx->pc = 0x1533E8u;
            goto label_1533e8;
        }
    }
    ctx->pc = 0x1533B0u;
    // 0x1533b0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1533b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1533b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1533B4u;
    {
        const bool branch_taken_0x1533b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533B4u;
        // 0x1533b8: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533b4) {
            ctx->pc = 0x1533DCu;
            goto label_1533dc;
        }
    }
    ctx->pc = 0x1533BCu;
    // 0x1533bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1533BCu;
    {
        const bool branch_taken_0x1533bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1533C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533BCu;
        // 0x1533c0: 0x2404006a  addiu       $a0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533bc) {
            ctx->pc = 0x1533C8u;
            goto label_1533c8;
        }
    }
    ctx->pc = 0x1533C4u;
    // 0x1533c4: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1533c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_1533c8:
    // 0x1533c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1533c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1533ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533d0: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x1533D0u;
    SET_GPR_U32(ctx, 31, 0x1533D8u);
    ctx->pc = 0x1533D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1533D0u;
    // 0x1533d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x1533D0u, 0x1533D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1533D8u;
label_1533d8:
    // 0x1533d8: 0xae021258  sw          $v0, 0x1258($s0)
    ctx->pc = 0x1533d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4696), GPR_U32(ctx, 2));
label_1533dc:
    // 0x1533dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1533dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1533e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1533e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1533e4: 0xae421268  sw          $v0, 0x1268($s2)
    ctx->pc = 0x1533e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4712), GPR_U32(ctx, 2));
label_1533e8:
    // 0x1533e8: 0x5080007d  beql        $a0, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x1533E8u;
    {
        const bool branch_taken_0x1533e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1533e8) {
            ctx->pc = 0x1533ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1533E8u;
            // 0x1533ec: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535E0u;
            goto label_1535e0;
        }
    }
    ctx->pc = 0x1533F0u;
    // 0x1533f0: 0x262506dc  addiu       $a1, $s1, 0x6DC
    ctx->pc = 0x1533f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    // 0x1533f4: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1533f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1533f8: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1533f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1533fc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1533fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x153400: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x153400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x153404: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x153404u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x153408: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x153408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15340c: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x15340cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x153410: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x153410u;
    {
        const bool branch_taken_0x153410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x153414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153410u;
        // 0x153414: 0xaca40030  sw          $a0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153410) {
            ctx->pc = 0x153470u;
            goto label_153470;
        }
    }
    ctx->pc = 0x153418u;
    // 0x153418: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x15341c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x15341cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x153420: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x153420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x153424: 0x5480001f  bnel        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x153424u;
    {
        const bool branch_taken_0x153424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x153424) {
            ctx->pc = 0x153428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153424u;
            // 0x153428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1534A4u;
            goto label_1534a4;
        }
    }
    ctx->pc = 0x15342Cu;
    // 0x15342c: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x15342cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x153430: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x153430u;
    {
        const bool branch_taken_0x153430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153430) {
            ctx->pc = 0x153434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153430u;
            // 0x153434: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153460u;
            goto label_153460;
        }
    }
    ctx->pc = 0x153438u;
    // 0x153438: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x153438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x15343c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15343Cu;
    {
        const bool branch_taken_0x15343c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x153440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15343Cu;
        // 0x153440: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15343c) {
            ctx->pc = 0x1534A0u;
            goto label_1534a0;
        }
    }
    ctx->pc = 0x153444u;
    // 0x153444: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x153444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x153448: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x153448u;
    {
        const bool branch_taken_0x153448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153448u;
        // 0x15344c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153448) {
            ctx->pc = 0x1534A0u;
            goto label_1534a0;
        }
    }
    ctx->pc = 0x153450u;
    // 0x153450: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x153450u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x153454: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x153454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x153458: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x153458u;
    {
        const bool branch_taken_0x153458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153458u;
        // 0x15345c: 0xaca2003c  sw          $v0, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153458) {
            ctx->pc = 0x1534A0u;
            goto label_1534a0;
        }
    }
    ctx->pc = 0x153460u;
label_153460:
    // 0x153460: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x153460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x153464: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x153464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x153468: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x153468u;
    {
        const bool branch_taken_0x153468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153468u;
        // 0x15346c: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153468) {
            ctx->pc = 0x1534A0u;
            goto label_1534a0;
        }
    }
    ctx->pc = 0x153470u;
label_153470:
    // 0x153470: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x153470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x153474: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x153474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x153478: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x153478u;
    {
        const bool branch_taken_0x153478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153478u;
        // 0x15347c: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153478) {
            ctx->pc = 0x1534A0u;
            goto label_1534a0;
        }
    }
    ctx->pc = 0x153480u;
    // 0x153480: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x153480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x153484: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x153484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x153488: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153488u;
    {
        const bool branch_taken_0x153488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153488u;
        // 0x15348c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153488) {
            ctx->pc = 0x1534A0u;
            goto label_1534a0;
        }
    }
    ctx->pc = 0x153490u;
    // 0x153490: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x153490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x153494: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x153494u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x153498: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x153498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15349c: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x15349cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
label_1534a0:
    // 0x1534a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1534a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1534a4:
    // 0x1534a4: 0xc0549fa  jal         func_1527E8
    ctx->pc = 0x1534A4u;
    SET_GPR_U32(ctx, 31, 0x1534ACu);
    ctx->pc = 0x1534A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1534A4u;
    // 0x1534a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1527E8u, 0x1534A4u, 0x1534ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534ACu;
label_1534ac:
    // 0x1534ac: 0xc059504  jal         func_165410
    ctx->pc = 0x1534ACu;
    SET_GPR_U32(ctx, 31, 0x1534B4u);
    ctx->pc = 0x1534B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1534ACu;
    // 0x1534b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165410u, 0x1534ACu, 0x1534B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534B4u;
label_1534b4:
    // 0x1534b4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1534B4u;
    {
        const bool branch_taken_0x1534b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534B4u;
        // 0x1534b8: 0x8e220264  lw          $v0, 0x264($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534b4) {
            ctx->pc = 0x1535E0u;
            goto label_1535e0;
        }
    }
    ctx->pc = 0x1534BCu;
    // 0x1534bc: 0x0  nop
    ctx->pc = 0x1534bcu;
    // NOP
label_1534c0:
    // 0x1534c0: 0x8e2306dc  lw          $v1, 0x6DC($s1)
    ctx->pc = 0x1534c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
label_1534c4:
    // 0x1534c4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1534c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1534c8: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1534C8u;
    {
        const bool branch_taken_0x1534c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1534CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534C8u;
        // 0x1534cc: 0x262506dc  addiu       $a1, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534c8) {
            ctx->pc = 0x153524u;
            goto label_153524;
        }
    }
    ctx->pc = 0x1534D0u;
    // 0x1534d0: 0x8e2401ac  lw          $a0, 0x1AC($s1)
    ctx->pc = 0x1534d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x1534d4: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1534D4u;
    {
        const bool branch_taken_0x1534d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1534d4) {
            ctx->pc = 0x1534D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1534D4u;
            // 0x1534d8: 0x8ca20024  lw          $v0, 0x24($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153528u;
            goto label_153528;
        }
    }
    ctx->pc = 0x1534DCu;
    // 0x1534dc: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1534dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1534e0: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1534E0u;
    {
        const bool branch_taken_0x1534e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1534e0) {
            ctx->pc = 0x1534E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1534E0u;
            // 0x1534e4: 0x8ca20024  lw          $v0, 0x24($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153528u;
            goto label_153528;
        }
    }
    ctx->pc = 0x1534E8u;
    // 0x1534e8: 0xc0506dc  jal         func_141B70
    ctx->pc = 0x1534E8u;
    SET_GPR_U32(ctx, 31, 0x1534F0u);
    ctx->pc = 0x141B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141B70u, 0x1534E8u, 0x1534F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534F0u;
label_1534f0:
    // 0x1534f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1534F0u;
    {
        const bool branch_taken_0x1534f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534F0u;
        // 0x1534f4: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534f0) {
            ctx->pc = 0x153520u;
            goto label_153520;
        }
    }
    ctx->pc = 0x1534F8u;
    // 0x1534f8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1534F8u;
    {
        const bool branch_taken_0x1534f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534F8u;
        // 0x1534fc: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534f8) {
            ctx->pc = 0x1535DCu;
            goto label_1535dc;
        }
    }
    ctx->pc = 0x153500u;
    // 0x153500: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x153500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x153504: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x153504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x153508: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x153508u;
    {
        const bool branch_taken_0x153508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153508) {
            ctx->pc = 0x15350Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153508u;
            // 0x15350c: 0x262506dc  addiu       $a1, $s1, 0x6DC (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153524u;
            goto label_153524;
        }
    }
    ctx->pc = 0x153510u;
    // 0x153510: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x153510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x153514: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x153514u;
    {
        const bool branch_taken_0x153514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153514u;
        // 0x153518: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153514) {
            ctx->pc = 0x1535DCu;
            goto label_1535dc;
        }
    }
    ctx->pc = 0x15351Cu;
    // 0x15351c: 0x0  nop
    ctx->pc = 0x15351cu;
    // NOP
label_153520:
    // 0x153520: 0x262506dc  addiu       $a1, $s1, 0x6DC
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
label_153524:
    // 0x153524: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x153524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_153528:
    // 0x153528: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x153528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15352c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x15352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x153530: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x153530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x153534: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x153534u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x153538: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x153538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15353c: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x15353cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x153540: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x153540u;
    {
        const bool branch_taken_0x153540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x153544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153540u;
        // 0x153544: 0xaca40030  sw          $a0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153540) {
            ctx->pc = 0x1535A0u;
            goto label_1535a0;
        }
    }
    ctx->pc = 0x153548u;
    // 0x153548: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x153548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x15354c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x15354cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x153550: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x153550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x153554: 0x5480001f  bnel        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x153554u;
    {
        const bool branch_taken_0x153554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x153554) {
            ctx->pc = 0x153558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153554u;
            // 0x153558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535D4u;
            goto label_1535d4;
        }
    }
    ctx->pc = 0x15355Cu;
    // 0x15355c: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x15355cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x153560: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x153560u;
    {
        const bool branch_taken_0x153560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153560) {
            ctx->pc = 0x153564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153560u;
            // 0x153564: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153590u;
            goto label_153590;
        }
    }
    ctx->pc = 0x153568u;
    // 0x153568: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x153568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x15356c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15356Cu;
    {
        const bool branch_taken_0x15356c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x153570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15356Cu;
        // 0x153570: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15356c) {
            ctx->pc = 0x1535D0u;
            goto label_1535d0;
        }
    }
    ctx->pc = 0x153574u;
    // 0x153574: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x153574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x153578: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x153578u;
    {
        const bool branch_taken_0x153578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153578u;
        // 0x15357c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153578) {
            ctx->pc = 0x1535D0u;
            goto label_1535d0;
        }
    }
    ctx->pc = 0x153580u;
    // 0x153580: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x153580u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x153584: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x153584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x153588: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x153588u;
    {
        const bool branch_taken_0x153588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153588u;
        // 0x15358c: 0xaca2003c  sw          $v0, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153588) {
            ctx->pc = 0x1535D0u;
            goto label_1535d0;
        }
    }
    ctx->pc = 0x153590u;
label_153590:
    // 0x153590: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x153590u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x153594: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x153594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x153598: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x153598u;
    {
        const bool branch_taken_0x153598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153598u;
        // 0x15359c: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153598) {
            ctx->pc = 0x1535D0u;
            goto label_1535d0;
        }
    }
    ctx->pc = 0x1535A0u;
label_1535a0:
    // 0x1535a0: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x1535a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1535a4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1535a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1535a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1535A8u;
    {
        const bool branch_taken_0x1535a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1535ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535A8u;
        // 0x1535ac: 0xaca30038  sw          $v1, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535a8) {
            ctx->pc = 0x1535D0u;
            goto label_1535d0;
        }
    }
    ctx->pc = 0x1535B0u;
    // 0x1535b0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1535b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1535b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1535b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1535b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1535B8u;
    {
        const bool branch_taken_0x1535b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535B8u;
        // 0x1535bc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535b8) {
            ctx->pc = 0x1535D0u;
            goto label_1535d0;
        }
    }
    ctx->pc = 0x1535C0u;
    // 0x1535c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1535c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1535c4: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1535c4u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1535c8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1535c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1535cc: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x1535ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
label_1535d0:
    // 0x1535d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1535d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1535d4:
    // 0x1535d4: 0xc0549fa  jal         func_1527E8
    ctx->pc = 0x1535D4u;
    SET_GPR_U32(ctx, 31, 0x1535DCu);
    ctx->pc = 0x1535D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535D4u;
    // 0x1535d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1527E8u, 0x1535D4u, 0x1535DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535DCu;
label_1535dc:
    // 0x1535dc: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x1535dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1535e0:
    // 0x1535e0: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x1535e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
    // 0x1535e4: 0x5440007c  bnel        $v0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x1535E4u;
    {
        const bool branch_taken_0x1535e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1535e4) {
            ctx->pc = 0x1535E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1535E4u;
            // 0x1535e8: 0x2625079c  addiu       $a1, $s1, 0x79C (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1948));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1537D8u;
            goto label_1537d8;
        }
    }
    ctx->pc = 0x1535ECu;
    // 0x1535ec: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x1535ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x1535f0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1535F0u;
    {
        const bool branch_taken_0x1535f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535F0u;
        // 0x1535f4: 0x2626071c  addiu       $a2, $s1, 0x71C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535f0) {
            ctx->pc = 0x1536E4u;
            goto label_1536e4;
        }
    }
    ctx->pc = 0x1535F8u;
    // 0x1535f8: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1535f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1535fc: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x1535fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x153600: 0x8cc4003c  lw          $a0, 0x3C($a2)
    ctx->pc = 0x153600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x153604: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x153604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x153608: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x153608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15360c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15360Cu;
    {
        const bool branch_taken_0x15360c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15360Cu;
        // 0x153610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15360c) {
            ctx->pc = 0x15361Cu;
            goto label_15361c;
        }
    }
    ctx->pc = 0x153614u;
    // 0x153614: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x153614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x153618: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x153618u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15361c:
    // 0x15361c: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x15361Cu;
    {
        const bool branch_taken_0x15361c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x153620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15361Cu;
        // 0x153620: 0x32a20004  andi        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15361c) {
            ctx->pc = 0x1536E8u;
            goto label_1536e8;
        }
    }
    ctx->pc = 0x153624u;
    // 0x153624: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x153624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153628: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x153628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x15362c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x15362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x153630: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x153630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x153634: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x153634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x153638: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x153638u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x15363c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15363cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x153640: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x153640u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x153644: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x153644u;
    {
        const bool branch_taken_0x153644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x153648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153644u;
        // 0x153648: 0xaca40030  sw          $a0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153644) {
            ctx->pc = 0x1536A8u;
            goto label_1536a8;
        }
    }
    ctx->pc = 0x15364Cu;
    // 0x15364c: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x15364cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x153650: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x153650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x153654: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x153654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x153658: 0x54800020  bnel        $a0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x153658u;
    {
        const bool branch_taken_0x153658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x153658) {
            ctx->pc = 0x15365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153658u;
            // 0x15365c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1536DCu;
            goto label_1536dc;
        }
    }
    ctx->pc = 0x153660u;
    // 0x153660: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x153660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x153664: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x153664u;
    {
        const bool branch_taken_0x153664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153664) {
            ctx->pc = 0x153668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153664u;
            // 0x153668: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153698u;
            goto label_153698;
        }
    }
    ctx->pc = 0x15366Cu;
    // 0x15366c: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x15366cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x153670: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x153670u;
    {
        const bool branch_taken_0x153670 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x153674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153670u;
        // 0x153674: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153670) {
            ctx->pc = 0x1536D8u;
            goto label_1536d8;
        }
    }
    ctx->pc = 0x153678u;
    // 0x153678: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x153678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x15367c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15367Cu;
    {
        const bool branch_taken_0x15367c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15367Cu;
        // 0x153680: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15367c) {
            ctx->pc = 0x1536D8u;
            goto label_1536d8;
        }
    }
    ctx->pc = 0x153684u;
    // 0x153684: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x153684u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x153688: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x153688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15368c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15368Cu;
    {
        const bool branch_taken_0x15368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15368Cu;
        // 0x153690: 0xaca2003c  sw          $v0, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15368c) {
            ctx->pc = 0x1536D8u;
            goto label_1536d8;
        }
    }
    ctx->pc = 0x153694u;
    // 0x153694: 0x0  nop
    ctx->pc = 0x153694u;
    // NOP
label_153698:
    // 0x153698: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x153698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x15369c: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x15369cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x1536a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1536A0u;
    {
        const bool branch_taken_0x1536a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536A0u;
        // 0x1536a4: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536a0) {
            ctx->pc = 0x1536D8u;
            goto label_1536d8;
        }
    }
    ctx->pc = 0x1536A8u;
label_1536a8:
    // 0x1536a8: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x1536a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x1536ac: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1536acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1536b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1536B0u;
    {
        const bool branch_taken_0x1536b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1536B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536B0u;
        // 0x1536b4: 0xacc30038  sw          $v1, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536b0) {
            ctx->pc = 0x1536D8u;
            goto label_1536d8;
        }
    }
    ctx->pc = 0x1536B8u;
    // 0x1536b8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x1536b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1536bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1536bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1536c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1536C0u;
    {
        const bool branch_taken_0x1536c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536C0u;
        // 0x1536c4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536c0) {
            ctx->pc = 0x1536D8u;
            goto label_1536d8;
        }
    }
    ctx->pc = 0x1536C8u;
    // 0x1536c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1536c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1536cc: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1536ccu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1536d0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1536d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1536d4: 0xacc20038  sw          $v0, 0x38($a2)
    ctx->pc = 0x1536d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
label_1536d8:
    // 0x1536d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1536d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1536dc:
    // 0x1536dc: 0xc0549fa  jal         func_1527E8
    ctx->pc = 0x1536DCu;
    SET_GPR_U32(ctx, 31, 0x1536E4u);
    ctx->pc = 0x1536E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536DCu;
    // 0x1536e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1527E8u, 0x1536DCu, 0x1536E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536E4u;
label_1536e4:
    // 0x1536e4: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x1536e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_1536e8:
    // 0x1536e8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1536E8u;
    {
        const bool branch_taken_0x1536e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536E8u;
        // 0x1536ec: 0x2626075c  addiu       $a2, $s1, 0x75C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1884));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536e8) {
            ctx->pc = 0x1537D4u;
            goto label_1537d4;
        }
    }
    ctx->pc = 0x1536F0u;
    // 0x1536f0: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1536f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1536f4: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x1536f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1536f8: 0x8cc4003c  lw          $a0, 0x3C($a2)
    ctx->pc = 0x1536f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1536fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1536fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x153700: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x153700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x153704: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153704u;
    {
        const bool branch_taken_0x153704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153704u;
        // 0x153708: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153704) {
            ctx->pc = 0x153714u;
            goto label_153714;
        }
    }
    ctx->pc = 0x15370Cu;
    // 0x15370c: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x15370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x153710: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x153710u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_153714:
    // 0x153714: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x153714u;
    {
        const bool branch_taken_0x153714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x153718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153714u;
        // 0x153718: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153714) {
            ctx->pc = 0x1537D4u;
            goto label_1537d4;
        }
    }
    ctx->pc = 0x15371Cu;
    // 0x15371c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x15371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x153720: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x153720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x153724: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x153724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x153728: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x153728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15372c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x15372cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x153730: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x153730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x153734: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x153734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x153738: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x153738u;
    {
        const bool branch_taken_0x153738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153738u;
        // 0x15373c: 0xaca40030  sw          $a0, 0x30($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153738) {
            ctx->pc = 0x153798u;
            goto label_153798;
        }
    }
    ctx->pc = 0x153740u;
    // 0x153740: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x153740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x153744: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x153744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x153748: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x153748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x15374c: 0x5480001f  bnel        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x15374Cu;
    {
        const bool branch_taken_0x15374c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15374c) {
            ctx->pc = 0x153750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15374Cu;
            // 0x153750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1537CCu;
            goto label_1537cc;
        }
    }
    ctx->pc = 0x153754u;
    // 0x153754: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x153754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x153758: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x153758u;
    {
        const bool branch_taken_0x153758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153758) {
            ctx->pc = 0x15375Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153758u;
            // 0x15375c: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153788u;
            goto label_153788;
        }
    }
    ctx->pc = 0x153760u;
    // 0x153760: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x153760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x153764: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x153764u;
    {
        const bool branch_taken_0x153764 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x153768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153764u;
        // 0x153768: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153764) {
            ctx->pc = 0x1537C8u;
            goto label_1537c8;
        }
    }
    ctx->pc = 0x15376Cu;
    // 0x15376c: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x15376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x153770: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x153770u;
    {
        const bool branch_taken_0x153770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153770u;
        // 0x153774: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153770) {
            ctx->pc = 0x1537C8u;
            goto label_1537c8;
        }
    }
    ctx->pc = 0x153778u;
    // 0x153778: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x153778u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15377c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x15377cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x153780: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x153780u;
    {
        const bool branch_taken_0x153780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153780u;
        // 0x153784: 0xaca2003c  sw          $v0, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153780) {
            ctx->pc = 0x1537C8u;
            goto label_1537c8;
        }
    }
    ctx->pc = 0x153788u;
label_153788:
    // 0x153788: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x153788u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x15378c: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x15378cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x153790: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x153790u;
    {
        const bool branch_taken_0x153790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153790u;
        // 0x153794: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153790) {
            ctx->pc = 0x1537C8u;
            goto label_1537c8;
        }
    }
    ctx->pc = 0x153798u;
label_153798:
    // 0x153798: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x153798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x15379c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x15379cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1537a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1537A0u;
    {
        const bool branch_taken_0x1537a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1537A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537A0u;
        // 0x1537a4: 0xacc30038  sw          $v1, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537a0) {
            ctx->pc = 0x1537C8u;
            goto label_1537c8;
        }
    }
    ctx->pc = 0x1537A8u;
    // 0x1537a8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x1537a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1537ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1537acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1537b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1537B0u;
    {
        const bool branch_taken_0x1537b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1537B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537B0u;
        // 0x1537b4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537b0) {
            ctx->pc = 0x1537C8u;
            goto label_1537c8;
        }
    }
    ctx->pc = 0x1537B8u;
    // 0x1537b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1537b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1537bc: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1537bcu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1537c0: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1537c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1537c4: 0xacc20038  sw          $v0, 0x38($a2)
    ctx->pc = 0x1537c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
label_1537c8:
    // 0x1537c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1537c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1537cc:
    // 0x1537cc: 0xc0549fa  jal         func_1527E8
    ctx->pc = 0x1537CCu;
    SET_GPR_U32(ctx, 31, 0x1537D4u);
    ctx->pc = 0x1537D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537CCu;
    // 0x1537d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1527E8u, 0x1537CCu, 0x1537D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537D4u;
label_1537d4:
    // 0x1537d4: 0x2625079c  addiu       $a1, $s1, 0x79C
    ctx->pc = 0x1537d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1948));
label_1537d8:
    // 0x1537d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1537d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1537dc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1537DCu;
    {
        const bool branch_taken_0x1537dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1537E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537DCu;
        // 0x1537e0: 0x32e20020  andi        $v0, $s7, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537dc) {
            ctx->pc = 0x153858u;
            goto label_153858;
        }
    }
    ctx->pc = 0x1537E4u;
    // 0x1537e4: 0x8e230264  lw          $v1, 0x264($s1)
    ctx->pc = 0x1537e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x1537e8: 0x151240  sll         $v0, $s5, 9
    ctx->pc = 0x1537e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 9));
    // 0x1537ec: 0x30468000  andi        $a2, $v0, 0x8000
    ctx->pc = 0x1537ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1537f0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1537f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1537f4: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1537f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1537f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1537f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1537fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1537FCu;
    {
        const bool branch_taken_0x1537fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537FCu;
        // 0x153800: 0x8cb00010  lw          $s0, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537fc) {
            ctx->pc = 0x153818u;
            goto label_153818;
        }
    }
    ctx->pc = 0x153804u;
    // 0x153804: 0xc054016  jal         func_150058
    ctx->pc = 0x153804u;
    SET_GPR_U32(ctx, 31, 0x15380Cu);
    ctx->pc = 0x153808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153804u;
    // 0x153808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150058u, 0x153804u, 0x15380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15380Cu;
label_15380c:
    // 0x15380c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15380Cu;
    {
        const bool branch_taken_0x15380c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15380Cu;
        // 0x153810: 0x8e42037c  lw          $v0, 0x37C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15380c) {
            ctx->pc = 0x153850u;
            goto label_153850;
        }
    }
    ctx->pc = 0x153814u;
    // 0x153814: 0x0  nop
    ctx->pc = 0x153814u;
    // NOP
label_153818:
    // 0x153818: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x153818u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x15381c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x153820: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x153820u;
    {
        const bool branch_taken_0x153820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153820) {
            ctx->pc = 0x153824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153820u;
            // 0x153824: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153838u;
            goto label_153838;
        }
    }
    ctx->pc = 0x153828u;
    // 0x153828: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x153828u;
    SET_GPR_U32(ctx, 31, 0x153830u);
    ctx->pc = 0x15382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153828u;
    // 0x15382c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x153828u, 0x153830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153830u;
label_153830:
    // 0x153830: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153830u;
    {
        const bool branch_taken_0x153830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153830u;
        // 0x153834: 0x8e42037c  lw          $v0, 0x37C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153830) {
            ctx->pc = 0x153850u;
            goto label_153850;
        }
    }
    ctx->pc = 0x153838u;
label_153838:
    // 0x153838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x153838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15383c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15383Cu;
    {
        const bool branch_taken_0x15383c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15383c) {
            ctx->pc = 0x153840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15383Cu;
            // 0x153840: 0x8e42037c  lw          $v0, 0x37C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153850u;
            goto label_153850;
        }
    }
    ctx->pc = 0x153844u;
    // 0x153844: 0xc053fe6  jal         func_14FF98
    ctx->pc = 0x153844u;
    SET_GPR_U32(ctx, 31, 0x15384Cu);
    ctx->pc = 0x153848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153844u;
    // 0x153848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF98u, 0x153844u, 0x15384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15384Cu;
label_15384c:
    // 0x15384c: 0x8e42037c  lw          $v0, 0x37C($s2)
    ctx->pc = 0x15384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 892)));
label_153850:
    // 0x153850: 0xae021244  sw          $v0, 0x1244($s0)
    ctx->pc = 0x153850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4676), GPR_U32(ctx, 2));
    // 0x153854: 0x32e20020  andi        $v0, $s7, 0x20
    ctx->pc = 0x153854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)32);
label_153858:
    // 0x153858: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x153858u;
    {
        const bool branch_taken_0x153858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153858u;
        // 0x15385c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153858) {
            ctx->pc = 0x153884u;
            goto label_153884;
        }
    }
    ctx->pc = 0x153860u;
    // 0x153860: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x153860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x153864: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x153864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x153868: 0xc053d7c  jal         func_14F5F0
    ctx->pc = 0x153868u;
    SET_GPR_U32(ctx, 31, 0x153870u);
    ctx->pc = 0x15386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153868u;
    // 0x15386c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F5F0u, 0x153868u, 0x153870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153870u;
label_153870:
    // 0x153870: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153870u;
    {
        const bool branch_taken_0x153870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153870u;
        // 0x153874: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153870) {
            ctx->pc = 0x153880u;
            goto label_153880;
        }
    }
    ctx->pc = 0x153878u;
    // 0x153878: 0xc053f58  jal         func_14FD60
    ctx->pc = 0x153878u;
    SET_GPR_U32(ctx, 31, 0x153880u);
    ctx->pc = 0x15387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153878u;
    // 0x15387c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD60u, 0x153878u, 0x153880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153880u;
label_153880:
    // 0x153880: 0x32a20080  andi        $v0, $s5, 0x80
    ctx->pc = 0x153880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
label_153884:
    // 0x153884: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x153884u;
    {
        const bool branch_taken_0x153884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153884) {
            ctx->pc = 0x153888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153884u;
            // 0x153888: 0xc62103cc  lwc1        $f1, 0x3CC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x153898u;
            goto label_153898;
        }
    }
    ctx->pc = 0x15388Cu;
    // 0x15388c: 0x8e220694  lw          $v0, 0x694($s1)
    ctx->pc = 0x15388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x153890: 0xae220698  sw          $v0, 0x698($s1)
    ctx->pc = 0x153890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 2));
    // 0x153894: 0xc62103cc  lwc1        $f1, 0x3CC($s1)
    ctx->pc = 0x153894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_153898:
    // 0x153898: 0xc78082c4  lwc1        $f0, -0x7D3C($gp)
    ctx->pc = 0x153898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15389c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15389cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1538a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1538A0u;
    {
        const bool branch_taken_0x1538a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1538A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1538A0u;
        // 0x1538a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1538a0) {
            ctx->pc = 0x1538C0u;
            goto label_1538c0;
        }
    }
    ctx->pc = 0x1538A8u;
    // 0x1538a8: 0x8e250694  lw          $a1, 0x694($s1)
    ctx->pc = 0x1538a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x1538ac: 0x26240698  addiu       $a0, $s1, 0x698
    ctx->pc = 0x1538acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1688));
    // 0x1538b0: 0xc78c82c8  lwc1        $f12, -0x7D38($gp)
    ctx->pc = 0x1538b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1538b4: 0xc067c32  jal         func_19F0C8
    ctx->pc = 0x1538B4u;
    SET_GPR_U32(ctx, 31, 0x1538BCu);
    ctx->pc = 0x1538B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538B4u;
    // 0x1538b8: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0C8u, 0x1538B4u, 0x1538BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1538BCu;
label_1538bc:
    // 0x1538bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1538bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1538c0:
    // 0x1538c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1538c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1538c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1538c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1538c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1538c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1538cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1538ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1538d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1538d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1538d4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1538d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1538d8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1538d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1538dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1538dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1538e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1538E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1538E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1538E0u;
        // 0x1538e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1538E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1538E8u;
}
