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

// Function: sPanelMotionCtrlSetup__FP8WcEntityi
// Address: 0x108068 - 0x108510
void sPanelMotionCtrlSetup__FP8WcEntityi_0x108068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sPanelMotionCtrlSetup__FP8WcEntityi_0x108068");
#endif

    switch (ctx->pc) {
        case 0x108084u: goto label_108084;
        default: break;
    }

    ctx->pc = 0x108068u;

    // 0x108068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10806c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x108074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10807c: 0xc06164c  jal         func_185930
    ctx->pc = 0x10807Cu;
    SET_GPR_U32(ctx, 31, 0x108084u);
    ctx->pc = 0x108080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10807Cu;
    // 0x108080: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x10807Cu, 0x108084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108084u;
label_108084:
    // 0x108084: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x108084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108088: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x108088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x10808c: 0x1440011b  bnez        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x10808Cu;
    {
        const bool branch_taken_0x10808c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10808Cu;
        // 0x108090: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10808c) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x108094u;
    // 0x108094: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x108094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x108098: 0x122200bf  beq         $s1, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x108098u;
    {
        const bool branch_taken_0x108098 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x10809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108098u;
        // 0x10809c: 0x2a222001  slti        $v0, $s1, 0x2001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108098) {
            ctx->pc = 0x108398u;
            goto label_108398;
        }
    }
    ctx->pc = 0x1080A0u;
    // 0x1080a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1080A0u;
    {
        const bool branch_taken_0x1080a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080A0u;
        // 0x1080a4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080a0) {
            ctx->pc = 0x1080E8u;
            goto label_1080e8;
        }
    }
    ctx->pc = 0x1080A8u;
    // 0x1080a8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1080a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1080ac: 0x12220088  beq         $s1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x1080ACu;
    {
        const bool branch_taken_0x1080ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1080B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080ACu;
        // 0x1080b0: 0x2a220401  slti        $v0, $s1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080ac) {
            ctx->pc = 0x1082D0u;
            goto label_1082d0;
        }
    }
    ctx->pc = 0x1080B4u;
    // 0x1080b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1080B4u;
    {
        const bool branch_taken_0x1080b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080B4u;
        // 0x1080b8: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080b4) {
            ctx->pc = 0x1080D0u;
            goto label_1080d0;
        }
    }
    ctx->pc = 0x1080BCu;
    // 0x1080bc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1080bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1080c0: 0x52220019  beql        $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1080C0u;
    {
        const bool branch_taken_0x1080c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1080c0) {
            ctx->pc = 0x1080C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1080C0u;
            // 0x1080c4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108128u;
            goto label_108128;
        }
    }
    ctx->pc = 0x1080C8u;
    // 0x1080c8: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x1080C8u;
    {
        const bool branch_taken_0x1080c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080C8u;
        // 0x1080cc: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080c8) {
            ctx->pc = 0x1084E8u;
            goto label_1084e8;
        }
    }
    ctx->pc = 0x1080D0u;
label_1080d0:
    // 0x1080d0: 0x12220075  beq         $s1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1080D0u;
    {
        const bool branch_taken_0x1080d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1080D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080D0u;
        // 0x1080d4: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080d0) {
            ctx->pc = 0x1082A8u;
            goto label_1082a8;
        }
    }
    ctx->pc = 0x1080D8u;
    // 0x1080d8: 0x5222009f  beql        $s1, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x1080D8u;
    {
        const bool branch_taken_0x1080d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1080d8) {
            ctx->pc = 0x1080DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1080D8u;
            // 0x1080dc: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108358u;
            goto label_108358;
        }
    }
    ctx->pc = 0x1080E0u;
    // 0x1080e0: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x1080E0u;
    {
        const bool branch_taken_0x1080e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080E0u;
        // 0x1080e4: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080e0) {
            ctx->pc = 0x1084E8u;
            goto label_1084e8;
        }
    }
    ctx->pc = 0x1080E8u;
label_1080e8:
    // 0x1080e8: 0x1222004b  beq         $s1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1080E8u;
    {
        const bool branch_taken_0x1080e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080E8u;
        // 0x1080ec: 0x51102a  slt         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080e8) {
            ctx->pc = 0x108218u;
            goto label_108218;
        }
    }
    ctx->pc = 0x1080F0u;
    // 0x1080f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1080F0u;
    {
        const bool branch_taken_0x1080f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1080F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080F0u;
        // 0x1080f4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080f0) {
            ctx->pc = 0x108110u;
            goto label_108110;
        }
    }
    ctx->pc = 0x1080F8u;
    // 0x1080f8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1080f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1080fc: 0x522200b6  beql        $s1, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1080FCu;
    {
        const bool branch_taken_0x1080fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1080fc) {
            ctx->pc = 0x108100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1080FCu;
            // 0x108100: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1083D8u;
            goto label_1083d8;
        }
    }
    ctx->pc = 0x108104u;
    // 0x108104: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x108104u;
    {
        const bool branch_taken_0x108104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108104u;
        // 0x108108: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108104) {
            ctx->pc = 0x1084E8u;
            goto label_1084e8;
        }
    }
    ctx->pc = 0x10810Cu;
    // 0x10810c: 0x0  nop
    ctx->pc = 0x10810cu;
    // NOP
label_108110:
    // 0x108110: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x108110u;
    {
        const bool branch_taken_0x108110 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x108114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108110u;
        // 0x108114: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108110) {
            ctx->pc = 0x108168u;
            goto label_108168;
        }
    }
    ctx->pc = 0x108118u;
    // 0x108118: 0x122200d1  beq         $s1, $v0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x108118u;
    {
        const bool branch_taken_0x108118 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x10811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108118u;
        // 0x10811c: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108118) {
            ctx->pc = 0x108460u;
            goto label_108460;
        }
    }
    ctx->pc = 0x108120u;
    // 0x108120: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x108120u;
    {
        const bool branch_taken_0x108120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108120u;
        // 0x108124: 0x3463ff00  ori         $v1, $v1, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108120) {
            ctx->pc = 0x1084ECu;
            goto label_1084ec;
        }
    }
    ctx->pc = 0x108128u;
label_108128:
    // 0x108128: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x108128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x10812c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10812Cu;
    {
        const bool branch_taken_0x10812c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x108130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10812Cu;
        // 0x108130: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10812c) {
            ctx->pc = 0x108154u;
            goto label_108154;
        }
    }
    ctx->pc = 0x108134u;
    // 0x108134: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x108134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x108138: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108138u;
    {
        const bool branch_taken_0x108138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108138u;
        // 0x10813c: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108138) {
            ctx->pc = 0x108154u;
            goto label_108154;
        }
    }
    ctx->pc = 0x108140u;
    // 0x108140: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108140u;
    {
        const bool branch_taken_0x108140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x108144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108140u;
        // 0x108144: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108140) {
            ctx->pc = 0x108154u;
            goto label_108154;
        }
    }
    ctx->pc = 0x108148u;
    // 0x108148: 0x38830046  xori        $v1, $a0, 0x46
    ctx->pc = 0x108148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)70);
    // 0x10814c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x10814cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x108150: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108150u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108154:
    // 0x108154: 0x106000e9  beqz        $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x108154u;
    {
        const bool branch_taken_0x108154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108154u;
        // 0x108158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108154) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x10815Cu;
    // 0x10815c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x10815Cu;
    {
        const bool branch_taken_0x10815c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10815Cu;
        // 0x108160: 0x24620007  addiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10815c) {
            ctx->pc = 0x108410u;
            goto label_108410;
        }
    }
    ctx->pc = 0x108164u;
    // 0x108164: 0x0  nop
    ctx->pc = 0x108164u;
    // NOP
label_108168:
    // 0x108168: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x108168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10816c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x10816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x108170: 0x146200e2  bne         $v1, $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x108170u;
    {
        const bool branch_taken_0x108170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108170u;
        // 0x108174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108170) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x108178u;
    // 0x108178: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x108178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x10817c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10817Cu;
    {
        const bool branch_taken_0x10817c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10817c) {
            ctx->pc = 0x10818Cu;
            goto label_10818c;
        }
    }
    ctx->pc = 0x108184u;
    // 0x108184: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x108184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x108188: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x108188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10818c:
    // 0x10818c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x10818Cu;
    {
        const bool branch_taken_0x10818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10818Cu;
        // 0x108190: 0x24650014  addiu       $a1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10818c) {
            ctx->pc = 0x1082ECu;
            goto label_1082ec;
        }
    }
    ctx->pc = 0x108194u;
    // 0x108194: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x108194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x108198: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x108198u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x10819c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10819cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081a0: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x1081a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1081a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1081a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081a8: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x1081a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1081ac: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x1081acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1081b0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1081b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1081b4: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1081b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x1081b8: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x1081b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x1081bc: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1081bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1081c0: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x1081c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x1081c4: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x1081c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x1081c8: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x1081c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x1081cc: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x1081ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x1081d0: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x1081d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x1081d4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1081D4u;
    {
        const bool branch_taken_0x1081d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081D4u;
        // 0x1081d8: 0xacc0007c  sw          $zero, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081d4) {
            ctx->pc = 0x1081E8u;
            goto label_1081e8;
        }
    }
    ctx->pc = 0x1081DCu;
    // 0x1081dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1081dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1081e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1081E0u;
    {
        const bool branch_taken_0x1081e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081E0u;
        // 0x1081e4: 0xa4c20008  sh          $v0, 0x8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081e0) {
            ctx->pc = 0x1081ECu;
            goto label_1081ec;
        }
    }
    ctx->pc = 0x1081E8u;
label_1081e8:
    // 0x1081e8: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x1081e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
label_1081ec:
    // 0x1081ec: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1081ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1081f0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1081f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x1081f4: 0x244244a8  addiu       $v0, $v0, 0x44A8
    ctx->pc = 0x1081f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17576));
    // 0x1081f8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1081f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1081fc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1081FCu;
    {
        const bool branch_taken_0x1081fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x108200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081FCu;
        // 0x108200: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081fc) {
            ctx->pc = 0x108210u;
            goto label_108210;
        }
    }
    ctx->pc = 0x108204u;
    // 0x108204: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x108204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x108208: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x108208u;
    {
        const bool branch_taken_0x108208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108208u;
        // 0x10820c: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108208) {
            ctx->pc = 0x1084F8u;
            goto label_1084f8;
        }
    }
    ctx->pc = 0x108210u;
label_108210:
    // 0x108210: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x108210u;
    {
        const bool branch_taken_0x108210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108210u;
        // 0x108214: 0xa4800008  sh          $zero, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108210) {
            ctx->pc = 0x1084F8u;
            goto label_1084f8;
        }
    }
    ctx->pc = 0x108218u;
label_108218:
    // 0x108218: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x108218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10821c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x10821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x108220: 0x146200b6  bne         $v1, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x108220u;
    {
        const bool branch_taken_0x108220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108220u;
        // 0x108224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108220) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x108228u;
    // 0x108228: 0x8e0301a4  lw          $v1, 0x1A4($s0)
    ctx->pc = 0x108228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x10822c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10822Cu;
    {
        const bool branch_taken_0x10822c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10822c) {
            ctx->pc = 0x10823Cu;
            goto label_10823c;
        }
    }
    ctx->pc = 0x108234u;
    // 0x108234: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x108234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x108238: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x108238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10823c:
    // 0x10823c: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x10823Cu;
    {
        const bool branch_taken_0x10823c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10823Cu;
        // 0x108240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10823c) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x108244u;
    // 0x108244: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x108244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x108248: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x108248u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10824c: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x10824cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x108250: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x108250u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x108254: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x108254u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x108258: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x108258u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x10825c: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x10825cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x108260: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x108260u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x108264: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x108264u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x108268: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x108268u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x10826c: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x10826cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x108270: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x108270u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x108274: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x108274u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x108278: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x108278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x10827c: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x10827cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x108280: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x108280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x108284: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108284u;
    {
        const bool branch_taken_0x108284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108284u;
        // 0x108288: 0xacc0007c  sw          $zero, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108284) {
            ctx->pc = 0x108298u;
            goto label_108298;
        }
    }
    ctx->pc = 0x10828Cu;
    // 0x10828c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x10828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x108290: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108290u;
    {
        const bool branch_taken_0x108290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108290u;
        // 0x108294: 0xa4c20008  sh          $v0, 0x8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108290) {
            ctx->pc = 0x10829Cu;
            goto label_10829c;
        }
    }
    ctx->pc = 0x108298u;
label_108298:
    // 0x108298: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x108298u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
label_10829c:
    // 0x10829c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x10829Cu;
    {
        const bool branch_taken_0x10829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10829Cu;
        // 0x1082a0: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10829c) {
            ctx->pc = 0x1084D8u;
            goto label_1084d8;
        }
    }
    ctx->pc = 0x1082A4u;
    // 0x1082a4: 0x0  nop
    ctx->pc = 0x1082a4u;
    // NOP
label_1082a8:
    // 0x1082a8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1082a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1082ac: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x1082acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1082b0: 0x14830092  bne         $a0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x1082B0u;
    {
        const bool branch_taken_0x1082b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1082B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082B0u;
        // 0x1082b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082b0) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x1082B8u;
    // 0x1082b8: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x1082b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x1082bc: 0x26040154  addiu       $a0, $s0, 0x154
    ctx->pc = 0x1082bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
    // 0x1082c0: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x1082c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x1082c4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1082C4u;
    {
        const bool branch_taken_0x1082c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082C4u;
        // 0x1082c8: 0x244573e0  addiu       $a1, $v0, 0x73E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082c4) {
            ctx->pc = 0x108484u;
            goto label_108484;
        }
    }
    ctx->pc = 0x1082CCu;
    // 0x1082cc: 0x0  nop
    ctx->pc = 0x1082ccu;
    // NOP
label_1082d0:
    // 0x1082d0: 0x8e040144  lw          $a0, 0x144($s0)
    ctx->pc = 0x1082d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x1082d4: 0x10800089  beqz        $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1082D4u;
    {
        const bool branch_taken_0x1082d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082D4u;
        // 0x1082d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082d4) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x1082DCu;
    // 0x1082dc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1082dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1082e0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1082e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1082e4: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1082E4u;
    {
        const bool branch_taken_0x1082e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1082e4) {
            ctx->pc = 0x1082E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1082E4u;
            // 0x1082e8: 0x24840088  addiu       $a0, $a0, 0x88 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1082F8u;
            goto label_1082f8;
        }
    }
    ctx->pc = 0x1082ECu;
label_1082ec:
    // 0x1082ec: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1082ECu;
    {
        const bool branch_taken_0x1082ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082ECu;
        // 0x1082f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082ec) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x1082F4u;
    // 0x1082f4: 0x0  nop
    ctx->pc = 0x1082f4u;
    // NOP
label_1082f8:
    // 0x1082f8: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x1082f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x1082fc: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x1082fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x108300: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x108300u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108304: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x108304u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x108308: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x108308u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x10830c: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x10830cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x108310: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x108310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x108314: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x108314u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x108318: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x108318u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x10831c: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x10831cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x108320: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x108320u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x108324: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x108324u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x108328: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x108328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x10832c: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x10832cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x108330: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x108330u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x108334: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108334u;
    {
        const bool branch_taken_0x108334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108334u;
        // 0x108338: 0xacc0007c  sw          $zero, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108334) {
            ctx->pc = 0x108348u;
            goto label_108348;
        }
    }
    ctx->pc = 0x10833Cu;
    // 0x10833c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x10833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x108340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108340u;
    {
        const bool branch_taken_0x108340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108340u;
        // 0x108344: 0xa4c20008  sh          $v0, 0x8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108340) {
            ctx->pc = 0x10834Cu;
            goto label_10834c;
        }
    }
    ctx->pc = 0x108348u;
label_108348:
    // 0x108348: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x108348u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
label_10834c:
    // 0x10834c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x10834Cu;
    {
        const bool branch_taken_0x10834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10834Cu;
        // 0x108350: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10834c) {
            ctx->pc = 0x1084D8u;
            goto label_1084d8;
        }
    }
    ctx->pc = 0x108354u;
    // 0x108354: 0x0  nop
    ctx->pc = 0x108354u;
    // NOP
label_108358:
    // 0x108358: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x108358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x10835c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10835Cu;
    {
        const bool branch_taken_0x10835c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x108360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10835Cu;
        // 0x108360: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10835c) {
            ctx->pc = 0x108384u;
            goto label_108384;
        }
    }
    ctx->pc = 0x108364u;
    // 0x108364: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x108364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x108368: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108368u;
    {
        const bool branch_taken_0x108368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x10836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108368u;
        // 0x10836c: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108368) {
            ctx->pc = 0x108384u;
            goto label_108384;
        }
    }
    ctx->pc = 0x108370u;
    // 0x108370: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108370u;
    {
        const bool branch_taken_0x108370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x108374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108370u;
        // 0x108374: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108370) {
            ctx->pc = 0x108384u;
            goto label_108384;
        }
    }
    ctx->pc = 0x108378u;
    // 0x108378: 0x38830046  xori        $v1, $a0, 0x46
    ctx->pc = 0x108378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)70);
    // 0x10837c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x10837cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x108380: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108384:
    // 0x108384: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x108384u;
    {
        const bool branch_taken_0x108384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108384u;
        // 0x108388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108384) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x10838Cu;
    // 0x10838c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x10838Cu;
    {
        const bool branch_taken_0x10838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10838Cu;
        // 0x108390: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10838c) {
            ctx->pc = 0x108410u;
            goto label_108410;
        }
    }
    ctx->pc = 0x108394u;
    // 0x108394: 0x0  nop
    ctx->pc = 0x108394u;
    // NOP
label_108398:
    // 0x108398: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x108398u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10839c: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x10839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1083a0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1083A0u;
    {
        const bool branch_taken_0x1083a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1083A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083A0u;
        // 0x1083a4: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083a0) {
            ctx->pc = 0x1083C8u;
            goto label_1083c8;
        }
    }
    ctx->pc = 0x1083A8u;
    // 0x1083a8: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x1083a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1083ac: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1083ACu;
    {
        const bool branch_taken_0x1083ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1083B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083ACu;
        // 0x1083b0: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083ac) {
            ctx->pc = 0x1083C8u;
            goto label_1083c8;
        }
    }
    ctx->pc = 0x1083B4u;
    // 0x1083b4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1083B4u;
    {
        const bool branch_taken_0x1083b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1083B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083B4u;
        // 0x1083b8: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083b4) {
            ctx->pc = 0x1083C8u;
            goto label_1083c8;
        }
    }
    ctx->pc = 0x1083BCu;
    // 0x1083bc: 0x38830046  xori        $v1, $a0, 0x46
    ctx->pc = 0x1083bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)70);
    // 0x1083c0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1083c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1083c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1083c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1083c8:
    // 0x1083c8: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1083C8u;
    {
        const bool branch_taken_0x1083c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083C8u;
        // 0x1083cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083c8) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x1083D0u;
    // 0x1083d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1083D0u;
    {
        const bool branch_taken_0x1083d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1083D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083D0u;
        // 0x1083d4: 0x24620005  addiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083d0) {
            ctx->pc = 0x108410u;
            goto label_108410;
        }
    }
    ctx->pc = 0x1083D8u;
label_1083d8:
    // 0x1083d8: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x1083d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1083dc: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1083DCu;
    {
        const bool branch_taken_0x1083dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1083E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083DCu;
        // 0x1083e0: 0x26030150  addiu       $v1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083dc) {
            ctx->pc = 0x108404u;
            goto label_108404;
        }
    }
    ctx->pc = 0x1083E4u;
    // 0x1083e4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x1083e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1083e8: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1083E8u;
    {
        const bool branch_taken_0x1083e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1083ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083E8u;
        // 0x1083ec: 0x24020086  addiu       $v0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083e8) {
            ctx->pc = 0x108404u;
            goto label_108404;
        }
    }
    ctx->pc = 0x1083F0u;
    // 0x1083f0: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1083F0u;
    {
        const bool branch_taken_0x1083f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1083F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083F0u;
        // 0x1083f4: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083f0) {
            ctx->pc = 0x108404u;
            goto label_108404;
        }
    }
    ctx->pc = 0x1083F8u;
    // 0x1083f8: 0x38830046  xori        $v1, $a0, 0x46
    ctx->pc = 0x1083f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)70);
    // 0x1083fc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1083fcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x108400: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_108404:
    // 0x108404: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x108404u;
    {
        const bool branch_taken_0x108404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108404u;
        // 0x108408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108404) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x10840Cu;
    // 0x10840c: 0x24620006  addiu       $v0, $v1, 0x6
    ctx->pc = 0x10840cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
label_108410:
    // 0x108410: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x108410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x108414: 0x24634448  addiu       $v1, $v1, 0x4448
    ctx->pc = 0x108414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17480));
    // 0x108418: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x108418u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10841c: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x10841cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x108420: 0xa4c40008  sh          $a0, 0x8($a2)
    ctx->pc = 0x108420u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x108424: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x108424u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x108428: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x108428u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x10842c: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x10842cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x108430: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x108430u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x108434: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x108434u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x108438: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x108438u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x10843c: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x10843cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x108440: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x108440u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x108444: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x108444u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x108448: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x108448u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x10844c: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x10844cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x108450: 0xacc0007c  sw          $zero, 0x7C($a2)
    ctx->pc = 0x108450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
    // 0x108454: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x108454u;
    {
        const bool branch_taken_0x108454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108454u;
        // 0x108458: 0xacc00014  sw          $zero, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108454) {
            ctx->pc = 0x1084F8u;
            goto label_1084f8;
        }
    }
    ctx->pc = 0x10845Cu;
    // 0x10845c: 0x0  nop
    ctx->pc = 0x10845cu;
    // NOP
label_108460:
    // 0x108460: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x108460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x108464: 0x24040176  addiu       $a0, $zero, 0x176
    ctx->pc = 0x108464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x108468: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x108468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x10846c: 0x14640023  bne         $v1, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10846Cu;
    {
        const bool branch_taken_0x10846c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x108470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10846Cu;
        // 0x108470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10846c) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x108474u;
    // 0x108474: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x108474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x108478: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x108478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x10847c: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x10847cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x108480: 0x24451490  addiu       $a1, $v0, 0x1490
    ctx->pc = 0x108480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_108484:
    // 0x108484: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x108484u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x108488: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x108488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10848c: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x10848cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x108490: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x108490u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x108494: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x108494u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x108498: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x108498u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x10849c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x10849cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x1084a0: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x1084a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x1084a4: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1084a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1084a8: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x1084a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x1084ac: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x1084acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x1084b0: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x1084b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x1084b4: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x1084b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x1084b8: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x1084b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x1084bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1084BCu;
    {
        const bool branch_taken_0x1084bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084BCu;
        // 0x1084c0: 0xacc0007c  sw          $zero, 0x7C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084bc) {
            ctx->pc = 0x1084D0u;
            goto label_1084d0;
        }
    }
    ctx->pc = 0x1084C4u;
    // 0x1084c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1084c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1084c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1084C8u;
    {
        const bool branch_taken_0x1084c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084C8u;
        // 0x1084cc: 0xa4c20008  sh          $v0, 0x8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084c8) {
            ctx->pc = 0x1084D4u;
            goto label_1084d4;
        }
    }
    ctx->pc = 0x1084D0u;
label_1084d0:
    // 0x1084d0: 0xa4c00008  sh          $zero, 0x8($a2)
    ctx->pc = 0x1084d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 0));
label_1084d4:
    // 0x1084d4: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x1084d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_1084d8:
    // 0x1084d8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1084d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x1084dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1084DCu;
    {
        const bool branch_taken_0x1084dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084DCu;
        // 0x1084e0: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084dc) {
            ctx->pc = 0x1084F8u;
            goto label_1084f8;
        }
    }
    ctx->pc = 0x1084E4u;
    // 0x1084e4: 0x0  nop
    ctx->pc = 0x1084e4u;
    // NOP
label_1084e8:
    // 0x1084e8: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1084e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_1084ec:
    // 0x1084ec: 0x2232024  and         $a0, $s1, $v1
    ctx->pc = 0x1084ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x1084f0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1084F0u;
    {
        const bool branch_taken_0x1084f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1084F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084F0u;
        // 0x1084f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084f0) {
            ctx->pc = 0x1084FCu;
            goto label_1084fc;
        }
    }
    ctx->pc = 0x1084F8u;
label_1084f8:
    // 0x1084f8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1084f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1084fc:
    // 0x1084fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1084fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108500: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108508: 0x3e00008  jr          $ra
    ctx->pc = 0x108508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108508u;
        // 0x10850c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108510u;
}
