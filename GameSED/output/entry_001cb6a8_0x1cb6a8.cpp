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

// Function: entry_001cb6a8
// Address: 0x1cb6a8 - 0x1cb6f0
void entry_001cb6a8_0x1cb6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb6a8_0x1cb6a8");
#endif

    switch (ctx->pc) {
        case 0x1cb6c4u: goto label_1cb6c4;
        default: break;
    }

    ctx->pc = 0x1cb6a8u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1CB6ECu;
    // 0x1cb6ec: 0x0  nop
    ctx->pc = 0x1cb6ecu;
    // NOP
    ctx->pc = 0x1cb6f0u;
}
