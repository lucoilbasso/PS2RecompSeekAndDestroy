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

// Function: _waitBdecOut
// Address: 0x1c0920 - 0x1c0b1c
void _waitBdecOut_0x1c0920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_waitBdecOut_0x1c0920");
#endif

    switch (ctx->pc) {
        case 0x1c0950u: goto label_1c0950;
        case 0x1c09a0u: goto label_1c09a0;
        case 0x1c09c8u: goto label_1c09c8;
        case 0x1c0a50u: goto label_1c0a50;
        case 0x1c0a68u: goto label_1c0a68;
        case 0x1c0a88u: goto label_1c0a88;
        case 0x1c0a90u: goto label_1c0a90;
        case 0x1c0ae0u: goto label_1c0ae0;
        default: break;
    }

    ctx->pc = 0x1c0920u;

    // 0x1c0920: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c0920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1c0924: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1c0924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1c0928: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c0928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c092c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1c092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1c0930: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1c0930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1c0934: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1c0934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1c0938: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1c0938u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c093c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1c093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1c0940: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1c0940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1c0944: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1c0944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1c0948: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1C0948u;
    SET_GPR_U32(ctx, 31, 0x1C0950u);
    ctx->pc = 0x1C094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0948u;
    // 0x1c094c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C0948u, 0x1C0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0950u;
label_1c0950:
    // 0x1c0950: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c0950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0954: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x1c0954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x1c0958: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c0958u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x1c095c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C095Cu;
    {
        const bool branch_taken_0x1c095c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C095Cu;
        // 0x1c0960: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c095c) {
            ctx->pc = 0x1C09E4u;
            goto label_1c09e4;
        }
    }
    ctx->pc = 0x1C0964u;
    // 0x1c0964: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1c0964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1c0968: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c0968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c096c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1c096cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1c0970: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C0970u;
    {
        const bool branch_taken_0x1c0970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0970u;
        // 0x1c0974: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0970) {
            ctx->pc = 0x1C09E8u;
            goto label_1c09e8;
        }
    }
    ctx->pc = 0x1C0978u;
    // 0x1c0978: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x1c0978u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x1c097c: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x1c097cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0980: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x1c0980u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0984: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x1c0984u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0988: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x1c0988u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x1c098c: 0x3652b400  ori         $s2, $s2, 0xB400
    ctx->pc = 0x1c098cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)46080);
    // 0x1c0990: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1c0990u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0994: 0x3631b020  ori         $s1, $s1, 0xB020
    ctx->pc = 0x1c0994u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)45088);
    // 0x1c0998: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x1c0998u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
    // 0x1c099c: 0x0  nop
    ctx->pc = 0x1c099cu;
    // NOP
label_1c09a0:
    // 0x1c09a0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1c09a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c09a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C09A4u;
    {
        const bool branch_taken_0x1c09a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c09a4) {
            ctx->pc = 0x1C09C8u;
            goto label_1c09c8;
        }
    }
    ctx->pc = 0x1C09ACu;
    // 0x1c09ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c09acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c09b0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1c09b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1c09b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C09B4u;
    {
        const bool branch_taken_0x1c09b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09B4u;
        // 0x1c09b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09b4) {
            ctx->pc = 0x1C09C8u;
            goto label_1c09c8;
        }
    }
    ctx->pc = 0x1C09BCu;
    // 0x1c09bc: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x1c09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x1c09c0: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C09C0u;
    SET_GPR_U32(ctx, 31, 0x1C09C8u);
    ctx->pc = 0x1C09C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09C0u;
    // 0x1c09c4: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C09C0u, 0x1C09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09C8u;
label_1c09c8:
    // 0x1c09c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c09cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C09CCu;
    {
        const bool branch_taken_0x1c09cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09CCu;
        // 0x1c09d0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09cc) {
            ctx->pc = 0x1C09E8u;
            goto label_1c09e8;
        }
    }
    ctx->pc = 0x1C09D4u;
    // 0x1c09d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c09d8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1c09d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1c09dc: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C09DCu;
    {
        const bool branch_taken_0x1c09dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c09dc) {
            ctx->pc = 0x1C09A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c09a0;
        }
    }
    ctx->pc = 0x1C09E4u;
label_1c09e4:
    // 0x1c09e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1c09e8:
    // 0x1c09e8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c09e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c09ec: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x1c09ecu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x1c09f0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1c09f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1c09f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c09f8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1c09f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c09fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c09fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c0a00: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0A00u;
    {
        const bool branch_taken_0x1c0a00 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A00u;
        // 0x1c0a04: 0xae630838  sw          $v1, 0x838($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a00) {
            ctx->pc = 0x1C0A24u;
            goto label_1c0a24;
        }
    }
    ctx->pc = 0x1C0A08u;
    // 0x1c0a08: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x1c0a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1c0a0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0A0Cu;
    {
        const bool branch_taken_0x1c0a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A0Cu;
        // 0x1c0a10: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a0c) {
            ctx->pc = 0x1C0A1Cu;
            goto label_1c0a1c;
        }
    }
    ctx->pc = 0x1C0A14u;
    // 0x1c0a14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0A14u;
    {
        const bool branch_taken_0x1c0a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A14u;
        // 0x1c0a18: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a14) {
            ctx->pc = 0x1C0A28u;
            goto label_1c0a28;
        }
    }
    ctx->pc = 0x1C0A1Cu;
label_1c0a1c:
    // 0x1c0a1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0A1Cu;
    {
        const bool branch_taken_0x1c0a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A1Cu;
        // 0x1c0a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a1c) {
            ctx->pc = 0x1C0A28u;
            goto label_1c0a28;
        }
    }
    ctx->pc = 0x1C0A24u;
label_1c0a24:
    // 0x1c0a24: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c0a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c0a28:
    // 0x1c0a28: 0xae62083c  sw          $v0, 0x83C($s3)
    ctx->pc = 0x1c0a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2108), GPR_U32(ctx, 2));
    // 0x1c0a2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0a30: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1c0a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1c0a34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c0a34u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c0a38: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1c0a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1c0a3c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C0A3Cu;
    {
        const bool branch_taken_0x1c0a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A3Cu;
        // 0x1c0a40: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a3c) {
            ctx->pc = 0x1C0AF0u;
            goto label_1c0af0;
        }
    }
    ctx->pc = 0x1C0A44u;
    // 0x1c0a44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c0a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a48: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C0A48u;
    SET_GPR_U32(ctx, 31, 0x1C0A50u);
    ctx->pc = 0x1C0A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A48u;
    // 0x1c0a4c: 0x24a5b4f0  addiu       $a1, $a1, -0x4B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C0A48u, 0x1C0A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A50u;
label_1c0a50:
    // 0x1c0a50: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1c0a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c0a54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0a58: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x1c0a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x1c0a5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a60: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C0A60u;
    SET_GPR_U32(ctx, 31, 0x1C0A68u);
    ctx->pc = 0x1C0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A60u;
    // 0x1c0a64: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C0A60u, 0x1C0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A68u;
label_1c0a68:
    // 0x1c0a68: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c0a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c0a6c: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x1c0a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x1c0a70: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1c0a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0a74: 0xac232010  sw          $v1, 0x2010($at)
    ctx->pc = 0x1c0a74u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x1c0a78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0a7c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c0a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1c0a80: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C0A80u;
    SET_GPR_U32(ctx, 31, 0x1C0A88u);
    ctx->pc = 0x1C0A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A80u;
    // 0x1c0a84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C0A80u, 0x1C0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A88u;
label_1c0a88:
    // 0x1c0a88: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C0A88u;
    SET_GPR_U32(ctx, 31, 0x1C0A90u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C0A88u, 0x1C0A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A90u;
label_1c0a90:
    // 0x1c0a90: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1c0a90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0a94: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1c0a94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0a98: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x1c0a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x1c0a9c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x1c0a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x1c0aa0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x1c0aa4: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x1c0aa4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x1c0aa8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c0aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c0aac: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x1c0aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x1c0ab0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1c0ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1c0ab4: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x1c0ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x1c0ab8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1c0ab8u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x1c0abc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1c0abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1c0ac0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1c0ac0u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0));
    // 0x1c0ac4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c0ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x1c0ac8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1c0ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1c0acc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1c0accu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1c0ad0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0AD0u;
    {
        const bool branch_taken_0x1c0ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AD0u;
        // 0x1c0ad4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ad0) {
            ctx->pc = 0x1C0AE4u;
            goto label_1c0ae4;
        }
    }
    ctx->pc = 0x1C0AD8u;
    // 0x1c0ad8: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1C0AD8u;
    SET_GPR_U32(ctx, 31, 0x1C0AE0u);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1C0AD8u, 0x1C0AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AE0u;
label_1c0ae0:
    // 0x1c0ae0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1c0ae4:
    // 0x1c0ae4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1c0ae4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ae8: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x1c0ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x1c0aec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c0aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1c0af0:
    // 0x1c0af0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1c0af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0af4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1c0af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c0af8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1c0af8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c0afc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1c0afcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c0b00: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1c0b00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c0b04: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1c0b04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c0b08: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1c0b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c0b0c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1c0b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0b10: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1c0b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0b14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B14u;
        // 0x1c0b18: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0B1Cu;
}
