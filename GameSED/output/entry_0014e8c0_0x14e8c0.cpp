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

// Function: entry_0014e8c0
// Address: 0x14e8c0 - 0x14e8fc
void entry_0014e8c0_0x14e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e8c0_0x14e8c0");
#endif

    switch (ctx->pc) {
        case 0x14e8c8u: goto label_14e8c8;
        case 0x14e8f0u: goto label_14e8f0;
        default: break;
    }

    ctx->pc = 0x14e8c0u;

    // 0x14e8c0: 0xc0463f4  jal         func_118FD0
    ctx->pc = 0x14E8C0u;
    SET_GPR_U32(ctx, 31, 0x14E8C8u);
    ctx->pc = 0x14E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8C0u;
    // 0x14e8c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FD0u, 0x14E8C0u, 0x14E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8C8u;
label_14e8c8:
    // 0x14e8c8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x14e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x14e8cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14E8CCu;
    {
        const bool branch_taken_0x14e8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E8CCu;
        // 0x14e8d0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8cc) {
            ctx->pc = 0x14E8FCu;
            return;
        }
    }
    ctx->pc = 0x14E8D4u;
    // 0x14e8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e8d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x14e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14e8dc: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x14e8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x14e8e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x14e8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14e8e4: 0x8e109a84  lw          $s0, -0x657C($s0)
    ctx->pc = 0x14e8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941316)));
    // 0x14e8e8: 0xc0532f2  jal         func_14CBC8
    ctx->pc = 0x14E8E8u;
    SET_GPR_U32(ctx, 31, 0x14E8F0u);
    ctx->pc = 0x14E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E8E8u;
    // 0x14e8ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC8u, 0x14E8E8u, 0x14E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8F0u;
label_14e8f0:
    // 0x14e8f0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x14e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14e8f4: 0xac62124c  sw          $v0, 0x124C($v1)
    ctx->pc = 0x14e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4684), GPR_U32(ctx, 2));
    // 0x14e8f8: 0xac701248  sw          $s0, 0x1248($v1)
    ctx->pc = 0x14e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4680), GPR_U32(ctx, 16));
    ctx->pc = 0x14e8fcu;
}
