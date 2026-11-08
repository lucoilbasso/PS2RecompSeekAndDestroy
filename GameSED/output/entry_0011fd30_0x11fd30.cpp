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

// Function: entry_0011fd30
// Address: 0x11fd30 - 0x11fd50
void entry_0011fd30_0x11fd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd30_0x11fd30");
#endif

    ctx->pc = 0x11fd30u;

    // 0x11fd30: 0x14c2fffd  bne         $a2, $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x11FD30u;
    {
        const bool branch_taken_0x11fd30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD30u;
        // 0x11fd34: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd30) {
            ctx->pc = 0x11FD28u;
            return;
        }
    }
    ctx->pc = 0x11FD38u;
    // 0x11fd38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11fd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11fd3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fd3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fd40: 0x24470790  addiu       $a3, $v0, 0x790
    ctx->pc = 0x11fd40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x11fd44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fd44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd48: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x11fd48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11fd4c: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x11fd4cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    ctx->pc = 0x11fd50u;
}
