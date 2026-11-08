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

// Function: __udivdi3
// Address: 0x1c8f58 - 0x1c94d4
void ps2___udivdi3_0x1c8f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___udivdi3_0x1c8f58");
#endif

    ctx->pc = 0x1c8f58u;

    // 0x1c8f58: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x1c8f58u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c8f5c: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x1c8f5cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1c8f60: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x1c8f60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c8f64: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x1c8f64u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x1c8f68: 0x4583c  dsll32      $t3, $a0, 0
    ctx->pc = 0x1c8f68u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c8f6c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1c8f6cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1c8f70: 0x150000e1  bnez        $t0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x1C8F70u;
    {
        const bool branch_taken_0x1c8f70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F70u;
        // 0x1c8f74: 0x148102b  sltu        $v0, $t2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f70) {
            ctx->pc = 0x1C92F8u;
            goto label_1c92f8;
        }
    }
    ctx->pc = 0x1C8F78u;
    // 0x1c8f78: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1c8f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8f7c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C8F7Cu;
    {
        const bool branch_taken_0x1c8f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F7Cu;
        // 0x1c8f80: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f7c) {
            ctx->pc = 0x1C90B8u;
            goto label_1c90b8;
        }
    }
    ctx->pc = 0x1C8F84u;
    // 0x1c8f84: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1c8f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8f88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8F88u;
    {
        const bool branch_taken_0x1c8f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F88u;
        // 0x1c8f8c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f88) {
            ctx->pc = 0x1C8FA0u;
            goto label_1c8fa0;
        }
    }
    ctx->pc = 0x1C8F90u;
    // 0x1c8f90: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1c8f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c8f94: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c8f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c8f98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8F98u;
    {
        const bool branch_taken_0x1c8f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F98u;
        // 0x1c8f9c: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f98) {
            ctx->pc = 0x1C8FB4u;
            goto label_1c8fb4;
        }
    }
    ctx->pc = 0x1C8FA0u;
label_1c8fa0:
    // 0x1c8fa0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c8fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c8fa4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8fa8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c8fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c8fac: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1c8facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c8fb0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c8fb0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c8fb4:
    // 0x1c8fb4: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1c8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c8fb8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c8fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c8fbc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c8fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8fc4: 0x9042bde0  lbu         $v0, -0x4220($v0)
    ctx->pc = 0x1c8fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x1c8fc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c8fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c8fcc: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1c8fccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c8fd0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8FD0u;
    {
        const bool branch_taken_0x1c8fd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FD0u;
        // 0x1c8fd4: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8fd0) {
            ctx->pc = 0x1C8FECu;
            goto label_1c8fec;
        }
    }
    ctx->pc = 0x1C8FD8u;
    // 0x1c8fd8: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1c8fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c8fdc: 0x4b1006  srlv        $v0, $t3, $v0
    ctx->pc = 0x1c8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
    // 0x1c8fe0: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1c8fe0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c8fe4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1c8fe4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c8fe8: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1c8fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
label_1c8fec:
    // 0x1c8fec: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x1c8fecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1c8ff0: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x1c8ff0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1c8ff4: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1c8ff4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1c8ff8: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x1c8ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1c8ffc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C8FFCu;
    {
        const bool branch_taken_0x1c8ffc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ffc) {
            ctx->pc = 0x1C9000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8FFCu;
            // 0x1c9000: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9004u;
            goto label_1c9004;
        }
    }
    ctx->pc = 0x1C9004u;
label_1c9004:
    // 0x1c9004: 0x1012  mflo        $v0
    ctx->pc = 0x1c9004u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9008: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9008u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c900c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c900cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9010: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c9014: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x1c9014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c9018: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c9018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c901c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c901cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c9020: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C9020u;
    {
        const bool branch_taken_0x1c9020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9020) {
            ctx->pc = 0x1C9024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9020u;
            // 0x1c9024: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9054u;
            goto label_1c9054;
        }
    }
    ctx->pc = 0x1C9028u;
    // 0x1c9028: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c902c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c902cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9030: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9030u;
    {
        const bool branch_taken_0x1c9030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9030u;
        // 0x1c9034: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9030) {
            ctx->pc = 0x1C9050u;
            goto label_1c9050;
        }
    }
    ctx->pc = 0x1C9038u;
    // 0x1c9038: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c9038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c903c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C903Cu;
    {
        const bool branch_taken_0x1c903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c903c) {
            ctx->pc = 0x1C9040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C903Cu;
            // 0x1c9040: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9054u;
            goto label_1c9054;
        }
    }
    ctx->pc = 0x1C9044u;
    // 0x1c9044: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c9044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c9048: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c904c: 0x0  nop
    ctx->pc = 0x1c904cu;
    // NOP
label_1c9050:
    // 0x1c9050: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1c9050u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1c9054:
    // 0x1c9054: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9054u;
    {
        const bool branch_taken_0x1c9054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9054) {
            ctx->pc = 0x1C9058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9054u;
            // 0x1c9058: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C905Cu;
            goto label_1c905c;
        }
    }
    ctx->pc = 0x1C905Cu;
label_1c905c:
    // 0x1c905c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1c905cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c9060: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x1c9060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1c9064: 0x1012  mflo        $v0
    ctx->pc = 0x1c9064u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9068: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9068u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c906c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c906cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9070: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c9074: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x1c9074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c9078: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c9078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c907c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c907cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c9080: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9080u;
    {
        const bool branch_taken_0x1c9080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9080u;
        // 0x1c9084: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9080) {
            ctx->pc = 0x1C90ACu;
            goto label_1c90ac;
        }
    }
    ctx->pc = 0x1C9088u;
    // 0x1c9088: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c908c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c908cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9090: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9090u;
    {
        const bool branch_taken_0x1c9090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9090u;
        // 0x1c9094: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9090) {
            ctx->pc = 0x1C90A8u;
            goto label_1c90a8;
        }
    }
    ctx->pc = 0x1C9098u;
    // 0x1c9098: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c9098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c909c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1c909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c90a0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c90a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c90a4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1c90a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1c90a8:
    // 0x1c90a8: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1c90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1c90ac:
    // 0x1c90ac: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1C90ACu;
    {
        const bool branch_taken_0x1c90ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90ACu;
        // 0x1c90b0: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90ac) {
            ctx->pc = 0x1C94A0u;
            goto label_1c94a0;
        }
    }
    ctx->pc = 0x1C90B4u;
    // 0x1c90b4: 0x0  nop
    ctx->pc = 0x1c90b4u;
    // NOP
label_1c90b8:
    // 0x1c90b8: 0x15200009  bnez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C90B8u;
    {
        const bool branch_taken_0x1c90b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C90BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90B8u;
        // 0x1c90bc: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90b8) {
            ctx->pc = 0x1C90E0u;
            goto label_1c90e0;
        }
    }
    ctx->pc = 0x1C90C0u;
    // 0x1c90c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c90c4: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C90C4u;
    {
        const bool branch_taken_0x1c90c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c90c4) {
            ctx->pc = 0x1C90C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C90C4u;
            // 0x1c90c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C90CCu;
            goto label_1c90cc;
        }
    }
    ctx->pc = 0x1C90CCu;
label_1c90cc:
    // 0x1c90cc: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x1c90ccu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c90d0: 0x1012  mflo        $v0
    ctx->pc = 0x1c90d0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c90d4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1c90d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c90d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c90d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c90dc: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1c90dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1c90e0:
    // 0x1c90e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C90E0u;
    {
        const bool branch_taken_0x1c90e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90E0u;
        // 0x1c90e4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90e0) {
            ctx->pc = 0x1C90F8u;
            goto label_1c90f8;
        }
    }
    ctx->pc = 0x1C90E8u;
    // 0x1c90e8: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1c90e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c90ec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c90f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C90F0u;
    {
        const bool branch_taken_0x1c90f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90F0u;
        // 0x1c90f4: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90f0) {
            ctx->pc = 0x1C910Cu;
            goto label_1c910c;
        }
    }
    ctx->pc = 0x1C90F8u;
label_1c90f8:
    // 0x1c90f8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c90f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c90fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c90fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c9100: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c9100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c9104: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1c9104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9108: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c9108u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c910c:
    // 0x1c910c: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1c910cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c9110: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c9110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c9114: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c9114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c9118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c911c: 0x9042bde0  lbu         $v0, -0x4220($v0)
    ctx->pc = 0x1c911cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x1c9120: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c9120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9124: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1c9124u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c9128: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9128u;
    {
        const bool branch_taken_0x1c9128 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9128u;
        // 0x1c912c: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9128) {
            ctx->pc = 0x1C9148u;
            goto label_1c9148;
        }
    }
    ctx->pc = 0x1C9130u;
    // 0x1c9130: 0x1495023  subu        $t2, $t2, $t1
    ctx->pc = 0x1c9130u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1c9134: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1c9134u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9138: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x1c9138u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1c913c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1C913Cu;
    {
        const bool branch_taken_0x1c913c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C913Cu;
        // 0x1c9140: 0x312cffff  andi        $t4, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c913c) {
            ctx->pc = 0x1C9230u;
            goto label_1c9230;
        }
    }
    ctx->pc = 0x1C9144u;
    // 0x1c9144: 0x0  nop
    ctx->pc = 0x1c9144u;
    // NOP
label_1c9148:
    // 0x1c9148: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1c9148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c914c: 0xeb1006  srlv        $v0, $t3, $a3
    ctx->pc = 0x1c914cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c9150: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1c9150u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c9154: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x1c9154u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c9158: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1c9158u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c915c: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1c915cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c9160: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x1c9160u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1c9164: 0x88001b  divu        $zero, $a0, $t0
    ctx->pc = 0x1c9164u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c9168: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c9168u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c916c: 0x312cffff  andi        $t4, $t1, 0xFFFF
    ctx->pc = 0x1c916cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1c9170: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1c9170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9174: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9174u;
    {
        const bool branch_taken_0x1c9174 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9174) {
            ctx->pc = 0x1C9178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9174u;
            // 0x1c9178: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C917Cu;
            goto label_1c917c;
        }
    }
    ctx->pc = 0x1C917Cu;
label_1c917c:
    // 0x1c917c: 0x1012  mflo        $v0
    ctx->pc = 0x1c917cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9180: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9180u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c9184: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c9184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9188: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c918c: 0xec2818  mult        $a1, $a3, $t4
    ctx->pc = 0x1c918cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c9190: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c9190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9194: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c9194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c9198: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9198u;
    {
        const bool branch_taken_0x1c9198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9198u;
        // 0x1c919c: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9198) {
            ctx->pc = 0x1C91C8u;
            goto label_1c91c8;
        }
    }
    ctx->pc = 0x1C91A0u;
    // 0x1c91a0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c91a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c91a4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c91a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c91a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C91A8u;
    {
        const bool branch_taken_0x1c91a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91A8u;
        // 0x1c91ac: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91a8) {
            ctx->pc = 0x1C91C8u;
            goto label_1c91c8;
        }
    }
    ctx->pc = 0x1C91B0u;
    // 0x1c91b0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c91b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c91b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C91B4u;
    {
        const bool branch_taken_0x1c91b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c91b4) {
            ctx->pc = 0x1C91B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C91B4u;
            // 0x1c91b8: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C91CCu;
            goto label_1c91cc;
        }
    }
    ctx->pc = 0x1C91BCu;
    // 0x1c91bc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c91bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c91c0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c91c4: 0x0  nop
    ctx->pc = 0x1c91c4u;
    // NOP
label_1c91c8:
    // 0x1c91c8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1c91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1c91cc:
    // 0x1c91cc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C91CCu;
    {
        const bool branch_taken_0x1c91cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c91cc) {
            ctx->pc = 0x1C91D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C91CCu;
            // 0x1c91d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C91D4u;
            goto label_1c91d4;
        }
    }
    ctx->pc = 0x1C91D4u;
label_1c91d4:
    // 0x1c91d4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1c91d4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c91d8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1c91d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1c91dc: 0x1012  mflo        $v0
    ctx->pc = 0x1c91dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c91e0: 0x1810  mfhi        $v1
    ctx->pc = 0x1c91e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c91e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c91e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c91e8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c91ec: 0xcd2818  mult        $a1, $a2, $t5
    ctx->pc = 0x1c91ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c91f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c91f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c91f4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c91f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c91f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C91F8u;
    {
        const bool branch_taken_0x1c91f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91F8u;
        // 0x1c91fc: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91f8) {
            ctx->pc = 0x1C9228u;
            goto label_1c9228;
        }
    }
    ctx->pc = 0x1C9200u;
    // 0x1c9200: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c9204: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c9204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9208: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9208u;
    {
        const bool branch_taken_0x1c9208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9208u;
        // 0x1c920c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9208) {
            ctx->pc = 0x1C9224u;
            goto label_1c9224;
        }
    }
    ctx->pc = 0x1C9210u;
    // 0x1c9210: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c9210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c9214: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9214u;
    {
        const bool branch_taken_0x1c9214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9214u;
        // 0x1c9218: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9214) {
            ctx->pc = 0x1C9228u;
            goto label_1c9228;
        }
    }
    ctx->pc = 0x1C921Cu;
    // 0x1c921c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c921cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c9220: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1c9224:
    // 0x1c9224: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1c9224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1c9228:
    // 0x1c9228: 0x655023  subu        $t2, $v1, $a1
    ctx->pc = 0x1c9228u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c922c: 0x466825  or          $t5, $v0, $a2
    ctx->pc = 0x1c922cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_1c9230:
    // 0x1c9230: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1c9230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9234: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x1c9234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9238: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1c9238u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1c923c: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x1c923cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1c9240: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9240u;
    {
        const bool branch_taken_0x1c9240 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9240) {
            ctx->pc = 0x1C9244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9240u;
            // 0x1c9244: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9248u;
            goto label_1c9248;
        }
    }
    ctx->pc = 0x1C9248u;
label_1c9248:
    // 0x1c9248: 0x1012  mflo        $v0
    ctx->pc = 0x1c9248u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c924c: 0x1810  mfhi        $v1
    ctx->pc = 0x1c924cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c9250: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c9250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9254: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c9258: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x1c9258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c925c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c925cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9260: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c9260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c9264: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9264u;
    {
        const bool branch_taken_0x1c9264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9264) {
            ctx->pc = 0x1C9268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9264u;
            // 0x1c9268: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9294u;
            goto label_1c9294;
        }
    }
    ctx->pc = 0x1C926Cu;
    // 0x1c926c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c9270: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c9270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9274: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9274u;
    {
        const bool branch_taken_0x1c9274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9274u;
        // 0x1c9278: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9274) {
            ctx->pc = 0x1C9290u;
            goto label_1c9290;
        }
    }
    ctx->pc = 0x1C927Cu;
    // 0x1c927c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c927cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c9280: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9280u;
    {
        const bool branch_taken_0x1c9280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9280) {
            ctx->pc = 0x1C9284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9280u;
            // 0x1c9284: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9294u;
            goto label_1c9294;
        }
    }
    ctx->pc = 0x1C9288u;
    // 0x1c9288: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c9288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c928c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c928cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1c9290:
    // 0x1c9290: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1c9290u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1c9294:
    // 0x1c9294: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9294u;
    {
        const bool branch_taken_0x1c9294 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9294) {
            ctx->pc = 0x1C9298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9294u;
            // 0x1c9298: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C929Cu;
            goto label_1c929c;
        }
    }
    ctx->pc = 0x1C929Cu;
label_1c929c:
    // 0x1c929c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1c929cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c92a0: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x1c92a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1c92a4: 0x1012  mflo        $v0
    ctx->pc = 0x1c92a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c92a8: 0x1810  mfhi        $v1
    ctx->pc = 0x1c92a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c92ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c92acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c92b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c92b4: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x1c92b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1c92b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c92b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c92bc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c92bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c92c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C92C0u;
    {
        const bool branch_taken_0x1c92c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92C0u;
        // 0x1c92c4: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92c0) {
            ctx->pc = 0x1C92ECu;
            goto label_1c92ec;
        }
    }
    ctx->pc = 0x1C92C8u;
    // 0x1c92c8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c92c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c92cc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c92ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c92d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C92D0u;
    {
        const bool branch_taken_0x1c92d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92D0u;
        // 0x1c92d4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92d0) {
            ctx->pc = 0x1C92E8u;
            goto label_1c92e8;
        }
    }
    ctx->pc = 0x1C92D8u;
    // 0x1c92d8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1c92d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c92dc: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1c92dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c92e0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c92e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c92e4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1c92e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1c92e8:
    // 0x1c92e8: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1c92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1c92ec:
    // 0x1c92ec: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1C92ECu;
    {
        const bool branch_taken_0x1c92ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92ECu;
        // 0x1c92f0: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92ec) {
            ctx->pc = 0x1C94A4u;
            goto label_1c94a4;
        }
    }
    ctx->pc = 0x1C92F4u;
    // 0x1c92f4: 0x0  nop
    ctx->pc = 0x1c92f4u;
    // NOP
label_1c92f8:
    // 0x1c92f8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C92F8u;
    {
        const bool branch_taken_0x1c92f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c92f8) {
            ctx->pc = 0x1C92FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C92F8u;
            // 0x1c92fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9308u;
            goto label_1c9308;
        }
    }
    ctx->pc = 0x1C9300u;
    // 0x1c9300: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1C9300u;
    {
        const bool branch_taken_0x1c9300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9300u;
        // 0x1c9304: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9300) {
            ctx->pc = 0x1C94A0u;
            goto label_1c94a0;
        }
    }
    ctx->pc = 0x1C9308u;
label_1c9308:
    // 0x1c9308: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1c9308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c930c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C930Cu;
    {
        const bool branch_taken_0x1c930c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C930Cu;
        // 0x1c9310: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c930c) {
            ctx->pc = 0x1C9328u;
            goto label_1c9328;
        }
    }
    ctx->pc = 0x1C9314u;
    // 0x1c9314: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x1c9314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c9318: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c9318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c931c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C931Cu;
    {
        const bool branch_taken_0x1c931c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C931Cu;
        // 0x1c9320: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c931c) {
            ctx->pc = 0x1C933Cu;
            goto label_1c933c;
        }
    }
    ctx->pc = 0x1C9324u;
    // 0x1c9324: 0x0  nop
    ctx->pc = 0x1c9324u;
    // NOP
label_1c9328:
    // 0x1c9328: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c9328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c932c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c9330: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c9330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c9334: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1c9334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9338: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c9338u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c933c:
    // 0x1c933c: 0x881806  srlv        $v1, $t0, $a0
    ctx->pc = 0x1c933cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c9340: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c9340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c9344: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c9344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c9348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c934c: 0x9042bde0  lbu         $v0, -0x4220($v0)
    ctx->pc = 0x1c934cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x1c9350: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c9350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9354: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1c9354u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c9358: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9358u;
    {
        const bool branch_taken_0x1c9358 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9358u;
        // 0x1c935c: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9358) {
            ctx->pc = 0x1C9380u;
            goto label_1c9380;
        }
    }
    ctx->pc = 0x1C9360u;
    // 0x1c9360: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x1c9360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1c9364: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C9364u;
    {
        const bool branch_taken_0x1c9364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9364u;
        // 0x1c9368: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9364) {
            ctx->pc = 0x1C94A0u;
            goto label_1c94a0;
        }
    }
    ctx->pc = 0x1C936Cu;
    // 0x1c936c: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x1c936cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9370: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1C9370u;
    {
        const bool branch_taken_0x1c9370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9370u;
        // 0x1c9374: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9370) {
            ctx->pc = 0x1C94A0u;
            goto label_1c94a0;
        }
    }
    ctx->pc = 0x1C9378u;
    // 0x1c9378: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C9378u;
    {
        const bool branch_taken_0x1c9378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9378u;
        // 0x1c937c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9378) {
            ctx->pc = 0x1C94A0u;
            goto label_1c94a0;
        }
    }
    ctx->pc = 0x1C9380u;
label_1c9380:
    // 0x1c9380: 0xc82004  sllv        $a0, $t0, $a2
    ctx->pc = 0x1c9380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c9384: 0xeb2806  srlv        $a1, $t3, $a3
    ctx->pc = 0x1c9384u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c9388: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1c9388u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c938c: 0xe91006  srlv        $v0, $t1, $a3
    ctx->pc = 0x1c938cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c9390: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1c9390u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c9394: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1c9394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1c9398: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x1c9398u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c939c: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x1c939cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x1c93a0: 0x655025  or          $t2, $v1, $a1
    ctx->pc = 0x1c93a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c93a4: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x1c93a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1c93a8: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1c93a8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c93ac: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c93acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c93b0: 0x310cffff  andi        $t4, $t0, 0xFFFF
    ctx->pc = 0x1c93b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1c93b4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C93B4u;
    {
        const bool branch_taken_0x1c93b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93b4) {
            ctx->pc = 0x1C93B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C93B4u;
            // 0x1c93b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C93BCu;
            goto label_1c93bc;
        }
    }
    ctx->pc = 0x1C93BCu;
label_1c93bc:
    // 0x1c93bc: 0x1012  mflo        $v0
    ctx->pc = 0x1c93bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c93c0: 0x1810  mfhi        $v1
    ctx->pc = 0x1c93c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c93c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c93c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c93cc: 0xec3018  mult        $a2, $a3, $t4
    ctx->pc = 0x1c93ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1c93d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c93d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c93d4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1c93d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c93d8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C93D8u;
    {
        const bool branch_taken_0x1c93d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93d8) {
            ctx->pc = 0x1C93DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C93D8u;
            // 0x1c93dc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C940Cu;
            goto label_1c940c;
        }
    }
    ctx->pc = 0x1C93E0u;
    // 0x1c93e0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c93e4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c93e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c93e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C93E8u;
    {
        const bool branch_taken_0x1c93e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93E8u;
        // 0x1c93ec: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93e8) {
            ctx->pc = 0x1C9408u;
            goto label_1c9408;
        }
    }
    ctx->pc = 0x1C93F0u;
    // 0x1c93f0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1c93f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c93f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C93F4u;
    {
        const bool branch_taken_0x1c93f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93f4) {
            ctx->pc = 0x1C93F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C93F4u;
            // 0x1c93f8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C940Cu;
            goto label_1c940c;
        }
    }
    ctx->pc = 0x1C93FCu;
    // 0x1c93fc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c93fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c9400: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c9400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c9404: 0x0  nop
    ctx->pc = 0x1c9404u;
    // NOP
label_1c9408:
    // 0x1c9408: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1c9408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c940c:
    // 0x1c940c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C940Cu;
    {
        const bool branch_taken_0x1c940c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c940c) {
            ctx->pc = 0x1C9410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C940Cu;
            // 0x1c9410: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9414u;
            goto label_1c9414;
        }
    }
    ctx->pc = 0x1C9414u;
label_1c9414:
    // 0x1c9414: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1c9414u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c9418: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1c9418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1c941c: 0x1012  mflo        $v0
    ctx->pc = 0x1c941cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9420: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9420u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c9424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c9424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9428: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c942c: 0xac3018  mult        $a2, $a1, $t4
    ctx->pc = 0x1c942cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1c9430: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c9430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9434: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1c9434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c9438: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9438u;
    {
        const bool branch_taken_0x1c9438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9438u;
        // 0x1c943c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9438) {
            ctx->pc = 0x1C9468u;
            goto label_1c9468;
        }
    }
    ctx->pc = 0x1C9440u;
    // 0x1c9440: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c9440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c9444: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c9444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9448: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9448u;
    {
        const bool branch_taken_0x1c9448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9448u;
        // 0x1c944c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9448) {
            ctx->pc = 0x1C9464u;
            goto label_1c9464;
        }
    }
    ctx->pc = 0x1C9450u;
    // 0x1c9450: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1c9450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c9454: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9454u;
    {
        const bool branch_taken_0x1c9454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9454u;
        // 0x1c9458: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9454) {
            ctx->pc = 0x1C9468u;
            goto label_1c9468;
        }
    }
    ctx->pc = 0x1C945Cu;
    // 0x1c945c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c945cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c9460: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c9460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1c9464:
    // 0x1c9464: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1c9464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1c9468:
    // 0x1c9468: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1c9468u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c946c: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x1c946cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1c9470: 0xc90019  multu       $a2, $t1
    ctx->pc = 0x1c9470u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 6) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1c9474: 0x3810  mfhi        $a3
    ctx->pc = 0x1c9474u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1c9478: 0x2012  mflo        $a0
    ctx->pc = 0x1c9478u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1c947c: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1c947cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c9480: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9480u;
    {
        const bool branch_taken_0x1c9480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9480) {
            ctx->pc = 0x1C9484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9480u;
            // 0x1c9484: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C94A0u;
            goto label_1c94a0;
        }
    }
    ctx->pc = 0x1C9488u;
    // 0x1c9488: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9488u;
    {
        const bool branch_taken_0x1c9488 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9488u;
        // 0x1c948c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9488) {
            ctx->pc = 0x1C94A4u;
            goto label_1c94a4;
        }
    }
    ctx->pc = 0x1C9490u;
    // 0x1c9490: 0x164102b  sltu        $v0, $t3, $a0
    ctx->pc = 0x1c9490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c9494: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9494u;
    {
        const bool branch_taken_0x1c9494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9494) {
            ctx->pc = 0x1C94A4u;
            goto label_1c94a4;
        }
    }
    ctx->pc = 0x1C949Cu;
    // 0x1c949c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c949cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1c94a0:
    // 0x1c94a0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1c94a0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c94a4:
    // 0x1c94a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c94a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c94a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c94a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c94ac: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1c94acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c94b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c94b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c94b4: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1c94b4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1c94b8: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x1c94b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x1c94bc: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1c94bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1c94c0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c94c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c94c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c94c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c94c8: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x1c94c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x1c94cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C94CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94CCu;
        // 0x1c94d0: 0x1c21025  or          $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C94CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C94D4u;
}
