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

// Function: ftoi
// Address: 0x1b07a0 - 0x1b0830
void ftoi_0x1b07a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ftoi_0x1b07a0");
#endif

    ctx->pc = 0x1b07a0u;

    // 0x1b07a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b07a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b07a4: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x1b07a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x1b07a8: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x1b07a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x1b07ac: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x1b07acu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x1b07b0: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x1b07b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x1b07b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B07B4u;
    {
        const bool branch_taken_0x1b07b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07B4u;
        // 0x1b07b8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07b4) {
            ctx->pc = 0x1B07C4u;
            goto label_1b07c4;
        }
    }
    ctx->pc = 0x1B07BCu;
    // 0x1b07bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B07BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07BCu;
        // 0x1b07c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B07BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B07C4u;
label_1b07c4:
    // 0x1b07c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B07C4u;
    {
        const bool branch_taken_0x1b07c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07C4u;
        // 0x1b07c8: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07c4) {
            ctx->pc = 0x1B07D4u;
            goto label_1b07d4;
        }
    }
    ctx->pc = 0x1B07CCu;
    // 0x1b07cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B07CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07CCu;
        // 0x1b07d0: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B07CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B07D4u;
label_1b07d4:
    // 0x1b07d4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1b07d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b07d8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1b07d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1b07dc: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x1b07dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x1b07e0: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1B07E0u;
    {
        const bool branch_taken_0x1b07e0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B07E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07E0u;
        // 0x1b07e4: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07e0) {
            ctx->pc = 0x1B0818u;
            goto label_1b0818;
        }
    }
    ctx->pc = 0x1B07E8u;
    // 0x1b07e8: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x1b07e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x1b07ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b07f0: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x1b07f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x1b07f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b07f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b07f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b07f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b07fc: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x1b07fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x1b0800: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x1b0800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x1b0804: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0804u;
    {
        const bool branch_taken_0x1b0804 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0804) {
            ctx->pc = 0x1B0808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0804u;
            // 0x1b0808: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0824u;
            goto label_1b0824;
        }
    }
    ctx->pc = 0x1B080Cu;
    // 0x1b080c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x1b080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x1b0810: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0810u;
    {
        const bool branch_taken_0x1b0810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0810u;
        // 0x1b0814: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0810) {
            ctx->pc = 0x1B0824u;
            goto label_1b0824;
        }
    }
    ctx->pc = 0x1B0818u;
label_1b0818:
    // 0x1b0818: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1b0818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b081c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b081cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b0820: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x1b0820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_1b0824:
    // 0x1b0824: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1b0824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b0828: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0828u;
        // 0x1b082c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0830u;
}
