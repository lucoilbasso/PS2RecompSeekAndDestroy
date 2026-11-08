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

// Function: entry_0013fce8
// Address: 0x13fce8 - 0x13fd28
void entry_0013fce8_0x13fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fce8_0x13fce8");
#endif

    switch (ctx->pc) {
        case 0x13fd04u: goto label_13fd04;
        default: break;
    }

    ctx->pc = 0x13fce8u;

    // 0x13fce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13fcec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13fcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fcf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13fcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13fcf4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13fcf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x13fcf8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13fcfc: 0xc061a46  jal         func_186918
    ctx->pc = 0x13FCFCu;
    SET_GPR_U32(ctx, 31, 0x13FD04u);
    ctx->pc = 0x13FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FCFCu;
    // 0x13fd00: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13FCFCu, 0x13FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD04u;
label_13fd04:
    // 0x13fd04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd08: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13FD08u;
    {
        const bool branch_taken_0x13fd08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD08u;
        // 0x13fd0c: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd08) {
            ctx->pc = 0x13FD28u;
            return;
        }
    }
    ctx->pc = 0x13FD10u;
    // 0x13fd10: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13fd14: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13fd18: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13FD18u;
    {
        const bool branch_taken_0x13fd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fd18) {
            ctx->pc = 0x13FD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FD18u;
            // 0x13fd1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FD2Cu;
            return;
        }
    }
    ctx->pc = 0x13FD20u;
    // 0x13fd20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13FD20u;
    {
        const bool branch_taken_0x13fd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FD20u;
        // 0x13fd24: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd20) {
            ctx->pc = 0x13FD2Cu;
            return;
        }
    }
    ctx->pc = 0x13FD28u;
}
