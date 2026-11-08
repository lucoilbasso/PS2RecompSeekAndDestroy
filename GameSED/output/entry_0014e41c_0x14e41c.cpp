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

// Function: entry_0014e41c
// Address: 0x14e41c - 0x14e45c
void entry_0014e41c_0x14e41c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e41c_0x14e41c");
#endif

    switch (ctx->pc) {
        case 0x14e454u: goto label_14e454;
        default: break;
    }

    ctx->pc = 0x14e41cu;

    // 0x14e41c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14e41cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e420: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x14e420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x14e424: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x14e424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14e428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14e42c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14e42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14e430: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14e430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14e434: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x14e434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x14e438: 0xac5206a8  sw          $s2, 0x6A8($v0)
    ctx->pc = 0x14e438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 18));
    // 0x14e43c: 0x1243016c  beq         $s2, $v1, . + 4 + (0x16C << 2)
    ctx->pc = 0x14E43Cu;
    {
        const bool branch_taken_0x14e43c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x14E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E43Cu;
        // 0x14e440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e43c) {
            ctx->pc = 0x14E9F0u;
            return;
        }
    }
    ctx->pc = 0x14E444u;
    // 0x14e444: 0x56c00005  bnel        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E444u;
    {
        const bool branch_taken_0x14e444 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e444) {
            ctx->pc = 0x14E448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E444u;
            // 0x14e448: 0x8e220690  lw          $v0, 0x690($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E45Cu;
            return;
        }
    }
    ctx->pc = 0x14E44Cu;
    // 0x14e44c: 0xc04566c  jal         func_1159B0
    ctx->pc = 0x14E44Cu;
    SET_GPR_U32(ctx, 31, 0x14E454u);
    ctx->pc = 0x14E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E44Cu;
    // 0x14e450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159B0u, 0x14E44Cu, 0x14E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E454u;
label_14e454:
    // 0x14e454: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x14e454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e458: 0x8e220690  lw          $v0, 0x690($s1)
    ctx->pc = 0x14e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->pc = 0x14e45cu;
}
