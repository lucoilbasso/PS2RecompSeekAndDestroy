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

// Function: entry_00136c58
// Address: 0x136c58 - 0x136cac
void entry_00136c58_0x136c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136c58_0x136c58");
#endif

    switch (ctx->pc) {
        case 0x136c64u: goto label_136c64;
        case 0x136ca8u: goto label_136ca8;
        default: break;
    }

    ctx->pc = 0x136c58u;

    // 0x136c58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x136c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c5c: 0xc04ca86  jal         func_132A18
    ctx->pc = 0x136C5Cu;
    SET_GPR_U32(ctx, 31, 0x136C64u);
    ctx->pc = 0x136C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C5Cu;
    // 0x136c60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x136C5Cu, 0x136C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C64u;
label_136c64:
    // 0x136c64: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x136c64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136c68: 0x10e00029  beqz        $a3, . + 4 + (0x29 << 2)
    ctx->pc = 0x136C68u;
    {
        const bool branch_taken_0x136c68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C68u;
        // 0x136c6c: 0x24030118  addiu       $v1, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c68) {
            ctx->pc = 0x136D10u;
            return;
        }
    }
    ctx->pc = 0x136C70u;
    // 0x136c70: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x136c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x136c74: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x136c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x136c78: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x136C78u;
    {
        const bool branch_taken_0x136c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x136C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C78u;
        // 0x136c7c: 0x3c060025  lui         $a2, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c78) {
            ctx->pc = 0x136CD0u;
            return;
        }
    }
    ctx->pc = 0x136C80u;
    // 0x136c80: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x136c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c84: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x136c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x136c88: 0x4a20008  bltzl       $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x136C88u;
    {
        const bool branch_taken_0x136c88 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x136c88) {
            ctx->pc = 0x136C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136C88u;
            // 0x136c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136CACu;
            return;
        }
    }
    ctx->pc = 0x136C90u;
    // 0x136c90: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x136c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x136c94: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x136C94u;
    {
        const bool branch_taken_0x136c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c94) {
            ctx->pc = 0x136C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136C94u;
            // 0x136c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136CACu;
            return;
        }
    }
    ctx->pc = 0x136C9Cu;
    // 0x136c9c: 0x8e0801b4  lw          $t0, 0x1B4($s0)
    ctx->pc = 0x136c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x136ca0: 0xc041228  jal         func_1048A0
    ctx->pc = 0x136CA0u;
    SET_GPR_U32(ctx, 31, 0x136CA8u);
    ctx->pc = 0x136CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CA0u;
    // 0x136ca4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x136CA0u, 0x136CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CA8u;
label_136ca8:
    // 0x136ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x136cacu;
}
