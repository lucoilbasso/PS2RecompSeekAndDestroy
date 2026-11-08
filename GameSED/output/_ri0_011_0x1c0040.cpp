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

// Function: _ri0_011
// Address: 0x1c0040 - 0x1c013c
void _ri0_011_0x1c0040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ri0_011_0x1c0040");
#endif

    switch (ctx->pc) {
        case 0x1c0068u: goto label_1c0068;
        case 0x1c00a0u: goto label_1c00a0;
        default: break;
    }

    ctx->pc = 0x1c0040u;

    // 0x1c0040: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1c0040u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0044: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1c0044u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1c0048: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x1c0048u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x1c004c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c004cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c0050: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c0050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c0054: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c0054u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0058: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1c0058u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c005c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1c005cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c0060: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1c0060u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0064: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1c0064u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0068:
    // 0x1c0068: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1c0068u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c006c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1c006cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c0070: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1c0070u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0074: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1c0074u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c0078: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c0078u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c007c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1c007cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c0080: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1c0080u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1c0084: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1c0084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1c0088: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1c0088u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1c008c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1c008cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c0090: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1c0090u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c0094: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1c0094u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1c0098: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C0098u;
    {
        const bool branch_taken_0x1c0098 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0098u;
        // 0x1c009c: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0098) {
            ctx->pc = 0x1C00F4u;
            goto label_1c00f4;
        }
    }
    ctx->pc = 0x1C00A0u;
label_1c00a0:
    // 0x1c00a0: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1c00a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1c00a4: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1c00a4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c00a8: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1c00a8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c00ac: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1c00acu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c00b0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1c00b0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c00b4: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1c00b4u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c00b8: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1c00b8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1c00bc: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1c00bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1c00c0: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1c00c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1c00c4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1c00c4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1c00c8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1c00c8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1c00cc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1c00ccu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1c00d0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x1c00d0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c00d4: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x1c00d4u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x1c00d8: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x1c00d8u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1c00dc: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x1c00dcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x1c00e0: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x1c00e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1c00e4: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x1c00e4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x1c00e8: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1c00e8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1c00ec: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C00ECu;
    {
        const bool branch_taken_0x1c00ec = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1C00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00ECu;
        // 0x1c00f0: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00ec) {
            ctx->pc = 0x1C00A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00a0;
        }
    }
    ctx->pc = 0x1C00F4u;
label_1c00f4:
    // 0x1c00f4: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x1c00f4u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x1c00f8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1c00f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1c00fc: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1c00fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c0100: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1c0100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1c0104: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x1c0104u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1c0108: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C0108u;
    {
        const bool branch_taken_0x1c0108 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0108u;
        // 0x1c010c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0108) {
            ctx->pc = 0x1C00A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00a0;
        }
    }
    ctx->pc = 0x1C0110u;
    // 0x1c0110: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c0110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c0114: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c0114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c0118: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c0118u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c011c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1c011cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1c0120: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1c0120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1c0124: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1c0124u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1c0128: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1c0128u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1c012c: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1C012Cu;
    {
        const bool branch_taken_0x1c012c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C012Cu;
        // 0x1c0130: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c012c) {
            ctx->pc = 0x1C0068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0068;
        }
    }
    ctx->pc = 0x1C0134u;
    // 0x1c0134: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C013Cu;
}
