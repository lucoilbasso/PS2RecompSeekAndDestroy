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

// Function: entry_00142390
// Address: 0x142390 - 0x1423d0
void entry_00142390_0x142390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142390_0x142390");
#endif

    switch (ctx->pc) {
        case 0x1423a4u: goto label_1423a4;
        default: break;
    }

    ctx->pc = 0x142390u;

    // 0x142390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142394: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x142394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x142398: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x142398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14239c: 0xc061a46  jal         func_186918
    ctx->pc = 0x14239Cu;
    SET_GPR_U32(ctx, 31, 0x1423A4u);
    ctx->pc = 0x1423A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14239Cu;
    // 0x1423a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x14239Cu, 0x1423A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1423A4u;
label_1423a4:
    // 0x1423a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1423a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1423a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1423a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1423ac: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x1423acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x1423b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1423B0u;
    {
        const bool branch_taken_0x1423b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423B0u;
        // 0x1423b4: 0x2444ee48  addiu       $a0, $v0, -0x11B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423b0) {
            ctx->pc = 0x1423D0u;
            return;
        }
    }
    ctx->pc = 0x1423B8u;
    // 0x1423b8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1423b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1423bc: 0x54440005  bnel        $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1423BCu;
    {
        const bool branch_taken_0x1423bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1423bc) {
            ctx->pc = 0x1423C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1423BCu;
            // 0x1423c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1423D4u;
            return;
        }
    }
    ctx->pc = 0x1423C4u;
    // 0x1423c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1423C4u;
    {
        const bool branch_taken_0x1423c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1423C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423C4u;
        // 0x1423c8: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423c4) {
            ctx->pc = 0x1423D4u;
            return;
        }
    }
    ctx->pc = 0x1423CCu;
    // 0x1423cc: 0x0  nop
    ctx->pc = 0x1423ccu;
    // NOP
    ctx->pc = 0x1423d0u;
}
