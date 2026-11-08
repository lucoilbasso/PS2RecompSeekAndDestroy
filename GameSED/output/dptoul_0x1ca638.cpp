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

// Function: dptoul
// Address: 0x1ca638 - 0x1ca6d8
void dptoul_0x1ca638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoul_0x1ca638");
#endif

    switch (ctx->pc) {
        case 0x1ca650u: goto label_1ca650;
        default: break;
    }

    ctx->pc = 0x1ca638u;

    // 0x1ca638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ca638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ca63c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1ca63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1ca640: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ca640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ca644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ca644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ca648: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1CA648u;
    SET_GPR_U32(ctx, 31, 0x1CA650u);
    ctx->pc = 0x1CA64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA648u;
    // 0x1ca64c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1CA648u, 0x1CA650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA650u;
label_1ca650:
    // 0x1ca650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca654: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ca654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca658: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x1ca658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x1ca65c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA65Cu;
    {
        const bool branch_taken_0x1ca65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA65Cu;
        // 0x1ca660: 0x2c850002  sltiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca65c) {
            ctx->pc = 0x1CA6CCu;
            goto label_1ca6cc;
        }
    }
    ctx->pc = 0x1CA664u;
    // 0x1ca664: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CA664u;
    {
        const bool branch_taken_0x1ca664 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA664u;
        // 0x1ca668: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca664) {
            ctx->pc = 0x1CA6D0u;
            goto label_1ca6d0;
        }
    }
    ctx->pc = 0x1CA66Cu;
    // 0x1ca66c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1ca66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ca670: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CA670u;
    {
        const bool branch_taken_0x1ca670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA670u;
        // 0x1ca674: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca670) {
            ctx->pc = 0x1CA6D0u;
            goto label_1ca6d0;
        }
    }
    ctx->pc = 0x1CA678u;
    // 0x1ca678: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CA678u;
    {
        const bool branch_taken_0x1ca678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA678u;
        // 0x1ca67c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca678) {
            ctx->pc = 0x1CA6D0u;
            goto label_1ca6d0;
        }
    }
    ctx->pc = 0x1CA680u;
    // 0x1ca680: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1ca680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca688: 0x4800011  bltz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA688u;
    {
        const bool branch_taken_0x1ca688 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1CA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA688u;
        // 0x1ca68c: 0x28830020  slti        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca688) {
            ctx->pc = 0x1CA6D0u;
            goto label_1ca6d0;
        }
    }
    ctx->pc = 0x1CA690u;
    // 0x1ca690: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CA690u;
    {
        const bool branch_taken_0x1ca690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA690u;
        // 0x1ca694: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca690) {
            ctx->pc = 0x1CA6D0u;
            goto label_1ca6d0;
        }
    }
    ctx->pc = 0x1CA698u;
    // 0x1ca698: 0x2882003d  slti        $v0, $a0, 0x3D
    ctx->pc = 0x1ca698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1ca69c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA69Cu;
    {
        const bool branch_taken_0x1ca69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA69Cu;
        // 0x1ca6a0: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca69c) {
            ctx->pc = 0x1CA6B8u;
            goto label_1ca6b8;
        }
    }
    ctx->pc = 0x1CA6A4u;
    // 0x1ca6a4: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1ca6a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca6a8: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x1ca6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x1ca6ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA6ACu;
    {
        const bool branch_taken_0x1ca6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6ACu;
        // 0x1ca6b0: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca6ac) {
            ctx->pc = 0x1CA6C4u;
            goto label_1ca6c4;
        }
    }
    ctx->pc = 0x1CA6B4u;
    // 0x1ca6b4: 0x0  nop
    ctx->pc = 0x1ca6b4u;
    // NOP
label_1ca6b8:
    // 0x1ca6b8: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1ca6b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca6bc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ca6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ca6c0: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1ca6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_1ca6c4:
    // 0x1ca6c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ca6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ca6c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ca6c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1ca6cc:
    // 0x1ca6cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ca6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ca6d0:
    // 0x1ca6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA6D0u;
        // 0x1ca6d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA6D8u;
}
