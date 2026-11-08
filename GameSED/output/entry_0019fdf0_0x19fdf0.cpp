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

// Function: entry_0019fdf0
// Address: 0x19fdf0 - 0x19fe20
void entry_0019fdf0_0x19fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fdf0_0x19fdf0");
#endif

    switch (ctx->pc) {
        case 0x19fdf8u: goto label_19fdf8;
        default: break;
    }

    ctx->pc = 0x19fdf0u;

    // 0x19fdf0: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x19FDF0u;
    SET_GPR_U32(ctx, 31, 0x19FDF8u);
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x19FDF0u, 0x19FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FDF8u;
label_19fdf8:
    // 0x19fdf8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x19fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x19fdfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19fdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19fe00: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x19fe00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x19fe04: 0x56000012  bnel        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x19FE04u;
    {
        const bool branch_taken_0x19fe04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fe04) {
            ctx->pc = 0x19FE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FE04u;
            // 0x19fe08: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FE50u;
            return;
        }
    }
    ctx->pc = 0x19FE0Cu;
    // 0x19fe0c: 0x3c100027  lui         $s0, 0x27
    ctx->pc = 0x19fe0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)39 << 16));
    // 0x19fe10: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x19fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x19fe14: 0x2610e120  addiu       $s0, $s0, -0x1EE0
    ctx->pc = 0x19fe14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x19fe18: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19FE18u;
    {
        const bool branch_taken_0x19fe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE18u;
        // 0x19fe1c: 0x24a58750  addiu       $a1, $a1, -0x78B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe18) {
            ctx->pc = 0x19FE74u;
            return;
        }
    }
    ctx->pc = 0x19FE20u;
}
