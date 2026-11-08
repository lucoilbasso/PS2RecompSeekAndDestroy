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

// Function: __pack_d
// Address: 0x1ce540 - 0x1ce618
void ps2___pack_d_0x1ce540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_d_0x1ce540");
#endif

    ctx->pc = 0x1ce540u;

    // 0x1ce540: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ce540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ce544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce548: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x1ce548u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ce54c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1ce54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ce550: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE550u;
    {
        const bool branch_taken_0x1ce550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE550u;
        // 0x1ce554: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce550) {
            ctx->pc = 0x1CE570u;
            goto label_1ce570;
        }
    }
    ctx->pc = 0x1CE558u;
    // 0x1ce558: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ce558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ce55c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1ce55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1ce560: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x1ce560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1ce564: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1CE564u;
    {
        const bool branch_taken_0x1ce564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE564u;
        // 0x1ce568: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce564) {
            ctx->pc = 0x1CE5BCu;
            goto label_1ce5bc;
        }
    }
    ctx->pc = 0x1CE56Cu;
    // 0x1ce56c: 0x0  nop
    ctx->pc = 0x1ce56cu;
    // NOP
label_1ce570:
    // 0x1ce570: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x1ce570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1ce574: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CE574u;
    {
        const bool branch_taken_0x1ce574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce574) {
            ctx->pc = 0x1CE578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE574u;
            // 0x1ce578: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE5B0u;
            goto label_1ce5b0;
        }
    }
    ctx->pc = 0x1CE57Cu;
    // 0x1ce57c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1ce57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1ce580: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CE580u;
    {
        const bool branch_taken_0x1ce580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce580) {
            ctx->pc = 0x1CE584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE580u;
            // 0x1ce584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE5BCu;
            goto label_1ce5bc;
        }
    }
    ctx->pc = 0x1CE588u;
    // 0x1ce588: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE588u;
    {
        const bool branch_taken_0x1ce588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce588) {
            ctx->pc = 0x1CE5BCu;
            goto label_1ce5bc;
        }
    }
    ctx->pc = 0x1CE590u;
    // 0x1ce590: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1ce590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ce594: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x1ce594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x1ce598: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE598u;
    {
        const bool branch_taken_0x1ce598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce598) {
            ctx->pc = 0x1CE59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE598u;
            // 0x1ce59c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE5BCu;
            goto label_1ce5bc;
        }
    }
    ctx->pc = 0x1CE5A0u;
    // 0x1ce5a0: 0x28820400  slti        $v0, $a0, 0x400
    ctx->pc = 0x1ce5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1ce5a4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE5A4u;
    {
        const bool branch_taken_0x1ce5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce5a4) {
            ctx->pc = 0x1CE5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE5A4u;
            // 0x1ce5a8: 0x248703ff  addiu       $a3, $a0, 0x3FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE5B8u;
            goto label_1ce5b8;
        }
    }
    ctx->pc = 0x1CE5ACu;
    // 0x1ce5ac: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x1ce5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_1ce5b0:
    // 0x1ce5b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE5B0u;
    {
        const bool branch_taken_0x1ce5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5B0u;
        // 0x1ce5b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce5b0) {
            ctx->pc = 0x1CE5BCu;
            goto label_1ce5bc;
        }
    }
    ctx->pc = 0x1CE5B8u;
label_1ce5b8:
    // 0x1ce5b8: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x1ce5b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_1ce5bc:
    // 0x1ce5bc: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x1ce5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x1ce5c0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ce5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ce5c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce5c8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1ce5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1ce5cc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1ce5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1ce5d0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1ce5d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ce5d4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ce5d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1ce5d8: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x1ce5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x1ce5dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ce5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ce5e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ce5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ce5e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ce5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ce5e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ce5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ce5ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ce5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ce5f0: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x1ce5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x1ce5f4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1ce5f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1ce5f8: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x1ce5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x1ce5fc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ce5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce600: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x1ce600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x1ce604: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ce604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ce608: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x1ce608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x1ce60c: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1ce60cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1ce610: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE610u;
        // 0x1ce614: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE618u;
}
