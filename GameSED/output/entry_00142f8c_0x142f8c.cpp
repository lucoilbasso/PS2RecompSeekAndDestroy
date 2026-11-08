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

// Function: entry_00142f8c
// Address: 0x142f8c - 0x142fb8
void entry_00142f8c_0x142f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142f8c_0x142f8c");
#endif

    ctx->pc = 0x142f8cu;

    // 0x142f8c: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x142F8Cu;
    {
        const bool branch_taken_0x142f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F8Cu;
        // 0x142f90: 0xae300320  sw          $s0, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f8c) {
            ctx->pc = 0x143088u;
            return;
        }
    }
    ctx->pc = 0x142F94u;
    // 0x142f94: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x142f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x142f98: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x142f98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f9c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x142f9cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142fa0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x142fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x142fa4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x142fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x142fa8: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x142fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x142fac: 0x1880003b  blez        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x142FACu;
    {
        const bool branch_taken_0x142fac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x142FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FACu;
        // 0x142fb0: 0xad4447e0  sw          $a0, 0x47E0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 18400), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142fac) {
            ctx->pc = 0x14309Cu;
            return;
        }
    }
    ctx->pc = 0x142FB4u;
    // 0x142fb4: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x142fb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x142fb8u;
}
