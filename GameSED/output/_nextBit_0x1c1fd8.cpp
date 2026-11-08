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

// Function: _nextBit
// Address: 0x1c1fd8 - 0x1c2128
void _nextBit_0x1c1fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_nextBit_0x1c1fd8");
#endif

    switch (ctx->pc) {
        case 0x1c2028u: goto label_1c2028;
        case 0x1c203cu: goto label_1c203c;
        case 0x1c20a8u: goto label_1c20a8;
        case 0x1c20fcu: goto label_1c20fc;
        default: break;
    }

    ctx->pc = 0x1c1fd8u;

    // 0x1c1fd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c1fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c1fdc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1fe0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c1fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c1fe4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1c1fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1c1fe8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c1fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c1fec: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1c1fecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1ff0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c1ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c1ff4: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x1c1ff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x1c1ff8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1c1ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1c1ffc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2004: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c2004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2008: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c200c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c200cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c2010: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c2010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2014: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1c2014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1c2018: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C2018u;
    {
        const bool branch_taken_0x1c2018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2018u;
        // 0x1c201c: 0x3c130025  lui         $s3, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2018) {
            ctx->pc = 0x1C206Cu;
            goto label_1c206c;
        }
    }
    ctx->pc = 0x1C2020u;
    // 0x1c2020: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1c2020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2024: 0x0  nop
    ctx->pc = 0x1c2024u;
    // NOP
label_1c2028:
    // 0x1c2028: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c2028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c202c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C202Cu;
    {
        const bool branch_taken_0x1c202c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C202Cu;
        // 0x1c2030: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c202c) {
            ctx->pc = 0x1C2040u;
            goto label_1c2040;
        }
    }
    ctx->pc = 0x1C2034u;
    // 0x1c2034: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C2034u;
    SET_GPR_U32(ctx, 31, 0x1C203Cu);
    ctx->pc = 0x1C2038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2034u;
    // 0x1c2038: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C2034u, 0x1C203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C203Cu;
label_1c203c:
    // 0x1c203c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c203cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2040:
    // 0x1c2040: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c2040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c2044: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1c2044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2048: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c2048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c204c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1c204cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c2050: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2050u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c2054: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1c2054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1c2058: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c2058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c205c: 0x1045fff2  beq         $v0, $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C205Cu;
    {
        const bool branch_taken_0x1c205c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C205Cu;
        // 0x1c2060: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c205c) {
            ctx->pc = 0x1C2028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2028;
        }
    }
    ctx->pc = 0x1C2064u;
    // 0x1c2064: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2064u;
    {
        const bool branch_taken_0x1c2064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2064u;
        // 0x1c2068: 0x8e220818  lw          $v0, 0x818($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2064) {
            ctx->pc = 0x1C2070u;
            goto label_1c2070;
        }
    }
    ctx->pc = 0x1C206Cu;
label_1c206c:
    // 0x1c206c: 0x8e220818  lw          $v0, 0x818($s1)
    ctx->pc = 0x1c206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
label_1c2070:
    // 0x1c2070: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2070u;
    {
        const bool branch_taken_0x1c2070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2070u;
        // 0x1c2074: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2070) {
            ctx->pc = 0x1C2088u;
            goto label_1c2088;
        }
    }
    ctx->pc = 0x1C2078u;
    // 0x1c2078: 0x8e22083c  lw          $v0, 0x83C($s1)
    ctx->pc = 0x1c2078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2108)));
    // 0x1c207c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1c207cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c2080: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2080u;
    {
        const bool branch_taken_0x1c2080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2080u;
        // 0x1c2084: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2080) {
            ctx->pc = 0x1C20B4u;
            goto label_1c20b4;
        }
    }
    ctx->pc = 0x1C2088u;
label_1c2088:
    // 0x1c2088: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c2088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c208c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c208cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c2090: 0x2665dcc0  addiu       $a1, $s3, -0x2340
    ctx->pc = 0x1c2090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958272));
    // 0x1c2094: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c2094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c2098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c209c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1c209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1c20a0: 0xc0706ee  jal         func_1C1BB8
    ctx->pc = 0x1C20A0u;
    SET_GPR_U32(ctx, 31, 0x1C20A8u);
    ctx->pc = 0x1C20A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20A0u;
    // 0x1c20a4: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BB8u, 0x1C20A0u, 0x1C20A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20A8u;
label_1c20a8:
    // 0x1c20a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c20a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c20ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c20acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c20b0: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x1c20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
label_1c20b4:
    // 0x1c20b4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c20b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c20b8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1c20b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1c20bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c20c0: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x1c20c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1c20c4: 0xae25083c  sw          $a1, 0x83C($s1)
    ctx->pc = 0x1c20c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 5));
    // 0x1c20c8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1c20c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1c20cc: 0x8e300838  lw          $s0, 0x838($s1)
    ctx->pc = 0x1c20ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2104)));
    // 0x1c20d0: 0x41f02  srl         $v1, $a0, 28
    ctx->pc = 0x1c20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x1c20d4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1c20d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1c20d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c20dc: 0x2662dcc0  addiu       $v0, $s3, -0x2340
    ctx->pc = 0x1c20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958272));
    // 0x1c20e0: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x1c20e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1c20e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c20e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c20e8: 0xb08006  srlv        $s0, $s0, $a1
    ctx->pc = 0x1c20e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
    // 0x1c20ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c20ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c20f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c20f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20f4: 0xc0706ee  jal         func_1C1BB8
    ctx->pc = 0x1C20F4u;
    SET_GPR_U32(ctx, 31, 0x1C20FCu);
    ctx->pc = 0x1C20F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20F4u;
    // 0x1c20f8: 0xae220818  sw          $v0, 0x818($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BB8u, 0x1C20F4u, 0x1C20FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20FCu;
label_1c20fc:
    // 0x1c20fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c20fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c2100: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c2100u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c2104: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c2104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2108: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x1c2108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
    // 0x1c210c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c210cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2110: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c2110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2114: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c2114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2118: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c2118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c211c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c211cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2120: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2120u;
        // 0x1c2124: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2128u;
}
