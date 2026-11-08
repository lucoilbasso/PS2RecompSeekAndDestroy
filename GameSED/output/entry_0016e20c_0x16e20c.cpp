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

// Function: entry_0016e20c
// Address: 0x16e20c - 0x16e240
void entry_0016e20c_0x16e20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e20c_0x16e20c");
#endif

    ctx->pc = 0x16e20cu;

    // 0x16e20c: 0x10a0006a  beqz        $a1, . + 4 + (0x6A << 2)
    ctx->pc = 0x16E20Cu;
    {
        const bool branch_taken_0x16e20c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E20Cu;
        // 0x16e210: 0x24a30280  addiu       $v1, $a1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e20c) {
            ctx->pc = 0x16E3B8u;
            return;
        }
    }
    ctx->pc = 0x16E214u;
    // 0x16e214: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16e214u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e218: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x16e218u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e21c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16e21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x16e220: 0x8cd00690  lw          $s0, 0x690($a2)
    ctx->pc = 0x16e220u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1680)));
    // 0x16e224: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x16e224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x16e228: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x16e228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x16e22c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16e230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E230u;
    {
        const bool branch_taken_0x16e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E230u;
        // 0x16e234: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e230) {
            ctx->pc = 0x16E240u;
            return;
        }
    }
    ctx->pc = 0x16E238u;
    // 0x16e238: 0xc061920  jal         func_186480
    ctx->pc = 0x16E238u;
    SET_GPR_U32(ctx, 31, 0x16E240u);
    ctx->pc = 0x16E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E238u;
    // 0x16e23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16E238u, 0x16E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E240u;
}
