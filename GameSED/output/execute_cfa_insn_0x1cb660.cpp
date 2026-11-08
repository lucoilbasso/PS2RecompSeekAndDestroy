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

// Function: execute_cfa_insn
// Address: 0x1cb660 - 0x1cbaac
void execute_cfa_insn_0x1cb660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("execute_cfa_insn_0x1cb660");
#endif

    switch (ctx->pc) {
        case 0x1cb6c4u: goto label_1cb6c4;
        case 0x1cb78cu: goto label_1cb78c;
        case 0x1cb7acu: goto label_1cb7ac;
        case 0x1cb7b8u: goto label_1cb7b8;
        case 0x1cb804u: goto label_1cb804;
        case 0x1cb824u: goto label_1cb824;
        case 0x1cb830u: goto label_1cb830;
        case 0x1cb864u: goto label_1cb864;
        case 0x1cb870u: goto label_1cb870;
        case 0x1cb894u: goto label_1cb894;
        case 0x1cb8b4u: goto label_1cb8b4;
        case 0x1cb8e4u: goto label_1cb8e4;
        case 0x1cb900u: goto label_1cb900;
        case 0x1cb908u: goto label_1cb908;
        case 0x1cb928u: goto label_1cb928;
        case 0x1cb934u: goto label_1cb934;
        case 0x1cb980u: goto label_1cb980;
        case 0x1cb9bcu: goto label_1cb9bc;
        case 0x1cb9d8u: goto label_1cb9d8;
        case 0x1cba24u: goto label_1cba24;
        case 0x1cba44u: goto label_1cba44;
        case 0x1cba50u: goto label_1cba50;
        case 0x1cba90u: goto label_1cba90;
        case 0x1cba94u: goto label_1cba94;
        default: break;
    }

    ctx->pc = 0x1cb660u;

    // 0x1cb660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb664: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cb664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cb668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb66c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cb66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1cb670: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cb670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb674: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cb674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cb678: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cb678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb67c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cb67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cb680: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1cb680u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb684: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x1cb684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x1cb688: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB688u;
    {
        const bool branch_taken_0x1cb688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB688u;
        // 0x1cb68c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb688) {
            ctx->pc = 0x1CB6A8u;
            goto label_1cb6a8;
        }
    }
    ctx->pc = 0x1CB690u;
    // 0x1cb690: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1cb690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1cb694: 0x30a2003f  andi        $v0, $a1, 0x3F
    ctx->pc = 0x1cb694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1cb698: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1cb698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cb69c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1CB69Cu;
    {
        const bool branch_taken_0x1cb69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB69Cu;
        // 0x1cb6a0: 0x441018  mult        $v0, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb69c) {
            ctx->pc = 0x1CB774u;
            goto label_1cb774;
        }
    }
    ctx->pc = 0x1CB6A4u;
    // 0x1cb6a4: 0x0  nop
    ctx->pc = 0x1cb6a4u;
    // NOP
label_1cb6a8:
    // 0x1cb6a8: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x1cb6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1cb6ac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB6ACu;
    {
        const bool branch_taken_0x1cb6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6ACu;
        // 0x1cb6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6ac) {
            ctx->pc = 0x1CB6F0u;
            goto label_1cb6f0;
        }
    }
    ctx->pc = 0x1CB6B4u;
    // 0x1cb6b4: 0x30a7003f  andi        $a3, $a1, 0x3F
    ctx->pc = 0x1cb6b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1cb6b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6bc: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB6BCu;
    SET_GPR_U32(ctx, 31, 0x1CB6C4u);
    ctx->pc = 0x1CB6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6BCu;
    // 0x1cb6c0: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB6BCu, 0x1CB6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB6C4u;
label_1cb6c4:
    // 0x1cb6c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb6c8: 0x962203f8  lhu         $v0, 0x3F8($s1)
    ctx->pc = 0x1cb6c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1016)));
    // 0x1cb6cc: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1cb6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb6d0: 0x10e200ef  beq         $a3, $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x1CB6D0u;
    {
        const bool branch_taken_0x1cb6d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6D0u;
        // 0x1cb6d4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6d0) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB6D8u;
    // 0x1cb6d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb6dc: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x1cb6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cb6e0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1cb6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1cb6e4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1CB6E4u;
    {
        const bool branch_taken_0x1cb6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6E4u;
        // 0x1cb6e8: 0xf12821  addu        $a1, $a3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6e4) {
            ctx->pc = 0x1CB7DCu;
            goto label_1cb7dc;
        }
    }
    ctx->pc = 0x1CB6ECu;
    // 0x1cb6ec: 0x0  nop
    ctx->pc = 0x1cb6ecu;
    // NOP
label_1cb6f0:
    // 0x1cb6f0: 0x30a200c0  andi        $v0, $a1, 0xC0
    ctx->pc = 0x1cb6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)192);
    // 0x1cb6f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB6F4u;
    {
        const bool branch_taken_0x1cb6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6F4u;
        // 0x1cb6f8: 0x2ca20030  sltiu       $v0, $a1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6f4) {
            ctx->pc = 0x1CB710u;
            goto label_1cb710;
        }
    }
    ctx->pc = 0x1CB6FCu;
    // 0x1cb6fc: 0x30a7003f  andi        $a3, $a1, 0x3F
    ctx->pc = 0x1cb6fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x1cb700: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x1cb700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1cb704: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x1cb704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x1cb708: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1CB708u;
    {
        const bool branch_taken_0x1cb708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB708u;
        // 0x1cb70c: 0xa04003fc  sb          $zero, 0x3FC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1020), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb708) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB710u;
label_1cb710:
    // 0x1cb710: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x1CB710u;
    {
        const bool branch_taken_0x1cb710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB710u;
        // 0x1cb714: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb710) {
            ctx->pc = 0x1CBA88u;
            goto label_1cba88;
        }
    }
    ctx->pc = 0x1CB718u;
    // 0x1cb718: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1cb718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1cb71c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cb71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cb720: 0x8c63c010  lw          $v1, -0x3FF0($v1)
    ctx->pc = 0x1cb720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950928)));
    // 0x1cb724: 0x600008  jr          $v1
    ctx->pc = 0x1CB724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB730u: goto label_1cb730;
            case 0x1CB748u: goto label_1cb748;
            case 0x1CB758u: goto label_1cb758;
            case 0x1CB780u: goto label_1cb780;
            case 0x1CB7A0u: goto label_1cb7a0;
            case 0x1CB7F8u: goto label_1cb7f8;
            case 0x1CB818u: goto label_1cb818;
            case 0x1CB858u: goto label_1cb858;
            case 0x1CB888u: goto label_1cb888;
            case 0x1CB8A8u: goto label_1cb8a8;
            case 0x1CB8C8u: goto label_1cb8c8;
            case 0x1CB920u: goto label_1cb920;
            case 0x1CB970u: goto label_1cb970;
            case 0x1CB9C8u: goto label_1cb9c8;
            case 0x1CBA18u: goto label_1cba18;
            case 0x1CBA38u: goto label_1cba38;
            case 0x1CBA88u: goto label_1cba88;
            case 0x1CBA90u: goto label_1cba90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB724u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CB72Cu;
    // 0x1cb72c: 0x0  nop
    ctx->pc = 0x1cb72cu;
    // NOP
label_1cb730:
    // 0x1cb730: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x1cb730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1cb734: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x1cb734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1cb738: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1cb738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1cb73c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x1CB73Cu;
    {
        const bool branch_taken_0x1cb73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB73Cu;
        // 0x1cb740: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb73c) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB744u;
    // 0x1cb744: 0x0  nop
    ctx->pc = 0x1cb744u;
    // NOP
label_1cb748:
    // 0x1cb748: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1cb748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb74c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CB74Cu;
    {
        const bool branch_taken_0x1cb74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB74Cu;
        // 0x1cb750: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb74c) {
            ctx->pc = 0x1CB78Cu;
            goto label_1cb78c;
        }
    }
    ctx->pc = 0x1CB754u;
    // 0x1cb754: 0x0  nop
    ctx->pc = 0x1cb754u;
    // NOP
label_1cb758:
    // 0x1cb758: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1cb758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1cb75c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1cb75cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb760: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1cb760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1cb764: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1cb764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1cb768: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1cb768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cb76c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1cb76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1cb770: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1cb770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1cb774:
    // 0x1cb774: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cb774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cb778: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x1CB778u;
    {
        const bool branch_taken_0x1cb778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB778u;
        // 0x1cb77c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb778) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB780u;
label_1cb780:
    // 0x1cb780: 0x8a030003  lwl         $v1, 0x3($s0)
    ctx->pc = 0x1cb780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1cb784: 0x9a030000  lwr         $v1, 0x0($s0)
    ctx->pc = 0x1cb784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1cb788: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1cb788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1cb78c:
    // 0x1cb78c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1cb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cb790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb794: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1CB794u;
    {
        const bool branch_taken_0x1cb794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB794u;
        // 0x1cb798: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb794) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB79Cu;
    // 0x1cb79c: 0x0  nop
    ctx->pc = 0x1cb79cu;
    // NOP
label_1cb7a0:
    // 0x1cb7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7a4: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB7A4u;
    SET_GPR_U32(ctx, 31, 0x1CB7ACu);
    ctx->pc = 0x1CB7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7A4u;
    // 0x1cb7a8: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB7A4u, 0x1CB7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7ACu;
label_1cb7ac:
    // 0x1cb7ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7b0: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB7B0u;
    SET_GPR_U32(ctx, 31, 0x1CB7B8u);
    ctx->pc = 0x1CB7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7B0u;
    // 0x1cb7b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB7B0u, 0x1CB7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7B8u;
label_1cb7b8:
    // 0x1cb7b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7bc: 0x962203f8  lhu         $v0, 0x3F8($s1)
    ctx->pc = 0x1cb7bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1016)));
    // 0x1cb7c0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1cb7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb7c4: 0x10a200b2  beq         $a1, $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1CB7C4u;
    {
        const bool branch_taken_0x1cb7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7C4u;
        // 0x1cb7c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7c4) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB7CCu;
    // 0x1cb7cc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1cb7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cb7d0: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x1cb7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cb7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb7d8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1cb7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1cb7dc:
    // 0x1cb7dc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1cb7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1cb7e0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1cb7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cb7e4: 0xa0a203fc  sb          $v0, 0x3FC($a1)
    ctx->pc = 0x1cb7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1020), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cb7e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1cb7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7ec: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1cb7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1cb7f0: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1CB7F0u;
    {
        const bool branch_taken_0x1cb7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7F0u;
        // 0x1cb7f4: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7f0) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB7F8u;
label_1cb7f8:
    // 0x1cb7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7fc: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB7FCu;
    SET_GPR_U32(ctx, 31, 0x1CB804u);
    ctx->pc = 0x1CB800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7FCu;
    // 0x1cb800: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB7FCu, 0x1CB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB804u;
label_1cb804:
    // 0x1cb804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb808: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cb808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb80c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cb80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cb810: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x1CB810u;
    {
        const bool branch_taken_0x1cb810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB810u;
        // 0x1cb814: 0xa04003fc  sb          $zero, 0x3FC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1020), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb810) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB818u;
label_1cb818:
    // 0x1cb818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb81c: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB81Cu;
    SET_GPR_U32(ctx, 31, 0x1CB824u);
    ctx->pc = 0x1CB820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB81Cu;
    // 0x1cb820: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB81Cu, 0x1CB824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB824u;
label_1cb824:
    // 0x1cb824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb828: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB828u;
    SET_GPR_U32(ctx, 31, 0x1CB830u);
    ctx->pc = 0x1CB82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB828u;
    // 0x1cb82c: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB828u, 0x1CB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB830u;
label_1cb830:
    // 0x1cb830: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cb830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb838: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cb838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb83c: 0x9fa40008  lwu         $a0, 0x8($sp)
    ctx->pc = 0x1cb83cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb840: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cb840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cb844: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cb844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cb848: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1cb848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1cb84c: 0xa04503fc  sb          $a1, 0x3FC($v0)
    ctx->pc = 0x1cb84cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1020), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cb850: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1CB850u;
    {
        const bool branch_taken_0x1cb850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB850u;
        // 0x1cb854: 0xfc640020  sd          $a0, 0x20($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb850) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB858u;
label_1cb858:
    // 0x1cb858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb85c: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB85Cu;
    SET_GPR_U32(ctx, 31, 0x1CB864u);
    ctx->pc = 0x1CB860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB85Cu;
    // 0x1cb860: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB85Cu, 0x1CB864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB864u;
label_1cb864:
    // 0x1cb864: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb868: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB868u;
    SET_GPR_U32(ctx, 31, 0x1CB870u);
    ctx->pc = 0x1CB86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB868u;
    // 0x1cb86c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB868u, 0x1CB870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB870u;
label_1cb870:
    // 0x1cb870: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1cb870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb878: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x1cb878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb87c: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x1cb87cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x1cb880: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1CB880u;
    {
        const bool branch_taken_0x1cb880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB880u;
        // 0x1cb884: 0xa62203f8  sh          $v0, 0x3F8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb880) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB888u;
label_1cb888:
    // 0x1cb888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb88c: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB88Cu;
    SET_GPR_U32(ctx, 31, 0x1CB894u);
    ctx->pc = 0x1CB890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB88Cu;
    // 0x1cb890: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB88Cu, 0x1CB894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB894u;
label_1cb894:
    // 0x1cb894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb898: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x1cb898u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb89c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1CB89Cu;
    {
        const bool branch_taken_0x1cb89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB89Cu;
        // 0x1cb8a0: 0xa62203f8  sh          $v0, 0x3F8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb89c) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB8A4u;
    // 0x1cb8a4: 0x0  nop
    ctx->pc = 0x1cb8a4u;
    // NOP
label_1cb8a8:
    // 0x1cb8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8ac: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB8ACu;
    SET_GPR_U32(ctx, 31, 0x1CB8B4u);
    ctx->pc = 0x1CB8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8ACu;
    // 0x1cb8b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB8ACu, 0x1CB8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8B4u;
label_1cb8b4:
    // 0x1cb8b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cb8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8bc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1CB8BCu;
    {
        const bool branch_taken_0x1cb8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8BCu;
        // 0x1cb8c0: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8bc) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB8C4u;
    // 0x1cb8c4: 0x0  nop
    ctx->pc = 0x1cb8c4u;
    // NOP
label_1cb8c8:
    // 0x1cb8c8: 0xa62003f8  sh          $zero, 0x3F8($s1)
    ctx->pc = 0x1cb8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cb8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8d0: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x1cb8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x1cb8d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8d8: 0xfe200010  sd          $zero, 0x10($s1)
    ctx->pc = 0x1cb8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 0));
    // 0x1cb8dc: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB8DCu;
    SET_GPR_U32(ctx, 31, 0x1CB8E4u);
    ctx->pc = 0x1CB8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8DCu;
    // 0x1cb8e0: 0xa2200477  sb          $zero, 0x477($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1143), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB8DCu, 0x1CB8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8E4u;
label_1cb8e4:
    // 0x1cb8e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cb8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8ec: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1cb8ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1cb8f0: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x1cb8f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1cb8f4: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x1CB8F4u;
    {
        const bool branch_taken_0x1cb8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8F4u;
        // 0x1cb8f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8f4) {
            ctx->pc = 0x1CBA94u;
            goto label_1cba94;
        }
    }
    ctx->pc = 0x1CB8FCu;
    // 0x1cb8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb900:
    // 0x1cb900: 0xc072d50  jal         func_1CB540
    ctx->pc = 0x1CB900u;
    SET_GPR_U32(ctx, 31, 0x1CB908u);
    ctx->pc = 0x1CB904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB900u;
    // 0x1cb904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB540u, 0x1CB900u, 0x1CB908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB908u;
label_1cb908:
    // 0x1cb908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb90c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x1cb90cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1cb910: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CB910u;
    {
        const bool branch_taken_0x1cb910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB910u;
        // 0x1cb914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb910) {
            ctx->pc = 0x1CB900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb900;
        }
    }
    ctx->pc = 0x1CB918u;
    // 0x1cb918: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1CB918u;
    {
        const bool branch_taken_0x1cb918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB918u;
        // 0x1cb91c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb918) {
            ctx->pc = 0x1CBA94u;
            goto label_1cba94;
        }
    }
    ctx->pc = 0x1CB920u;
label_1cb920:
    // 0x1cb920: 0xc073d5c  jal         func_1CF570
    ctx->pc = 0x1CB920u;
    SET_GPR_U32(ctx, 31, 0x1CB928u);
    ctx->pc = 0x1CB924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB920u;
    // 0x1cb924: 0x24040480  addiu       $a0, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF570u, 0x1CB920u, 0x1CB928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB928u;
label_1cb928:
    // 0x1cb928: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1cb928u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb92c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb930: 0x26250480  addiu       $a1, $s1, 0x480
    ctx->pc = 0x1cb930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
label_1cb934:
    // 0x1cb934: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1cb934u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb938: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1cb938u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cb93c: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1cb93cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1cb940: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1cb940u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1cb944: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1cb944u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1cb948: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cb948u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cb94c: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1cb94cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x1cb950: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cb950u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cb954: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cb954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1cb958: 0x0  nop
    ctx->pc = 0x1cb958u;
    // NOP
    // 0x1cb95c: 0x0  nop
    ctx->pc = 0x1cb95cu;
    // NOP
    // 0x1cb960: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CB960u;
    {
        const bool branch_taken_0x1cb960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CB964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB960u;
        // 0x1cb964: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb960) {
            ctx->pc = 0x1CB934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb934;
        }
    }
    ctx->pc = 0x1CB968u;
    // 0x1cb968: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1CB968u;
    {
        const bool branch_taken_0x1cb968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB968u;
        // 0x1cb96c: 0xae220478  sw          $v0, 0x478($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb968) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CB970u;
label_1cb970:
    // 0x1cb970: 0x8e240478  lw          $a0, 0x478($s1)
    ctx->pc = 0x1cb970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1144)));
    // 0x1cb974: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb978: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cb978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb97c: 0x24820480  addiu       $v0, $a0, 0x480
    ctx->pc = 0x1cb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_1cb980:
    // 0x1cb980: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1cb980u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb984: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1cb984u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cb988: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1cb988u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1cb98c: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1cb98cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1cb990: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x1cb990u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x1cb994: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x1cb994u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x1cb998: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x1cb998u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x1cb99c: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x1cb99cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x1cb9a0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cb9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1cb9a4: 0x0  nop
    ctx->pc = 0x1cb9a4u;
    // NOP
    // 0x1cb9a8: 0x0  nop
    ctx->pc = 0x1cb9a8u;
    // NOP
    // 0x1cb9ac: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CB9ACu;
    {
        const bool branch_taken_0x1cb9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CB9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9ACu;
        // 0x1cb9b0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9ac) {
            ctx->pc = 0x1CB980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb980;
        }
    }
    ctx->pc = 0x1CB9B4u;
    // 0x1cb9b4: 0xc073d72  jal         func_1CF5C8
    ctx->pc = 0x1CB9B4u;
    SET_GPR_U32(ctx, 31, 0x1CB9BCu);
    ctx->pc = 0x1CF5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF5C8u, 0x1CB9B4u, 0x1CB9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9BCu;
label_1cb9bc:
    // 0x1cb9bc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1CB9BCu;
    {
        const bool branch_taken_0x1cb9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9BCu;
        // 0x1cb9c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9bc) {
            ctx->pc = 0x1CBA94u;
            goto label_1cba94;
        }
    }
    ctx->pc = 0x1CB9C4u;
    // 0x1cb9c4: 0x0  nop
    ctx->pc = 0x1cb9c4u;
    // NOP
label_1cb9c8:
    // 0x1cb9c8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1cb9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cb9cc: 0x2626000c  addiu       $a2, $s1, 0xC
    ctx->pc = 0x1cb9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1cb9d0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1cb9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1cb9d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb9d8:
    // 0x1cb9d8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1cb9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cb9dc: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1cb9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cb9e0: 0xa04703f0  sb          $a3, 0x3F0($v0)
    ctx->pc = 0x1cb9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1008), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cb9e4: 0x2483fff0  addiu       $v1, $a0, -0x10
    ctx->pc = 0x1cb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x1cb9e8: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1cb9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cb9ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cb9f0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1cb9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cb9f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cb9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cb9f8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1cb9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1cb9fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1cb9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1cba00: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x1cba00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1cba04: 0xfc830020  sd          $v1, 0x20($a0)
    ctx->pc = 0x1cba04u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
    // 0x1cba08: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1CBA08u;
    {
        const bool branch_taken_0x1cba08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA08u;
        // 0x1cba0c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba08) {
            ctx->pc = 0x1CB9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb9d8;
        }
    }
    ctx->pc = 0x1CBA10u;
    // 0x1cba10: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1CBA10u;
    {
        const bool branch_taken_0x1cba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA10u;
        // 0x1cba14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba10) {
            ctx->pc = 0x1CBA94u;
            goto label_1cba94;
        }
    }
    ctx->pc = 0x1CBA18u;
label_1cba18:
    // 0x1cba18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba1c: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CBA1Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA24u);
    ctx->pc = 0x1CBA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA1Cu;
    // 0x1cba20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CBA1Cu, 0x1CBA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA24u;
label_1cba24:
    // 0x1cba24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cba24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cba2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CBA2Cu;
    {
        const bool branch_taken_0x1cba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA2Cu;
        // 0x1cba30: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba2c) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CBA34u;
    // 0x1cba34: 0x0  nop
    ctx->pc = 0x1cba34u;
    // NOP
label_1cba38:
    // 0x1cba38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cba38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba3c: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CBA3Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA44u);
    ctx->pc = 0x1CBA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA3Cu;
    // 0x1cba40: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CBA3Cu, 0x1CBA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA44u;
label_1cba44:
    // 0x1cba44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cba44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba48: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CBA48u;
    SET_GPR_U32(ctx, 31, 0x1CBA50u);
    ctx->pc = 0x1CBA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA48u;
    // 0x1cba4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CBA48u, 0x1CBA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA50u;
label_1cba50:
    // 0x1cba50: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1cba50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cba54: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cba54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cba58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cba58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba5c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1cba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cba60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cba60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cba64: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1cba64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1cba68: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cba68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cba6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cba70: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1cba70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1cba74: 0xa04603fc  sb          $a2, 0x3FC($v0)
    ctx->pc = 0x1cba74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1020), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cba78: 0x42823  negu        $a1, $a0
    ctx->pc = 0x1cba78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1cba7c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1cba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1cba80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBA80u;
    {
        const bool branch_taken_0x1cba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA80u;
        // 0x1cba84: 0xfc650020  sd          $a1, 0x20($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba80) {
            ctx->pc = 0x1CBA90u;
            goto label_1cba90;
        }
    }
    ctx->pc = 0x1CBA88u;
label_1cba88:
    // 0x1cba88: 0xc073d1a  jal         func_1CF468
    ctx->pc = 0x1CBA88u;
    SET_GPR_U32(ctx, 31, 0x1CBA90u);
    ctx->pc = 0x1CF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF468u, 0x1CBA88u, 0x1CBA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA90u;
label_1cba90:
    // 0x1cba90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cba90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cba94:
    // 0x1cba94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cba94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cba98: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cba98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cba9c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cba9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cbaa0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cbaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cbaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAA4u;
        // 0x1cbaa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBAACu;
}
