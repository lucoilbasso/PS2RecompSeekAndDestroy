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

// Function: _ipuVdec
// Address: 0x1c1c68 - 0x1c1de0
void _ipuVdec_0x1c1c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ipuVdec_0x1c1c68");
#endif

    switch (ctx->pc) {
        case 0x1c1cb8u: goto label_1c1cb8;
        case 0x1c1cd0u: goto label_1c1cd0;
        case 0x1c1d48u: goto label_1c1d48;
        case 0x1c1d60u: goto label_1c1d60;
        default: break;
    }

    ctx->pc = 0x1c1c68u;

    // 0x1c1c68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c1c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c1c6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1c70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c1c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c1c74: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1c1c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1c1c78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c1c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c1c7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1c80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c1c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c1c84: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1c1c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1c1c88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1c1c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1c1c8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1c94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c1c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1c98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c9c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1c1c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c1ca0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1ca4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1c1ca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c1ca8: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C1CA8u;
    {
        const bool branch_taken_0x1c1ca8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CA8u;
        // 0x1c1cac: 0x58680  sll         $s0, $a1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ca8) {
            ctx->pc = 0x1C1D00u;
            goto label_1c1d00;
        }
    }
    ctx->pc = 0x1C1CB0u;
    // 0x1c1cb0: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x1c1cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    // 0x1c1cb4: 0x0  nop
    ctx->pc = 0x1c1cb4u;
    // NOP
label_1c1cb8:
    // 0x1c1cb8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1c1cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1cbc: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c1cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c1cc0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1CC0u;
    {
        const bool branch_taken_0x1c1cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CC0u;
        // 0x1c1cc4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cc0) {
            ctx->pc = 0x1C1CD4u;
            goto label_1c1cd4;
        }
    }
    ctx->pc = 0x1C1CC8u;
    // 0x1c1cc8: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C1CC8u;
    SET_GPR_U32(ctx, 31, 0x1C1CD0u);
    ctx->pc = 0x1C1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CC8u;
    // 0x1c1ccc: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C1CC8u, 0x1C1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CD0u;
label_1c1cd0:
    // 0x1c1cd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cd4:
    // 0x1c1cd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1cd8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1c1cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1cdc: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1c1cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1c1ce0: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1c1ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c1ce4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c1ce8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1c1ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1cec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c1cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1c1cf0: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1C1CF0u;
    {
        const bool branch_taken_0x1c1cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CF0u;
        // 0x1c1cf4: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cf0) {
            ctx->pc = 0x1C1CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1cb8;
        }
    }
    ctx->pc = 0x1C1CF8u;
    // 0x1c1cf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1CF8u;
    {
        const bool branch_taken_0x1c1cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CF8u;
        // 0x1c1cfc: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cf8) {
            ctx->pc = 0x1C1D0Cu;
            goto label_1c1d0c;
        }
    }
    ctx->pc = 0x1C1D00u;
label_1c1d00:
    // 0x1c1d00: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x1c1d00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    // 0x1c1d04: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1c1d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1c1d08: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c1d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1c1d0c:
    // 0x1c1d0c: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x1c1d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1c1d10: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x1c1d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x1c1d14: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x1c1d14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x1c1d18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c1d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1c1d1c: 0x2665dcc0  addiu       $a1, $s3, -0x2340
    ctx->pc = 0x1c1d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958272));
    // 0x1c1d20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1d24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c1d28: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x1c1d28u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1d2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c1d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1d30: 0x4c1000e  bgez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1C1D30u;
    {
        const bool branch_taken_0x1c1d30 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1C1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D30u;
        // 0x1c1d34: 0xae230818  sw          $v1, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d30) {
            ctx->pc = 0x1C1D6Cu;
            goto label_1c1d6c;
        }
    }
    ctx->pc = 0x1C1D38u;
    // 0x1c1d38: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x1c1d38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1d3c: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x1c1d3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
    // 0x1c1d40: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c1d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d44: 0x0  nop
    ctx->pc = 0x1c1d44u;
    // NOP
label_1c1d48:
    // 0x1c1d48: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x1c1d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x1c1d4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1D4Cu;
    {
        const bool branch_taken_0x1c1d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D4Cu;
        // 0x1c1d50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d4c) {
            ctx->pc = 0x1C1D60u;
            goto label_1c1d60;
        }
    }
    ctx->pc = 0x1C1D54u;
    // 0x1c1d54: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1c1d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1c1d58: 0xc06f698  jal         func_1BDA60
    ctx->pc = 0x1C1D58u;
    SET_GPR_U32(ctx, 31, 0x1C1D60u);
    ctx->pc = 0x1C1D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D58u;
    // 0x1c1d5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA60u, 0x1C1D58u, 0x1C1D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D60u;
label_1c1d60:
    // 0x1c1d60: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x1c1d60u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1d64: 0x4c0fff8  bltz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C1D64u;
    {
        const bool branch_taken_0x1c1d64 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1C1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D64u;
        // 0x1c1d68: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d64) {
            ctx->pc = 0x1C1D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1d48;
        }
    }
    ctx->pc = 0x1C1D6Cu;
label_1c1d6c:
    // 0x1c1d6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1d70: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1d74: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x1c1d74u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x1c1d78: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1c1d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1c1d7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x1c1d80: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1c1d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c1d84: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c1d84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c1d88: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1D88u;
    {
        const bool branch_taken_0x1c1d88 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D88u;
        // 0x1c1d8c: 0xae230838  sw          $v1, 0x838($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d88) {
            ctx->pc = 0x1C1DA0u;
            goto label_1c1da0;
        }
    }
    ctx->pc = 0x1C1D90u;
    // 0x1c1d90: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1c1d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1c1d94: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1c1d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c1d98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1D98u;
    {
        const bool branch_taken_0x1c1d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D98u;
        // 0x1c1d9c: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d98) {
            ctx->pc = 0x1C1DA4u;
            goto label_1c1da4;
        }
    }
    ctx->pc = 0x1C1DA0u;
label_1c1da0:
    // 0x1c1da0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c1da4:
    // 0x1c1da4: 0xae22083c  sw          $v0, 0x83C($s1)
    ctx->pc = 0x1c1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 2));
    // 0x1c1da8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1c1da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c1dac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c1dacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c1db0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1c1db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1c1db4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1c1db4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c1db8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c1dbc: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x1c1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
    // 0x1c1dc0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1c1dc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1c1dc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c1dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1dc8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c1dc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1dcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c1dccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1dd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c1dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DD8u;
        // 0x1c1ddc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1DE0u;
}
