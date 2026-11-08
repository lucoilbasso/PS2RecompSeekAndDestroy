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

// Function: entry_00141e6c
// Address: 0x141e6c - 0x141e98
void entry_00141e6c_0x141e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141e6c_0x141e6c");
#endif

    switch (ctx->pc) {
        case 0x141e78u: goto label_141e78;
        default: break;
    }

    ctx->pc = 0x141e6cu;

    // 0x141e6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x141e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x141e70: 0xc04fce4  jal         func_13F390
    ctx->pc = 0x141E70u;
    SET_GPR_U32(ctx, 31, 0x141E78u);
    ctx->pc = 0x141E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E70u;
    // 0x141e74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F390u, 0x141E70u, 0x141E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141E78u;
label_141e78:
    // 0x141e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x141e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e7c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x141e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x141e80: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x141e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x141e84: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x141e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x141e88: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x141E88u;
    {
        const bool branch_taken_0x141e88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x141E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E88u;
        // 0x141e8c: 0x51880a  movz        $s1, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e88) {
            ctx->pc = 0x141E98u;
            return;
        }
    }
    ctx->pc = 0x141E90u;
    // 0x141e90: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x141e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x141e94: 0x2452c490  addiu       $s2, $v0, -0x3B70
    ctx->pc = 0x141e94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952080));
    ctx->pc = 0x141e98u;
}
