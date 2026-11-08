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

// Function: _motionComp0
// Address: 0x1bebb0 - 0x1bee00
void _motionComp0_0x1bebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_motionComp0_0x1bebb0");
#endif

    switch (ctx->pc) {
        case 0x1bec30u: goto label_1bec30;
        case 0x1bec84u: goto label_1bec84;
        case 0x1bec9cu: goto label_1bec9c;
        case 0x1becb8u: goto label_1becb8;
        case 0x1becdcu: goto label_1becdc;
        default: break;
    }

    ctx->pc = 0x1bebb0u;

    // 0x1bebb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bebb4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1bebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1bebb8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1bebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1bebbc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1bebbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebc0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1bebc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1bebc4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1bebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1bebc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1bebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1bebcc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1bebccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebd0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1bebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1bebd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bebd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebd8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1bebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1bebdc: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x1bebdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x1bebe0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1bebe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1bebe4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1bebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1bebe8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1bebe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1bebec: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x1bebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1bebf0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bebf4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1bebf4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bebf8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BEBF8u;
    {
        const bool branch_taken_0x1bebf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bebf8) {
            ctx->pc = 0x1BEBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEBF8u;
            // 0x1bebfc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEC00u;
            goto label_1bec00;
        }
    }
    ctx->pc = 0x1BEC00u;
label_1bec00:
    // 0x1bec00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bec04: 0x1810  mfhi        $v1
    ctx->pc = 0x1bec04u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bec08: 0xb812  mflo        $s7
    ctx->pc = 0x1bec08u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x1bec0c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1bec0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec10: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x1bec10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1bec14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BEC14u;
    {
        const bool branch_taken_0x1bec14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC14u;
        // 0x1bec18: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec14) {
            ctx->pc = 0x1BEC60u;
            goto label_1bec60;
        }
    }
    ctx->pc = 0x1BEC1Cu;
    // 0x1bec1c: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x1bec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1bec20: 0x261106c8  addiu       $s1, $s0, 0x6C8
    ctx->pc = 0x1bec20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x1bec24: 0x261206c4  addiu       $s2, $s0, 0x6C4
    ctx->pc = 0x1bec24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
    // 0x1bec28: 0x261306c0  addiu       $s3, $s0, 0x6C0
    ctx->pc = 0x1bec28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
    // 0x1bec2c: 0x261406b8  addiu       $s4, $s0, 0x6B8
    ctx->pc = 0x1bec2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
label_1bec30:
    // 0x1bec30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1bec30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1bec34: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x1bec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x1bec38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bec38u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u));
    // 0x1bec3c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1bec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1bec40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bec40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bec44: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BEC44u;
    {
        const bool branch_taken_0x1bec44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bec44) {
            ctx->pc = 0x1BEC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bec30;
        }
    }
    ctx->pc = 0x1BEC4Cu;
    // 0x1bec4c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1bec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bec50: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1bec50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bec54: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1bec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bec58: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1BEC58u;
    {
        const bool branch_taken_0x1bec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC58u;
        // 0x1bec5c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec58) {
            ctx->pc = 0x1BECF4u;
            goto label_1becf4;
        }
    }
    ctx->pc = 0x1BEC60u;
label_1bec60:
    // 0x1bec60: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x1bec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1bec64: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1bec64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bec68: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BEC68u;
    {
        const bool branch_taken_0x1bec68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC68u;
        // 0x1bec6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec68) {
            ctx->pc = 0x1BEC94u;
            goto label_1bec94;
        }
    }
    ctx->pc = 0x1BEC70u;
    // 0x1bec70: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1bec70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1bec74: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1bec74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec78: 0x24a5b450  addiu       $a1, $a1, -0x4BB0
    ctx->pc = 0x1bec78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947920));
    // 0x1bec7c: 0xc06f892  jal         func_1BE248
    ctx->pc = 0x1BEC7Cu;
    SET_GPR_U32(ctx, 31, 0x1BEC84u);
    ctx->pc = 0x1BEC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC7Cu;
    // 0x1bec80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE248u, 0x1BEC7Cu, 0x1BEC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC84u;
label_1bec84:
    // 0x1bec84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bec84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bec88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bec88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec8c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1BEC8Cu;
    {
        const bool branch_taken_0x1bec8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC8Cu;
        // 0x1bec90: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec8c) {
            ctx->pc = 0x1BEDD0u;
            goto label_1bedd0;
        }
    }
    ctx->pc = 0x1BEC94u;
label_1bec94:
    // 0x1bec94: 0xc06fb80  jal         func_1BEE00
    ctx->pc = 0x1BEC94u;
    SET_GPR_U32(ctx, 31, 0x1BEC9Cu);
    ctx->pc = 0x1BEC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC94u;
    // 0x1bec98: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE00u, 0x1BEC94u, 0x1BEC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC9Cu;
label_1bec9c:
    // 0x1bec9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1bec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1beca0: 0x261106c8  addiu       $s1, $s0, 0x6C8
    ctx->pc = 0x1beca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x1beca4: 0x261206c4  addiu       $s2, $s0, 0x6C4
    ctx->pc = 0x1beca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1732));
    // 0x1beca8: 0x261306c0  addiu       $s3, $s0, 0x6C0
    ctx->pc = 0x1beca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
    // 0x1becac: 0x261406b8  addiu       $s4, $s0, 0x6B8
    ctx->pc = 0x1becacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
    // 0x1becb0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1becb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x1becb4: 0x0  nop
    ctx->pc = 0x1becb4u;
    // NOP
label_1becb8:
    // 0x1becb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1becb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1becbc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1becbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1becc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1becc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1becc4: 0x0  nop
    ctx->pc = 0x1becc4u;
    // NOP
    // 0x1becc8: 0x0  nop
    ctx->pc = 0x1becc8u;
    // NOP
    // 0x1beccc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BECCCu;
    {
        const bool branch_taken_0x1beccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1beccc) {
            ctx->pc = 0x1BECB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1becb8;
        }
    }
    ctx->pc = 0x1BECD4u;
    // 0x1becd4: 0xc070d9e  jal         func_1C3678
    ctx->pc = 0x1BECD4u;
    SET_GPR_U32(ctx, 31, 0x1BECDCu);
    ctx->pc = 0x1BECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECD4u;
    // 0x1becd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3678u, 0x1BECD4u, 0x1BECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECDCu;
label_1becdc:
    // 0x1becdc: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1becdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1bece0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1bece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bece4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bece4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bece8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1bece8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1becec: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x1bececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1becf0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1becf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1becf4:
    // 0x1becf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1becf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1becf8: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BECF8u;
    {
        const bool branch_taken_0x1becf8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1becf8) {
            ctx->pc = 0x1BECFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BECF8u;
            // 0x1becfc: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BED24u;
            goto label_1bed24;
        }
    }
    ctx->pc = 0x1BED00u;
    // 0x1bed00: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x1bed00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x1bed04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BED04u;
    {
        const bool branch_taken_0x1bed04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED04u;
        // 0x1bed08: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed04) {
            ctx->pc = 0x1BED20u;
            goto label_1bed20;
        }
    }
    ctx->pc = 0x1BED0Cu;
    // 0x1bed0c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1bed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1bed10: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1bed10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bed14: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1bed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1bed18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BED18u;
    {
        const bool branch_taken_0x1bed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED18u;
        // 0x1bed1c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed18) {
            ctx->pc = 0x1BED34u;
            goto label_1bed34;
        }
    }
    ctx->pc = 0x1BED20u;
label_1bed20:
    // 0x1bed20: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1bed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_1bed24:
    // 0x1bed24: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1bed24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bed28: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1bed28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bed2c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1bed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1bed30: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bed30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1bed34:
    // 0x1bed34: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1bed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1bed38: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x1bed38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bed3c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1bed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bed40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bed40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bed44: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x1bed44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bed48: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x1bed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1bed4c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1bed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1bed50: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x1bed50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bed54: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BED54u;
    {
        const bool branch_taken_0x1bed54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED54u;
        // 0x1bed58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed54) {
            ctx->pc = 0x1BED90u;
            goto label_1bed90;
        }
    }
    ctx->pc = 0x1BED5Cu;
    // 0x1bed5c: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x1bed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1bed60: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x1bed60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1bed64: 0x8e0501c0  lw          $a1, 0x1C0($s0)
    ctx->pc = 0x1bed64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x1bed68: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x1bed68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bed6c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1bed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1bed70: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x1bed70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1bed74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bed74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bed78: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x1bed78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bed7c: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x1bed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x1bed80: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1bed80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bed84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bed84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bed88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BED88u;
    {
        const bool branch_taken_0x1bed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED88u;
        // 0x1bed8c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed88) {
            ctx->pc = 0x1BEDCCu;
            goto label_1bedcc;
        }
    }
    ctx->pc = 0x1BED90u;
label_1bed90:
    // 0x1bed90: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BED90u;
    {
        const bool branch_taken_0x1bed90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bed90) {
            ctx->pc = 0x1BED94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BED90u;
            // 0x1bed94: 0x8e0201d0  lw          $v0, 0x1D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BED9Cu;
            goto label_1bed9c;
        }
    }
    ctx->pc = 0x1BED98u;
    // 0x1bed98: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x1bed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_1bed9c:
    // 0x1bed9c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1bed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1beda0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x1beda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1beda4: 0x8e040810  lw          $a0, 0x810($s0)
    ctx->pc = 0x1beda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1beda8: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1beda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1bedac: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x1bedacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1bedb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bedb4: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x1bedb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x1bedb8: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x1bedb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1bedbc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1bedbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bedc0: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x1bedc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x1bedc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bedc8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1bedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1bedcc:
    // 0x1bedcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bedccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bedd0:
    // 0x1bedd0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1bedd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bedd4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1bedd4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bedd8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1bedd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1beddc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1beddcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bede0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1bede0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bede4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1bede4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bede8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1bede8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bedec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bedecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bedf0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1bedf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bedf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bedf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bedf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDF8u;
        // 0x1bedfc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEE00u;
}
