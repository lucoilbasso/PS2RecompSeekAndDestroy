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

// Function: _sendDataToIPU
// Address: 0x1be2d8 - 0x1be3d8
void _sendDataToIPU_0x1be2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sendDataToIPU_0x1be2d8");
#endif

    switch (ctx->pc) {
        case 0x1be318u: goto label_1be318;
        case 0x1be37cu: goto label_1be37c;
        case 0x1be384u: goto label_1be384;
        default: break;
    }

    ctx->pc = 0x1be2d8u;

    // 0x1be2d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be2dc: 0x2484088f  addiu       $a0, $a0, 0x88F
    ctx->pc = 0x1be2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2191));
    // 0x1be2e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be2e4: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x1be2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x1be2e8: 0x48100  sll         $s0, $a0, 4
    ctx->pc = 0x1be2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1be2ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be2f0: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1be2f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2f4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1be2f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2f8: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BE2F8u;
    {
        const bool branch_taken_0x1be2f8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1BE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2F8u;
        // 0x1be2fc: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2f8) {
            ctx->pc = 0x1BE374u;
            goto label_1be374;
        }
    }
    ctx->pc = 0x1BE300u;
    // 0x1be300: 0x3c09000f  lui         $t1, 0xF
    ctx->pc = 0x1be300u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15 << 16));
    // 0x1be304: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x1be304u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x1be308: 0x3529ff40  ori         $t1, $t1, 0xFF40
    ctx->pc = 0x1be308u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65344);
    // 0x1be30c: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x1be30cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x1be310: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1be310u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be314: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1be314u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1be318:
    // 0x1be318: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x1be318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1be31c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1be31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be320: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x1be320u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x1be324: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1be324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be328: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x1be328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x1be32c: 0x24e2001e  addiu       $v0, $a3, 0x1E
    ctx->pc = 0x1be32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
    // 0x1be330: 0x1a6282a  slt         $a1, $t5, $a2
    ctx->pc = 0x1be330u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1be334: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x1be334u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1be338: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1be338u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1be33c: 0x16c2024  and         $a0, $t3, $t4
    ctx->pc = 0x1be33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x1be340: 0x1c8180b  movn        $v1, $t6, $t0
    ctx->pc = 0x1be340u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 14));
    // 0x1be344: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1be344u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1be348: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1be348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1be34c: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x1be34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x1be350: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1be350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1be354: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1be354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1be358: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1be358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1be35c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1be35cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1be360: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x1be360u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x1be364: 0xf  sync
    ctx->pc = 0x1be364u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1be368: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x1be368u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1be36c: 0x1d00ffea  bgtz        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1BE36Cu;
    {
        const bool branch_taken_0x1be36c = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1BE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE36Cu;
        // 0x1be370: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be36c) {
            ctx->pc = 0x1BE318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be318;
        }
    }
    ctx->pc = 0x1BE374u;
label_1be374:
    // 0x1be374: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1BE374u;
    SET_GPR_U32(ctx, 31, 0x1BE37Cu);
    ctx->pc = 0x1BE378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE374u;
    // 0x1be378: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1BE374u, 0x1BE37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE37Cu;
label_1be37c:
    // 0x1be37c: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1BE37Cu;
    SET_GPR_U32(ctx, 31, 0x1BE384u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1BE37Cu, 0x1BE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE384u;
label_1be384:
    // 0x1be384: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1be384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1be388: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1be388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1be38c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1be38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1be390: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x1be390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x1be394: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1be394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1be398: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1be398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1be39c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1be39cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1be3a0: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1be3a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x1be3a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1be3a4u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x1be3a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1be3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1be3ac: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x1be3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x1be3b0: 0x24040105  addiu       $a0, $zero, 0x105
    ctx->pc = 0x1be3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x1be3b4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1be3b4u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4));
    // 0x1be3b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE3B8u;
    {
        const bool branch_taken_0x1be3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3B8u;
        // 0x1be3bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be3b8) {
            ctx->pc = 0x1BE3CCu;
            goto label_1be3cc;
        }
    }
    ctx->pc = 0x1BE3C0u;
    // 0x1be3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be3c4: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1BE3C4u;
    ctx->pc = 0x1BE3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE3C4u;
    // 0x1be3c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE3CCu;
label_1be3cc:
    // 0x1be3cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3D0u;
        // 0x1be3d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE3D8u;
}
