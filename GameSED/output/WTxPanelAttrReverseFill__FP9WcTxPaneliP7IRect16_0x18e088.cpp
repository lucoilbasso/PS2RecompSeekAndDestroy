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

// Function: WTxPanelAttrReverseFill__FP9WcTxPaneliP7IRect16
// Address: 0x18e088 - 0x18e25c
void WTxPanelAttrReverseFill__FP9WcTxPaneliP7IRect16_0x18e088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelAttrReverseFill__FP9WcTxPaneliP7IRect16_0x18e088");
#endif

    switch (ctx->pc) {
        case 0x18e0d0u: goto label_18e0d0;
        case 0x18e0e0u: goto label_18e0e0;
        case 0x18e160u: goto label_18e160;
        case 0x18e170u: goto label_18e170;
        case 0x18e1e0u: goto label_18e1e0;
        case 0x18e218u: goto label_18e218;
        default: break;
    }

    ctx->pc = 0x18e088u;

    // 0x18e088: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x18e088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e08c: 0x10c0004c  beqz        $a2, . + 4 + (0x4C << 2)
    ctx->pc = 0x18E08Cu;
    {
        const bool branch_taken_0x18e08c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E08Cu;
        // 0x18e090: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e08c) {
            ctx->pc = 0x18E1C0u;
            goto label_18e1c0;
        }
    }
    ctx->pc = 0x18E094u;
    // 0x18e094: 0x55200026  bnel        $t1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x18E094u;
    {
        const bool branch_taken_0x18e094 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e094) {
            ctx->pc = 0x18E098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E094u;
            // 0x18e098: 0x8d030208  lw          $v1, 0x208($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E130u;
            goto label_18e130;
        }
    }
    ctx->pc = 0x18E09Cu;
    // 0x18e09c: 0x8d040208  lw          $a0, 0x208($t0)
    ctx->pc = 0x18e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 520)));
    // 0x18e0a0: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x18e0a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0a4: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x18e0a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x18e0a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18e0a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0ac: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x18e0acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18e0b0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x18e0b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18e0b4: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x18e0b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x18e0b8: 0x8d070218  lw          $a3, 0x218($t0)
    ctx->pc = 0x18e0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 536)));
    // 0x18e0bc: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x18e0bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e0c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18e0c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18e0c8: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x18E0C8u;
    {
        const bool branch_taken_0x18e0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0C8u;
        // 0x18e0cc: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0c8) {
            ctx->pc = 0x18E234u;
            goto label_18e234;
        }
    }
    ctx->pc = 0x18E0D0u;
label_18e0d0:
    // 0x18e0d0: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18e0d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18e0d4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E0D4u;
    {
        const bool branch_taken_0x18e0d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0D4u;
        // 0x18e0d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0d4) {
            ctx->pc = 0x18E104u;
            goto label_18e104;
        }
    }
    ctx->pc = 0x18E0DCu;
    // 0x18e0dc: 0x2404bfff  addiu       $a0, $zero, -0x4001
    ctx->pc = 0x18e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_18e0e0:
    // 0x18e0e0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x18e0e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18e0e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e0e8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x18e0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x18e0ec: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x18e0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e0f0: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18e0f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18e0f4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18e0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e0f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E0F8u;
    {
        const bool branch_taken_0x18e0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E0F8u;
        // 0x18e0fc: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e0f8) {
            ctx->pc = 0x18E0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e0e0;
        }
    }
    ctx->pc = 0x18E100u;
    // 0x18e100: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18e100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_18e104:
    // 0x18e104: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x18e104u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x18e108: 0x8d630208  lw          $v1, 0x208($t3)
    ctx->pc = 0x18e108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 520)));
    // 0x18e10c: 0x84c40006  lh          $a0, 0x6($a2)
    ctx->pc = 0x18e10cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x18e110: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18e110u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e114: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18e114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18e118: 0x144202a  slt         $a0, $t2, $a0
    ctx->pc = 0x18e118u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18e11c: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18E11Cu;
    {
        const bool branch_taken_0x18e11c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E11Cu;
        // 0x18e120: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e11c) {
            ctx->pc = 0x18E0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e0d0;
        }
    }
    ctx->pc = 0x18E124u;
    // 0x18e124: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x18E124u;
    {
        const bool branch_taken_0x18e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E124u;
        // 0x18e128: 0x2502023c  addiu       $v0, $t0, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e124) {
            ctx->pc = 0x18E238u;
            goto label_18e238;
        }
    }
    ctx->pc = 0x18E12Cu;
    // 0x18e12c: 0x0  nop
    ctx->pc = 0x18e12cu;
    // NOP
label_18e130:
    // 0x18e130: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x18e130u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e134: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x18e134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x18e138: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18e138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e13c: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x18e13cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18e140: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x18e140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18e144: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x18e144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x18e148: 0x8d050218  lw          $a1, 0x218($t0)
    ctx->pc = 0x18e148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 536)));
    // 0x18e14c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e150: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18e150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18e154: 0x18600037  blez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x18E154u;
    {
        const bool branch_taken_0x18e154 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E154u;
        // 0x18e158: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e154) {
            ctx->pc = 0x18E234u;
            goto label_18e234;
        }
    }
    ctx->pc = 0x18E15Cu;
    // 0x18e15c: 0x0  nop
    ctx->pc = 0x18e15cu;
    // NOP
label_18e160:
    // 0x18e160: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18e160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18e164: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18E164u;
    {
        const bool branch_taken_0x18e164 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E164u;
        // 0x18e168: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e164) {
            ctx->pc = 0x18E194u;
            goto label_18e194;
        }
    }
    ctx->pc = 0x18E16Cu;
    // 0x18e16c: 0x0  nop
    ctx->pc = 0x18e16cu;
    // NOP
label_18e170:
    // 0x18e170: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x18e170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e174: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e178: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18e178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x18e17c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x18e17cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e180: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18e180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18e184: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18e184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e188: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E188u;
    {
        const bool branch_taken_0x18e188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E188u;
        // 0x18e18c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e188) {
            ctx->pc = 0x18E170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e170;
        }
    }
    ctx->pc = 0x18E190u;
    // 0x18e190: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18e190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_18e194:
    // 0x18e194: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18e194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18e198: 0x8d230208  lw          $v1, 0x208($t1)
    ctx->pc = 0x18e198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 520)));
    // 0x18e19c: 0x84c40006  lh          $a0, 0x6($a2)
    ctx->pc = 0x18e19cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x18e1a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e1a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18e1a8: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x18e1a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18e1ac: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18E1ACu;
    {
        const bool branch_taken_0x18e1ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1ACu;
        // 0x18e1b0: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1ac) {
            ctx->pc = 0x18E160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e160;
        }
    }
    ctx->pc = 0x18E1B4u;
    // 0x18e1b4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x18E1B4u;
    {
        const bool branch_taken_0x18e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1B4u;
        // 0x18e1b8: 0x2502023c  addiu       $v0, $t0, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1b4) {
            ctx->pc = 0x18E238u;
            goto label_18e238;
        }
    }
    ctx->pc = 0x18E1BCu;
    // 0x18e1bc: 0x0  nop
    ctx->pc = 0x18e1bcu;
    // NOP
label_18e1c0:
    // 0x18e1c0: 0x55200011  bnel        $t1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x18E1C0u;
    {
        const bool branch_taken_0x18e1c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e1c0) {
            ctx->pc = 0x18E1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E1C0u;
            // 0x18e1c4: 0x8d040210  lw          $a0, 0x210($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E208u;
            goto label_18e208;
        }
    }
    ctx->pc = 0x18E1C8u;
    // 0x18e1c8: 0x8d050210  lw          $a1, 0x210($t0)
    ctx->pc = 0x18e1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 528)));
    // 0x18e1cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1d0: 0x18a00018  blez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x18E1D0u;
    {
        const bool branch_taken_0x18e1d0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x18E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1D0u;
        // 0x18e1d4: 0x8d020218  lw          $v0, 0x218($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1d0) {
            ctx->pc = 0x18E234u;
            goto label_18e234;
        }
    }
    ctx->pc = 0x18E1D8u;
    // 0x18e1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1dc: 0x2407bfff  addiu       $a3, $zero, -0x4001
    ctx->pc = 0x18e1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_18e1e0:
    // 0x18e1e0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x18e1e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18e1e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18e1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18e1e8: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x18e1e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18e1ec: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x18e1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x18e1f0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x18e1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e1f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E1F4u;
    {
        const bool branch_taken_0x18e1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1F4u;
        // 0x18e1f8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1f4) {
            ctx->pc = 0x18E1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e1e0;
        }
    }
    ctx->pc = 0x18E1FCu;
    // 0x18e1fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18E1FCu;
    {
        const bool branch_taken_0x18e1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1FCu;
        // 0x18e200: 0x2502023c  addiu       $v0, $t0, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 572));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1fc) {
            ctx->pc = 0x18E238u;
            goto label_18e238;
        }
    }
    ctx->pc = 0x18E204u;
    // 0x18e204: 0x0  nop
    ctx->pc = 0x18e204u;
    // NOP
label_18e208:
    // 0x18e208: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E208u;
    {
        const bool branch_taken_0x18e208 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x18E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E208u;
        // 0x18e20c: 0x8d020218  lw          $v0, 0x218($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e208) {
            ctx->pc = 0x18E234u;
            goto label_18e234;
        }
    }
    ctx->pc = 0x18E210u;
    // 0x18e210: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18e210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e214: 0x0  nop
    ctx->pc = 0x18e214u;
    // NOP
label_18e218:
    // 0x18e218: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x18e218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18e21c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18e220: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18e220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x18e224: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x18e224u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e228: 0x0  nop
    ctx->pc = 0x18e228u;
    // NOP
    // 0x18e22c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E22Cu;
    {
        const bool branch_taken_0x18e22c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E22Cu;
        // 0x18e230: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e22c) {
            ctx->pc = 0x18E218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e218;
        }
    }
    ctx->pc = 0x18E234u;
label_18e234:
    // 0x18e234: 0x2502023c  addiu       $v0, $t0, 0x23C
    ctx->pc = 0x18e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 572));
label_18e238:
    // 0x18e238: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x18e238u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e23c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x18e23cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e240: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x18e240u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x18e244: 0xa5000244  sh          $zero, 0x244($t0)
    ctx->pc = 0x18e244u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x18e248: 0xa5000246  sh          $zero, 0x246($t0)
    ctx->pc = 0x18e248u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 582), (uint16_t)GPR_U32(ctx, 0));
    // 0x18e24c: 0xad00024c  sw          $zero, 0x24C($t0)
    ctx->pc = 0x18e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 588), GPR_U32(ctx, 0));
    // 0x18e250: 0x8d020244  lw          $v0, 0x244($t0)
    ctx->pc = 0x18e250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 580)));
    // 0x18e254: 0x3e00008  jr          $ra
    ctx->pc = 0x18E254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E254u;
        // 0x18e258: 0xad020248  sw          $v0, 0x248($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E25Cu;
}
