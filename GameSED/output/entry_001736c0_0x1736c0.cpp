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

// Function: entry_001736c0
// Address: 0x1736c0 - 0x1737b0
void entry_001736c0_0x1736c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001736c0_0x1736c0");
#endif

    switch (ctx->pc) {
        case 0x173710u: goto label_173710;
        default: break;
    }

    ctx->pc = 0x1736c0u;

label_1736c0:
    // 0x1736c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1736c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1736c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1736c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1736c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1736c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1736cc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1736ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1736d0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1736d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1736d4: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x1736d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1736d8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1736d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1736dc: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1736dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1736e0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1736e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1736e4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1736e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1736e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1736e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1736ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1736ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1736f0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1736f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1736f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1736f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1736f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1736f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1736fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173700: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x173700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x173704: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x173704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x173708: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x173708u;
    SET_GPR_U32(ctx, 31, 0x173710u);
    ctx->pc = 0x17370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173708u;
    // 0x17370c: 0x24060072  addiu       $a2, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x173708u, 0x173710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173710u;
label_173710:
    // 0x173710: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x173710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173714: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x173714u;
    {
        const bool branch_taken_0x173714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173714u;
        // 0x173718: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173714) {
            ctx->pc = 0x1736C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1736c0;
        }
    }
    ctx->pc = 0x17371Cu;
    // 0x17371c: 0x16c00024  bnez        $s6, . + 4 + (0x24 << 2)
    ctx->pc = 0x17371Cu;
    {
        const bool branch_taken_0x17371c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x173720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17371Cu;
        // 0x173720: 0x8fa5009c  lw          $a1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17371c) {
            ctx->pc = 0x1737B0u;
            return;
        }
    }
    ctx->pc = 0x173724u;
    // 0x173724: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x173724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173728: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x173728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x17372c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17372cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173730: 0xd54018  mult        $t0, $a2, $s5
    ctx->pc = 0x173730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x173734: 0x2d2302a  slt         $a2, $s6, $s2
    ctx->pc = 0x173734u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x173738: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x173738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17373c: 0x24a700e3  addiu       $a3, $a1, 0xE3
    ctx->pc = 0x17373cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 227));
    // 0x173740: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x173740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x173744: 0x24a500d3  addiu       $a1, $a1, 0xD3
    ctx->pc = 0x173744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 211));
    // 0x173748: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x173748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x17374c: 0x1122021  addu        $a0, $t0, $s2
    ctx->pc = 0x17374cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x173750: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x173750u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x173754: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x173754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x173758: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x173758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x17375c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173760: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x173760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173764: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173768: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x173768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
    // 0x17376c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x17376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173770: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x173770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x173774: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x173774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x173778: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x173778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17377c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x17377cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x173780: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x173780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x173784: 0x16400022  bnez        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x173784u;
    {
        const bool branch_taken_0x173784 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x173788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173784u;
        // 0x173788: 0xafbe0054  sw          $fp, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173784) {
            ctx->pc = 0x173810u;
            return;
        }
    }
    ctx->pc = 0x17378Cu;
    // 0x17378c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x17378cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x173790: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x173790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x173794: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x173794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x173798: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x173798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x17379c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x17379cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1737a0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1737a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1737a4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1737A4u;
    {
        const bool branch_taken_0x1737a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1737A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737A4u;
        // 0x1737a8: 0x24420140  addiu       $v0, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737a4) {
            ctx->pc = 0x17380Cu;
            return;
        }
    }
    ctx->pc = 0x1737ACu;
    // 0x1737ac: 0x0  nop
    ctx->pc = 0x1737acu;
    // NOP
    ctx->pc = 0x1737b0u;
}
