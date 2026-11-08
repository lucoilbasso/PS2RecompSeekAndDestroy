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

// Function: __umoddi3
// Address: 0x1c94d8 - 0x1c9a40
void ps2___umoddi3_0x1c94d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___umoddi3_0x1c94d8");
#endif

    ctx->pc = 0x1c94d8u;

    // 0x1c94d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c94d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c94dc: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x1c94dcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c94e0: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x1c94e0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1c94e4: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x1c94e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c94e8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1c94e8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1c94ec: 0x4683c  dsll32      $t5, $a0, 0
    ctx->pc = 0x1c94ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c94f0: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1c94f0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x1c94f4: 0x152000b0  bnez        $t1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1C94F4u;
    {
        const bool branch_taken_0x1c94f4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94F4u;
        // 0x1c94f8: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94f4) {
            ctx->pc = 0x1C97B8u;
            goto label_1c97b8;
        }
    }
    ctx->pc = 0x1C94FCu;
    // 0x1c94fc: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x1c94fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c9500: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C9500u;
    {
        const bool branch_taken_0x1c9500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9500u;
        // 0x1c9504: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9500) {
            ctx->pc = 0x1C9580u;
            goto label_1c9580;
        }
    }
    ctx->pc = 0x1C9508u;
    // 0x1c9508: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c9508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c950c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C950Cu;
    {
        const bool branch_taken_0x1c950c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C950Cu;
        // 0x1c9510: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c950c) {
            ctx->pc = 0x1C9528u;
            goto label_1c9528;
        }
    }
    ctx->pc = 0x1C9514u;
    // 0x1c9514: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1c9514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c9518: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c9518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c951c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C951Cu;
    {
        const bool branch_taken_0x1c951c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C951Cu;
        // 0x1c9520: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c951c) {
            ctx->pc = 0x1C953Cu;
            goto label_1c953c;
        }
    }
    ctx->pc = 0x1C9524u;
    // 0x1c9524: 0x0  nop
    ctx->pc = 0x1c9524u;
    // NOP
label_1c9528:
    // 0x1c9528: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c9528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c952c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c9530: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c9530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c9534: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c9534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c9538: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c9538u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c953c:
    // 0x1c953c: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1c953cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c9540: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c9540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c9544: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c9544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c9548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c954c: 0x9042bee0  lbu         $v0, -0x4120($v0)
    ctx->pc = 0x1c954cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950624)));
    // 0x1c9550: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c9550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9554: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1c9554u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c9558: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9558u;
    {
        const bool branch_taken_0x1c9558 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9558u;
        // 0x1c955c: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9558) {
            ctx->pc = 0x1C9574u;
            goto label_1c9574;
        }
    }
    ctx->pc = 0x1C9560u;
    // 0x1c9560: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1c9560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c9564: 0x4d1006  srlv        $v0, $t5, $v0
    ctx->pc = 0x1c9564u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x1c9568: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1c9568u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c956c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1c956cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c9570: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1c9570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_1c9574:
    // 0x1c9574: 0x73402  srl         $a2, $a3, 16
    ctx->pc = 0x1c9574u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1c9578: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1C9578u;
    {
        const bool branch_taken_0x1c9578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9578u;
        // 0x1c957c: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9578) {
            ctx->pc = 0x1C96E0u;
            goto label_1c96e0;
        }
    }
    ctx->pc = 0x1C9580u;
label_1c9580:
    // 0x1c9580: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9580u;
    {
        const bool branch_taken_0x1c9580 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9580u;
        // 0x1c9584: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9580) {
            ctx->pc = 0x1C95A8u;
            goto label_1c95a8;
        }
    }
    ctx->pc = 0x1C9588u;
    // 0x1c9588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c958c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C958Cu;
    {
        const bool branch_taken_0x1c958c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c958c) {
            ctx->pc = 0x1C9590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C958Cu;
            // 0x1c9590: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9594u;
            goto label_1c9594;
        }
    }
    ctx->pc = 0x1C9594u;
label_1c9594:
    // 0x1c9594: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x1c9594u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c9598: 0x1012  mflo        $v0
    ctx->pc = 0x1c9598u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c959c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c959cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c95a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c95a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c95a4: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c95a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1c95a8:
    // 0x1c95a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C95A8u;
    {
        const bool branch_taken_0x1c95a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C95A8u;
        // 0x1c95ac: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95a8) {
            ctx->pc = 0x1C95C0u;
            goto label_1c95c0;
        }
    }
    ctx->pc = 0x1C95B0u;
    // 0x1c95b0: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1c95b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c95b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c95b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c95b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C95B8u;
    {
        const bool branch_taken_0x1c95b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C95BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C95B8u;
        // 0x1c95bc: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95b8) {
            ctx->pc = 0x1C95D4u;
            goto label_1c95d4;
        }
    }
    ctx->pc = 0x1C95C0u;
label_1c95c0:
    // 0x1c95c0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c95c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c95c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c95c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c95c8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c95c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c95cc: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c95ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c95d0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c95d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c95d4:
    // 0x1c95d4: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1c95d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c95d8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c95d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c95dc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c95e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c95e4: 0x9042bee0  lbu         $v0, -0x4120($v0)
    ctx->pc = 0x1c95e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950624)));
    // 0x1c95e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c95ec: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1c95ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c95f0: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C95F0u;
    {
        const bool branch_taken_0x1c95f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C95F0u;
        // 0x1c95f4: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95f0) {
            ctx->pc = 0x1C9608u;
            goto label_1c9608;
        }
    }
    ctx->pc = 0x1C95F8u;
    // 0x1c95f8: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x1c95f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1c95fc: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1c95fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1c9600: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1C9600u;
    {
        const bool branch_taken_0x1c9600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9600u;
        // 0x1c9604: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9600) {
            ctx->pc = 0x1C96D8u;
            goto label_1c96d8;
        }
    }
    ctx->pc = 0x1C9608u;
label_1c9608:
    // 0x1c9608: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1c9608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c960c: 0x1ed1006  srlv        $v0, $t5, $t7
    ctx->pc = 0x1c960cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c9610: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1c9610u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c9614: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1c9614u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c9618: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1c9618u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c961c: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1c961cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c9620: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1c9620u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1c9624: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1c9624u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c9628: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c9628u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c962c: 0x30eeffff  andi        $t6, $a3, 0xFFFF
    ctx->pc = 0x1c962cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1c9630: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1c9630u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9634: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9634u;
    {
        const bool branch_taken_0x1c9634 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9634) {
            ctx->pc = 0x1C9638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9634u;
            // 0x1c9638: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C963Cu;
            goto label_1c963c;
        }
    }
    ctx->pc = 0x1C963Cu;
label_1c963c:
    // 0x1c963c: 0x1012  mflo        $v0
    ctx->pc = 0x1c963cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9640: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9640u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c9644: 0x4e4018  mult        $t0, $v0, $t6
    ctx->pc = 0x1c9644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c9648: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c964c: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x1c964cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9650: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1c9650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9654: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9654u;
    {
        const bool branch_taken_0x1c9654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9654u;
        // 0x1c9658: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9654) {
            ctx->pc = 0x1C9680u;
            goto label_1c9680;
        }
    }
    ctx->pc = 0x1C965Cu;
    // 0x1c965c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1c965cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c9660: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1c9660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c9664: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9664u;
    {
        const bool branch_taken_0x1c9664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9664) {
            ctx->pc = 0x1C9668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9664u;
            // 0x1c9668: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9684u;
            goto label_1c9684;
        }
    }
    ctx->pc = 0x1C966Cu;
    // 0x1c966c: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1c966cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9670: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1c9670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c9674: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c9674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c9678: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1c9678u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1c967c: 0x0  nop
    ctx->pc = 0x1c967cu;
    // NOP
label_1c9680:
    // 0x1c9680: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1c9680u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1c9684:
    // 0x1c9684: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1c9684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1c9688: 0xc9001b  divu        $zero, $a2, $t1
    ctx->pc = 0x1c9688u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1c968c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C968Cu;
    {
        const bool branch_taken_0x1c968c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c968c) {
            ctx->pc = 0x1C9690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C968Cu;
            // 0x1c9690: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9694u;
            goto label_1c9694;
        }
    }
    ctx->pc = 0x1C9694u;
label_1c9694:
    // 0x1c9694: 0x1012  mflo        $v0
    ctx->pc = 0x1c9694u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9698: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9698u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c969c: 0x4f4018  mult        $t0, $v0, $t7
    ctx->pc = 0x1c969cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c96a0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c96a4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c96a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c96a8: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1c96a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c96ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C96ACu;
    {
        const bool branch_taken_0x1c96ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96ACu;
        // 0x1c96b0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96ac) {
            ctx->pc = 0x1C96D8u;
            goto label_1c96d8;
        }
    }
    ctx->pc = 0x1C96B4u;
    // 0x1c96b4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c96b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c96b8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1c96b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c96bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C96BCu;
    {
        const bool branch_taken_0x1c96bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96BCu;
        // 0x1c96c0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96bc) {
            ctx->pc = 0x1C96D8u;
            goto label_1c96d8;
        }
    }
    ctx->pc = 0x1C96C4u;
    // 0x1c96c4: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1c96c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c96c8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1c96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c96cc: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c96ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c96d0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c96d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1c96d4: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x1c96d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1c96d8:
    // 0x1c96d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c96d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c96dc: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x1c96dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1c96e0:
    // 0x1c96e0: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1c96e0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1c96e4: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x1c96e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x1c96e8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C96E8u;
    {
        const bool branch_taken_0x1c96e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96e8) {
            ctx->pc = 0x1C96ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C96E8u;
            // 0x1c96ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C96F0u;
            goto label_1c96f0;
        }
    }
    ctx->pc = 0x1C96F0u;
label_1c96f0:
    // 0x1c96f0: 0x1012  mflo        $v0
    ctx->pc = 0x1c96f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c96f4: 0x1810  mfhi        $v1
    ctx->pc = 0x1c96f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c96f8: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1c96f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c96fc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c96fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c9700: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1c9700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9704: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c9704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9708: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9708u;
    {
        const bool branch_taken_0x1c9708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9708) {
            ctx->pc = 0x1C970Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9708u;
            // 0x1c970c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9734u;
            goto label_1c9734;
        }
    }
    ctx->pc = 0x1C9710u;
    // 0x1c9710: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c9710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c9714: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x1c9714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c9718: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9718u;
    {
        const bool branch_taken_0x1c9718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9718) {
            ctx->pc = 0x1C971Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9718u;
            // 0x1c971c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9734u;
            goto label_1c9734;
        }
    }
    ctx->pc = 0x1C9720u;
    // 0x1c9720: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c9720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9724: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1c9724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c9728: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c9728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c972c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1c972cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1c9730: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1c9730u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1c9734:
    // 0x1c9734: 0x31a4ffff  andi        $a0, $t5, 0xFFFF
    ctx->pc = 0x1c9734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x1c9738: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x1c9738u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1c973c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C973Cu;
    {
        const bool branch_taken_0x1c973c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c973c) {
            ctx->pc = 0x1C9740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C973Cu;
            // 0x1c9740: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9744u;
            goto label_1c9744;
        }
    }
    ctx->pc = 0x1C9744u;
label_1c9744:
    // 0x1c9744: 0x1012  mflo        $v0
    ctx->pc = 0x1c9744u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9748: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9748u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c974c: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1c974cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c9750: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c9754: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c9754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9758: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1c9758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c975c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C975Cu;
    {
        const bool branch_taken_0x1c975c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c975c) {
            ctx->pc = 0x1C9780u;
            goto label_1c9780;
        }
    }
    ctx->pc = 0x1C9764u;
    // 0x1c9764: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c9764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c9768: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1c9768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c976c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C976Cu;
    {
        const bool branch_taken_0x1c976c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C976Cu;
        // 0x1c9770: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c976c) {
            ctx->pc = 0x1C9780u;
            goto label_1c9780;
        }
    }
    ctx->pc = 0x1C9774u;
    // 0x1c9774: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1c9774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c9778: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c9778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c977c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c977cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c9780:
    // 0x1c9780: 0x130000ac  beqz        $t8, . + 4 + (0xAC << 2)
    ctx->pc = 0x1C9780u;
    {
        const bool branch_taken_0x1c9780 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9780u;
        // 0x1c9784: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9780) {
            ctx->pc = 0x1C9A34u;
            goto label_1c9a34;
        }
    }
    ctx->pc = 0x1C9788u;
    // 0x1c9788: 0x18d1006  srlv        $v0, $t5, $t4
    ctx->pc = 0x1c9788u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c978c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9790: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c9790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c9794: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c9794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c9798: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c9798u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c979c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c97a0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c97a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c97a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c97a8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c97a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c97ac: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1C97ACu;
    {
        const bool branch_taken_0x1c97ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97ACu;
        // 0x1c97b0: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97ac) {
            ctx->pc = 0x1C9A30u;
            goto label_1c9a30;
        }
    }
    ctx->pc = 0x1C97B4u;
    // 0x1c97b4: 0x0  nop
    ctx->pc = 0x1c97b4u;
    // NOP
label_1c97b8:
    // 0x1c97b8: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1c97b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c97bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C97BCu;
    {
        const bool branch_taken_0x1c97bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97BCu;
        // 0x1c97c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97bc) {
            ctx->pc = 0x1C97F8u;
            goto label_1c97f8;
        }
    }
    ctx->pc = 0x1C97C4u;
    // 0x1c97c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c97c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c97c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c97cc: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1c97ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1c97d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c97d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c97d4: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c97d4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c97d8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c97d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c97dc: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1c97dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1c97e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c97e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c97e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c97e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c97e8: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c97e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c97ec: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c97ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c97f0: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1C97F0u;
    {
        const bool branch_taken_0x1c97f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97F0u;
        // 0x1c97f4: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97f0) {
            ctx->pc = 0x1C9A34u;
            goto label_1c9a34;
        }
    }
    ctx->pc = 0x1C97F8u;
label_1c97f8:
    // 0x1c97f8: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1c97f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c97fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C97FCu;
    {
        const bool branch_taken_0x1c97fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97FCu;
        // 0x1c9800: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97fc) {
            ctx->pc = 0x1C9818u;
            goto label_1c9818;
        }
    }
    ctx->pc = 0x1C9804u;
    // 0x1c9804: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1c9804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c9808: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c9808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c980c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C980Cu;
    {
        const bool branch_taken_0x1c980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C980Cu;
        // 0x1c9810: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c980c) {
            ctx->pc = 0x1C982Cu;
            goto label_1c982c;
        }
    }
    ctx->pc = 0x1C9814u;
    // 0x1c9814: 0x0  nop
    ctx->pc = 0x1c9814u;
    // NOP
label_1c9818:
    // 0x1c9818: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c9818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c981c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c981cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c9820: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c9820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c9824: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1c9824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9828: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1c9828u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1c982c:
    // 0x1c982c: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1c982cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1c9830: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c9830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c9834: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1c9834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1c9838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c983c: 0x9042bee0  lbu         $v0, -0x4120($v0)
    ctx->pc = 0x1c983cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950624)));
    // 0x1c9840: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c9840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9844: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1c9844u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c9848: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C9848u;
    {
        const bool branch_taken_0x1c9848 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9848u;
        // 0x1c984c: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9848) {
            ctx->pc = 0x1C98B0u;
            goto label_1c98b0;
        }
    }
    ctx->pc = 0x1C9850u;
    // 0x1c9850: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x1c9850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1c9854: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9854u;
    {
        const bool branch_taken_0x1c9854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9854u;
        // 0x1c9858: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9854) {
            ctx->pc = 0x1C9868u;
            goto label_1c9868;
        }
    }
    ctx->pc = 0x1C985Cu;
    // 0x1c985c: 0x1a7102b  sltu        $v0, $t5, $a3
    ctx->pc = 0x1c985cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c9860: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9860u;
    {
        const bool branch_taken_0x1c9860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9860u;
        // 0x1c9864: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9860) {
            ctx->pc = 0x1C9878u;
            goto label_1c9878;
        }
    }
    ctx->pc = 0x1C9868u;
label_1c9868:
    // 0x1c9868: 0x1492023  subu        $a0, $t2, $t1
    ctx->pc = 0x1c9868u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1c986c: 0x1a2182b  sltu        $v1, $t5, $v0
    ctx->pc = 0x1c986cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c9870: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1c9870u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9874: 0x835023  subu        $t2, $a0, $v1
    ctx->pc = 0x1c9874u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c9878:
    // 0x1c9878: 0x1300006e  beqz        $t8, . + 4 + (0x6E << 2)
    ctx->pc = 0x1C9878u;
    {
        const bool branch_taken_0x1c9878 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9878u;
        // 0x1c987c: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9878) {
            ctx->pc = 0x1C9A34u;
            goto label_1c9a34;
        }
    }
    ctx->pc = 0x1C9880u;
    // 0x1c9880: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c9880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9884: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c9884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c9888: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c9888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c988c: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c988cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c9890: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c9890u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c9894: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1c9894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1c9898: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c9898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c989c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c989cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c98a0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c98a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c98a4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1C98A4u;
    {
        const bool branch_taken_0x1c98a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98A4u;
        // 0x1c98a8: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98a4) {
            ctx->pc = 0x1C9A30u;
            goto label_1c9a30;
        }
    }
    ctx->pc = 0x1C98ACu;
    // 0x1c98ac: 0x0  nop
    ctx->pc = 0x1c98acu;
    // NOP
label_1c98b0:
    // 0x1c98b0: 0x18a2804  sllv        $a1, $t2, $t4
    ctx->pc = 0x1c98b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c98b4: 0x1892004  sllv        $a0, $t1, $t4
    ctx->pc = 0x1c98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c98b8: 0x1e71006  srlv        $v0, $a3, $t7
    ctx->pc = 0x1c98b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c98bc: 0x1ed1806  srlv        $v1, $t5, $t7
    ctx->pc = 0x1c98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c98c0: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1c98c0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c98c4: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x1c98c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c98c8: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1c98c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c98cc: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1c98ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c98d0: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x1c98d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1c98d4: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x1c98d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1c98d8: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x1c98d8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c98dc: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1c98dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1c98e0: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x1c98e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1c98e4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C98E4u;
    {
        const bool branch_taken_0x1c98e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c98e4) {
            ctx->pc = 0x1C98E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C98E4u;
            // 0x1c98e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C98ECu;
            goto label_1c98ec;
        }
    }
    ctx->pc = 0x1C98ECu;
label_1c98ec:
    // 0x1c98ec: 0x1012  mflo        $v0
    ctx->pc = 0x1c98ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c98f0: 0x1810  mfhi        $v1
    ctx->pc = 0x1c98f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c98f4: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1c98f4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c98f8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c98f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c98fc: 0x1c54018  mult        $t0, $t6, $a1
    ctx->pc = 0x1c98fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c9900: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c9900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9904: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c9904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9908: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C9908u;
    {
        const bool branch_taken_0x1c9908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9908) {
            ctx->pc = 0x1C990Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9908u;
            // 0x1c990c: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C993Cu;
            goto label_1c993c;
        }
    }
    ctx->pc = 0x1C9910u;
    // 0x1c9910: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c9914: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1c9914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9918: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9918u;
    {
        const bool branch_taken_0x1c9918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9918u;
        // 0x1c991c: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9918) {
            ctx->pc = 0x1C9938u;
            goto label_1c9938;
        }
    }
    ctx->pc = 0x1C9920u;
    // 0x1c9920: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1c9920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9924: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9924u;
    {
        const bool branch_taken_0x1c9924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9924) {
            ctx->pc = 0x1C9928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9924u;
            // 0x1c9928: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C993Cu;
            goto label_1c993c;
        }
    }
    ctx->pc = 0x1C992Cu;
    // 0x1c992c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1c992cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1c9930: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c9930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c9934: 0x0  nop
    ctx->pc = 0x1c9934u;
    // NOP
label_1c9938:
    // 0x1c9938: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1c9938u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1c993c:
    // 0x1c993c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C993Cu;
    {
        const bool branch_taken_0x1c993c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c993c) {
            ctx->pc = 0x1C9940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C993Cu;
            // 0x1c9940: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9944u;
            goto label_1c9944;
        }
    }
    ctx->pc = 0x1C9944u;
label_1c9944:
    // 0x1c9944: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1c9944u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1c9948: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1c9948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1c994c: 0x1012  mflo        $v0
    ctx->pc = 0x1c994cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c9950: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9950u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c9954: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c9954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9958: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c9958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c995c: 0xc54018  mult        $t0, $a2, $a1
    ctx->pc = 0x1c995cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c9960: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1c9960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9964: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c9964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9968: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1C9968u;
    {
        const bool branch_taken_0x1c9968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9968) {
            ctx->pc = 0x1C996Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9968u;
            // 0x1c996c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9998u;
            goto label_1c9998;
        }
    }
    ctx->pc = 0x1C9970u;
    // 0x1c9970: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1c9970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1c9974: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x1c9974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c9978: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9978u;
    {
        const bool branch_taken_0x1c9978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9978u;
        // 0x1c997c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9978) {
            ctx->pc = 0x1C9994u;
            goto label_1c9994;
        }
    }
    ctx->pc = 0x1C9980u;
    // 0x1c9980: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c9980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9984: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9984u;
    {
        const bool branch_taken_0x1c9984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9984) {
            ctx->pc = 0x1C9988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9984u;
            // 0x1c9988: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9998u;
            goto label_1c9998;
        }
    }
    ctx->pc = 0x1C998Cu;
    // 0x1c998c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1c998cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c9990: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1c9990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1c9994:
    // 0x1c9994: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1c9994u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1c9998:
    // 0x1c9998: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x1c9998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1c999c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1c999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1c99a0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1c99a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99a4: 0x470019  multu       $v0, $a3
    ctx->pc = 0x1c99a4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1c99a8: 0x3010  mfhi        $a2
    ctx->pc = 0x1c99a8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1c99ac: 0x4012  mflo        $t0
    ctx->pc = 0x1c99acu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1c99b0: 0x146182b  sltu        $v1, $t2, $a2
    ctx->pc = 0x1c99b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c99b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C99B4u;
    {
        const bool branch_taken_0x1c99b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99B4u;
        // 0x1c99b8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99b4) {
            ctx->pc = 0x1C99D0u;
            goto label_1c99d0;
        }
    }
    ctx->pc = 0x1C99BCu;
    // 0x1c99bc: 0x14ca0008  bne         $a2, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C99BCu;
    {
        const bool branch_taken_0x1c99bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x1C99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99BCu;
        // 0x1c99c0: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99bc) {
            ctx->pc = 0x1C99E0u;
            goto label_1c99e0;
        }
    }
    ctx->pc = 0x1C99C4u;
    // 0x1c99c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C99C4u;
    {
        const bool branch_taken_0x1c99c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99C4u;
        // 0x1c99c8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99c4) {
            ctx->pc = 0x1C99E0u;
            goto label_1c99e0;
        }
    }
    ctx->pc = 0x1C99CCu;
    // 0x1c99cc: 0x0  nop
    ctx->pc = 0x1c99ccu;
    // NOP
label_1c99d0:
    // 0x1c99d0: 0xc92023  subu        $a0, $a2, $t1
    ctx->pc = 0x1c99d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1c99d4: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x1c99d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c99d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c99d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99dc: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x1c99dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c99e0:
    // 0x1c99e0: 0x13000014  beqz        $t8, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C99E0u;
    {
        const bool branch_taken_0x1c99e0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99E0u;
        // 0x1c99e4: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99e0) {
            ctx->pc = 0x1C9A34u;
            goto label_1c9a34;
        }
    }
    ctx->pc = 0x1C99E8u;
    // 0x1c99e8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1c99e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c99ec: 0x1a4182b  sltu        $v1, $t5, $a0
    ctx->pc = 0x1c99ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c99f0: 0xa35023  subu        $t2, $a1, $v1
    ctx->pc = 0x1c99f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c99f4: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x1c99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1c99f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c99f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c99fc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c99fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c9a00: 0x1842006  srlv        $a0, $a0, $t4
    ctx->pc = 0x1c9a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c9a04: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1c9a04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1c9a08: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c9a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c9a0c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1c9a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1c9a10: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c9a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c9a14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c9a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c9a18: 0x18a1806  srlv        $v1, $t2, $t4
    ctx->pc = 0x1c9a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1c9a1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c9a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c9a20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c9a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c9a24: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1c9a24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1c9a28: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x1c9a28u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x1c9a2c: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x1c9a2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_1c9a30:
    // 0x1c9a30: 0xff0b0000  sd          $t3, 0x0($t8)
    ctx->pc = 0x1c9a30u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 11));
label_1c9a34:
    // 0x1c9a34: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x1c9a34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A38u;
        // 0x1c9a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9A40u;
}
