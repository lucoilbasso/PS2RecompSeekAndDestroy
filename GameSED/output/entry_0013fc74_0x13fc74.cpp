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

// Function: entry_0013fc74
// Address: 0x13fc74 - 0x13fcb0
void entry_0013fc74_0x13fc74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fc74_0x13fc74");
#endif

    switch (ctx->pc) {
        case 0x13fc88u: goto label_13fc88;
        default: break;
    }

    ctx->pc = 0x13fc74u;

    // 0x13fc74: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x13fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x13fc78: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13fc7c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13fc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x13fc80: 0xc061a46  jal         func_186918
    ctx->pc = 0x13FC80u;
    SET_GPR_U32(ctx, 31, 0x13FC88u);
    ctx->pc = 0x13FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FC80u;
    // 0x13fc84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13FC80u, 0x13FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC88u;
label_13fc88:
    // 0x13fc88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc8c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FC8Cu;
    {
        const bool branch_taken_0x13fc8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FC8Cu;
        // 0x13fc90: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc8c) {
            ctx->pc = 0x13FCB0u;
            return;
        }
    }
    ctx->pc = 0x13FC94u;
    // 0x13fc94: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13fc98: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13fc9c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FC9Cu;
    {
        const bool branch_taken_0x13fc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fc9c) {
            ctx->pc = 0x13FCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FC9Cu;
            // 0x13fca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FCB4u;
            return;
        }
    }
    ctx->pc = 0x13FCA4u;
    // 0x13fca4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13FCA4u;
    {
        const bool branch_taken_0x13fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FCA4u;
        // 0x13fca8: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fca4) {
            ctx->pc = 0x13FCB4u;
            return;
        }
    }
    ctx->pc = 0x13FCACu;
    // 0x13fcac: 0x0  nop
    ctx->pc = 0x13fcacu;
    // NOP
    ctx->pc = 0x13fcb0u;
}
