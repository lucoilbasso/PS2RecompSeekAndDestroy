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

// Function: SePlay__7WcSeStdiiii
// Address: 0x17b2e8 - 0x17b444
void SePlay__7WcSeStdiiii_0x17b2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SePlay__7WcSeStdiiii_0x17b2e8");
#endif

    switch (ctx->pc) {
        case 0x17b338u: goto label_17b338;
        case 0x17b360u: goto label_17b360;
        case 0x17b388u: goto label_17b388;
        case 0x17b390u: goto label_17b390;
        case 0x17b3b0u: goto label_17b3b0;
        default: break;
    }

    ctx->pc = 0x17b2e8u;

    // 0x17b2e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17b2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17b2ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b2f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17b2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2f4: 0x32224000  andi        $v0, $s1, 0x4000
    ctx->pc = 0x17b2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
    // 0x17b2f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17b2fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17b2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17b300: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17b300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b304: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17b304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17b308: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x17b308u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b30c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17b30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17b310: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x17b310u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b318: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17b318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b31c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x17B31Cu;
    {
        const bool branch_taken_0x17b31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B31Cu;
        // 0x17b320: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b31c) {
            ctx->pc = 0x17B3A0u;
            goto label_17b3a0;
        }
    }
    ctx->pc = 0x17B324u;
    // 0x17b324: 0x26450140  addiu       $a1, $s2, 0x140
    ctx->pc = 0x17b324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x17b328: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17b328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b32c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17b32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b330: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17b330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b334: 0x0  nop
    ctx->pc = 0x17b334u;
    // NOP
label_17b338:
    // 0x17b338: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b33c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x17b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x17b340: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17B340u;
    {
        const bool branch_taken_0x17b340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B340u;
        // 0x17b344: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b340) {
            ctx->pc = 0x17B370u;
            goto label_17b370;
        }
    }
    ctx->pc = 0x17B348u;
    // 0x17b348: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17b348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17b34c: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x17b34cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17b350: 0x0  nop
    ctx->pc = 0x17b350u;
    // NOP
    // 0x17b354: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B354u;
    {
        const bool branch_taken_0x17b354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B354u;
        // 0x17b358: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b354) {
            ctx->pc = 0x17B338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b338;
        }
    }
    ctx->pc = 0x17B35Cu;
    // 0x17b35c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17b360:
    // 0x17b360: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x17b360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x17b364: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x17b364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b368: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17B368u;
    {
        const bool branch_taken_0x17b368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B368u;
        // 0x17b36c: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b368) {
            ctx->pc = 0x17B3DCu;
            goto label_17b3dc;
        }
    }
    ctx->pc = 0x17B370u;
label_17b370:
    // 0x17b370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b374: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x17b374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x17b378: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x17b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x17b37c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x17b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x17b380: 0xc05ef22  jal         func_17BC88
    ctx->pc = 0x17B380u;
    SET_GPR_U32(ctx, 31, 0x17B388u);
    ctx->pc = 0x17B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B380u;
    // 0x17b384: 0x24840380  addiu       $a0, $a0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC88u, 0x17B380u, 0x17B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B388u;
label_17b388:
    // 0x17b388: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x17B388u;
    {
        const bool branch_taken_0x17b388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B388u;
        // 0x17b38c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b388) {
            ctx->pc = 0x17B360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b360;
        }
    }
    ctx->pc = 0x17B390u;
label_17b390:
    // 0x17b390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b394: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x17b394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x17b398: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17B398u;
    {
        const bool branch_taken_0x17b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B398u;
        // 0x17b39c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b398) {
            ctx->pc = 0x17B3D8u;
            goto label_17b3d8;
        }
    }
    ctx->pc = 0x17B3A0u;
label_17b3a0:
    // 0x17b3a0: 0x26450170  addiu       $a1, $s2, 0x170
    ctx->pc = 0x17b3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    // 0x17b3a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3a8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x17b3a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3ac: 0x0  nop
    ctx->pc = 0x17b3acu;
    // NOP
label_17b3b0:
    // 0x17b3b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b3b4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17B3B4u;
    {
        const bool branch_taken_0x17b3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3B4u;
        // 0x17b3b8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3b4) {
            ctx->pc = 0x17B390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b390;
        }
    }
    ctx->pc = 0x17B3BCu;
    // 0x17b3bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17b3c0: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x17b3c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x17b3c4: 0x0  nop
    ctx->pc = 0x17b3c4u;
    // NOP
    // 0x17b3c8: 0x0  nop
    ctx->pc = 0x17b3c8u;
    // NOP
    // 0x17b3cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17B3CCu;
    {
        const bool branch_taken_0x17b3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3CCu;
        // 0x17b3d0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3cc) {
            ctx->pc = 0x17B3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b3b0;
        }
    }
    ctx->pc = 0x17B3D4u;
    // 0x17b3d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17b3d8:
    // 0x17b3d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x17b3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17b3dc:
    // 0x17b3dc: 0x4a00010  bltz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B3DCu;
    {
        const bool branch_taken_0x17b3dc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3DCu;
        // 0x17b3e0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3dc) {
            ctx->pc = 0x17B420u;
            goto label_17b420;
        }
    }
    ctx->pc = 0x17B3E4u;
    // 0x17b3e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17b3e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b3ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17b3f0: 0x51880a  movz        $s1, $v0, $s1
    ctx->pc = 0x17b3f0u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x17b3f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17b3f8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x17b3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3fc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x17b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17b400: 0x246301a0  addiu       $v1, $v1, 0x1A0
    ctx->pc = 0x17b400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x17b404: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17b404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b408: 0xac730010  sw          $s3, 0x10($v1)
    ctx->pc = 0x17b408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 19));
    // 0x17b40c: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x17b40cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x17b410: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x17b410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x17b414: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x17b414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x17b418: 0xac740008  sw          $s4, 0x8($v1)
    ctx->pc = 0x17b418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 20));
    // 0x17b41c: 0xac75000c  sw          $s5, 0xC($v1)
    ctx->pc = 0x17b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 21));
label_17b420:
    // 0x17b420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b428: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b428u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b42c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17b42cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b430: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17b430u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b434: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17b434u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17b438: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17b438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b43c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B43Cu;
        // 0x17b440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B444u;
}
