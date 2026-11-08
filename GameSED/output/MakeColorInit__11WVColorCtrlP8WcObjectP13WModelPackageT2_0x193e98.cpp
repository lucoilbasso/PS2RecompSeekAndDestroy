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

// Function: MakeColorInit__11WVColorCtrlP8WcObjectP13WModelPackageT2
// Address: 0x193e98 - 0x193fe8
void MakeColorInit__11WVColorCtrlP8WcObjectP13WModelPackageT2_0x193e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeColorInit__11WVColorCtrlP8WcObjectP13WModelPackageT2_0x193e98");
#endif

    switch (ctx->pc) {
        case 0x193ee0u: goto label_193ee0;
        case 0x193f10u: goto label_193f10;
        case 0x193fa4u: goto label_193fa4;
        case 0x193fc8u: goto label_193fc8;
        default: break;
    }

    ctx->pc = 0x193e98u;

    // 0x193e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193ea0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193ea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ea8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x193ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x193eac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x193eacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193eb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x193eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x193eb4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x193eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193eb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x193eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x193ebc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x193ebcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ec0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x193ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x193ec4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ec8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x193ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x193ecc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x193eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193ed0: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x193ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x193ed4: 0x26500160  addiu       $s0, $s2, 0x160
    ctx->pc = 0x193ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x193ed8: 0xc05fc52  jal         func_17F148
    ctx->pc = 0x193ED8u;
    SET_GPR_U32(ctx, 31, 0x193EE0u);
    ctx->pc = 0x193EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193ED8u;
    // 0x193edc: 0xae340004  sw          $s4, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F148u, 0x193ED8u, 0x193EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193EE0u;
label_193ee0:
    // 0x193ee0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x193ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ee4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x193ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x193ee8: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x193ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x193eec: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x193eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x193ef0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x193ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x193ef4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x193ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x193ef8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x193ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193efc: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x193efcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x193f00: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x193F00u;
    {
        const bool branch_taken_0x193f00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F00u;
        // 0x193f04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f00) {
            ctx->pc = 0x193F10u;
            goto label_193f10;
        }
    }
    ctx->pc = 0x193F08u;
    // 0x193f08: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193F08u;
    SET_GPR_U32(ctx, 31, 0x193F10u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193F08u, 0x193F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F10u;
label_193f10:
    // 0x193f10: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x193f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x193f14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x193f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x193f18: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x193f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x193f1c: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x193f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x193f20: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x193f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x193f24: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x193f24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x193f28: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x193f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x193f2c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x193f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x193f30: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x193f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x193f34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x193f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x193f38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193f3c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x193f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x193f40: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x193f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x193f44: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x193f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x193f48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x193f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193f4c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x193f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x193f50: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x193f50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x193f54: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x193f54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x193f58: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x193f58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x193f5c: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x193f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x193f60: 0xa0a70002  sb          $a3, 0x2($a1)
    ctx->pc = 0x193f60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x193f64: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x193f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x193f68: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x193f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x193f6c: 0x103001b  divu        $zero, $t0, $v1
    ctx->pc = 0x193f6cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x193f70: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x193f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x193f74: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x193F74u;
    {
        const bool branch_taken_0x193f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x193f74) {
            ctx->pc = 0x193F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193F74u;
            // 0x193f78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x193F7Cu;
            goto label_193f7c;
        }
    }
    ctx->pc = 0x193F7Cu;
label_193f7c:
    // 0x193f7c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x193f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x193f80: 0x4012  mflo        $t0
    ctx->pc = 0x193f80u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x193f84: 0xae28001c  sw          $t0, 0x1C($s1)
    ctx->pc = 0x193f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 8));
    // 0x193f88: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x193f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x193f8c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x193F8Cu;
    {
        const bool branch_taken_0x193f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x193F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F8Cu;
        // 0x193f90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f8c) {
            ctx->pc = 0x193FA4u;
            goto label_193fa4;
        }
    }
    ctx->pc = 0x193F94u;
    // 0x193f94: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x193f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x193f98: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x193f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x193f9c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x193F9Cu;
    SET_GPR_U32(ctx, 31, 0x193FA4u);
    ctx->pc = 0x193FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F9Cu;
    // 0x193fa0: 0x24a58258  addiu       $a1, $a1, -0x7DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x193F9Cu, 0x193FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193FA4u;
label_193fa4:
    // 0x193fa4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x193fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x193fa8: 0x2c420200  sltiu       $v0, $v0, 0x200
    ctx->pc = 0x193fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x193fac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193FACu;
    {
        const bool branch_taken_0x193fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FACu;
        // 0x193fb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193fac) {
            ctx->pc = 0x193FCCu;
            goto label_193fcc;
        }
    }
    ctx->pc = 0x193FB4u;
    // 0x193fb4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x193fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x193fb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193fbc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x193fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x193fc0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x193FC0u;
    SET_GPR_U32(ctx, 31, 0x193FC8u);
    ctx->pc = 0x193FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193FC0u;
    // 0x193fc4: 0x24a58258  addiu       $a1, $a1, -0x7DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x193FC0u, 0x193FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193FC8u;
label_193fc8:
    // 0x193fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193fcc:
    // 0x193fcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193fd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193fd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x193fd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x193fd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x193fd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193fdc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x193fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x193fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x193FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FE0u;
        // 0x193fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193FE8u;
}
