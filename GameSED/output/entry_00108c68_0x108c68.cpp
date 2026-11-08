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

// Function: entry_00108c68
// Address: 0x108c68 - 0x108c98
void entry_00108c68_0x108c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108c68_0x108c68");
#endif

    switch (ctx->pc) {
        case 0x108c90u: goto label_108c90;
        default: break;
    }

    ctx->pc = 0x108c68u;

    // 0x108c68: 0x1e20ffed  bgtz        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x108C68u;
    {
        const bool branch_taken_0x108c68 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x108C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C68u;
        // 0x108c6c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c68) {
            ctx->pc = 0x108C20u;
            return;
        }
    }
    ctx->pc = 0x108C70u;
    // 0x108c70: 0x8ec9000c  lw          $t1, 0xC($s6)
    ctx->pc = 0x108c70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x108c74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c78: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x108c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x108c7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c80: 0x8ec70004  lw          $a3, 0x4($s6)
    ctx->pc = 0x108c80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x108c84: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x108c84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x108c88: 0xc06948a  jal         func_1A5228
    ctx->pc = 0x108C88u;
    SET_GPR_U32(ctx, 31, 0x108C90u);
    ctx->pc = 0x108C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C88u;
    // 0x108c8c: 0x8ec80008  lw          $t0, 0x8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5228u, 0x108C88u, 0x108C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C90u;
label_108c90:
    // 0x108c90: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x108C90u;
    {
        const bool branch_taken_0x108c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C90u;
        // 0x108c94: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c90) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108C98u;
}
