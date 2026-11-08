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

// Function: ApCqpartsSystemSetup__FP5BcObjP9ApcObjRscii
// Address: 0x16a100 - 0x16a258
void ApCqpartsSystemSetup__FP5BcObjP9ApcObjRscii_0x16a100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpartsSystemSetup__FP5BcObjP9ApcObjRscii_0x16a100");
#endif

    switch (ctx->pc) {
        case 0x16a150u: goto label_16a150;
        case 0x16a1c0u: goto label_16a1c0;
        case 0x16a1f8u: goto label_16a1f8;
        case 0x16a218u: goto label_16a218;
        case 0x16a238u: goto label_16a238;
        default: break;
    }

    ctx->pc = 0x16a100u;

    // 0x16a100: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16a100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16a104: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a108: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x16a108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x16a10c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16a10cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a110: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x16a110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x16a114: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16a114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a118: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x16a118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x16a11c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x16a11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x16a120: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x16a120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x16a124: 0x14c20016  bne         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16A124u;
    {
        const bool branch_taken_0x16a124 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A124u;
        // 0x16a128: 0xffbf0098  sd          $ra, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a124) {
            ctx->pc = 0x16A180u;
            goto label_16a180;
        }
    }
    ctx->pc = 0x16A12Cu;
    // 0x16a12c: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x16a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x16a130: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x16a130u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a134: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16A134u;
    {
        const bool branch_taken_0x16a134 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A134u;
        // 0x16a138: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a134) {
            ctx->pc = 0x16A174u;
            goto label_16a174;
        }
    }
    ctx->pc = 0x16A13Cu;
    // 0x16a13c: 0x8ca50040  lw          $a1, 0x40($a1)
    ctx->pc = 0x16a13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x16a140: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x16a140u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a144: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x16a144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a148: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x16a148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16a14c: 0x0  nop
    ctx->pc = 0x16a14cu;
    // NOP
label_16a150:
    // 0x16a150: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x16a150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x16a154: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x16a154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x16a158: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x16a158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x16a15c: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x16a15cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x16a160: 0x106a0005  beq         $v1, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A160u;
    {
        const bool branch_taken_0x16a160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x16A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A160u;
        // 0x16a164: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a160) {
            ctx->pc = 0x16A178u;
            goto label_16a178;
        }
    }
    ctx->pc = 0x16A168u;
    // 0x16a168: 0x0  nop
    ctx->pc = 0x16a168u;
    // NOP
    // 0x16a16c: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16A16Cu;
    {
        const bool branch_taken_0x16a16c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a16c) {
            ctx->pc = 0x16A170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A16Cu;
            // 0x16a170: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a150;
        }
    }
    ctx->pc = 0x16A174u;
label_16a174:
    // 0x16a174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a178:
    // 0x16a178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16A178u;
    {
        const bool branch_taken_0x16a178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A178u;
        // 0x16a17c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a178) {
            ctx->pc = 0x16A18Cu;
            goto label_16a18c;
        }
    }
    ctx->pc = 0x16A180u;
label_16a180:
    // 0x16a180: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x16a180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x16a184: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x16a184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x16a188: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x16a188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16a18c:
    // 0x16a18c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A18Cu;
    {
        const bool branch_taken_0x16a18c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A18Cu;
        // 0x16a190: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a18c) {
            ctx->pc = 0x16A1A4u;
            goto label_16a1a4;
        }
    }
    ctx->pc = 0x16A194u;
    // 0x16a194: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16a198: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16A198u;
    {
        const bool branch_taken_0x16a198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A198u;
        // 0x16a19c: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a198) {
            ctx->pc = 0x16A1C4u;
            goto label_16a1c4;
        }
    }
    ctx->pc = 0x16A1A0u;
    // 0x16a1a0: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x16a1a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_16a1a4:
    // 0x16a1a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16a1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16a1ac: 0x262200a  movz        $a0, $s3, $v0
    ctx->pc = 0x16a1acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
    // 0x16a1b0: 0x24a57308  addiu       $a1, $a1, 0x7308
    ctx->pc = 0x16a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29448));
    // 0x16a1b4: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x16a1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x16a1b8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x16A1B8u;
    SET_GPR_U32(ctx, 31, 0x16A1C0u);
    ctx->pc = 0x16A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1B8u;
    // 0x16a1bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16A1B8u, 0x16A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1C0u;
label_16a1c0:
    // 0x16a1c0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x16a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_16a1c4:
    // 0x16a1c4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x16a1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16a1c8: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x16a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x16a1cc: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x16a1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x16a1d0: 0x8c45038c  lw          $a1, 0x38C($v0)
    ctx->pc = 0x16a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 908)));
    // 0x16a1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1d8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16a1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a1dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16a1dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a1e0: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x16a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x16a1e4: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x16a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x16a1e8: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x16a1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16a1ec: 0xafbd0058  sw          $sp, 0x58($sp)
    ctx->pc = 0x16a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 29));
    // 0x16a1f0: 0xc060e24  jal         func_183890
    ctx->pc = 0x16A1F0u;
    SET_GPR_U32(ctx, 31, 0x16A1F8u);
    ctx->pc = 0x16A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1F0u;
    // 0x16a1f4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183890u, 0x16A1F0u, 0x16A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1F8u;
label_16a1f8:
    // 0x16a1f8: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x16a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x16a1fc: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x16a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16a200: 0x2463b0a0  addiu       $v1, $v1, -0x4F60
    ctx->pc = 0x16a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946976));
    // 0x16a204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a208: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x16a208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x16a20c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x16a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x16a210: 0xc069626  jal         func_1A5898
    ctx->pc = 0x16A210u;
    SET_GPR_U32(ctx, 31, 0x16A218u);
    ctx->pc = 0x16A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A210u;
    // 0x16a214: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x16A210u, 0x16A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A218u;
label_16a218:
    // 0x16a218: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x16a218u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a21c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16a21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a220: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x16a220u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16a224: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16a224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a228: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x16a228u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a22c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16a22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a230: 0xc05a664  jal         func_169990
    ctx->pc = 0x16A230u;
    SET_GPR_U32(ctx, 31, 0x16A238u);
    ctx->pc = 0x16A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A230u;
    // 0x16a234: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169990u, 0x16A230u, 0x16A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A238u;
label_16a238:
    // 0x16a238: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x16a238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a23c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x16a23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16a240: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x16a240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16a244: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x16a244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16a248: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x16a248u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16a24c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x16a24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16a250: 0x3e00008  jr          $ra
    ctx->pc = 0x16A250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A250u;
        // 0x16a254: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A258u;
}
