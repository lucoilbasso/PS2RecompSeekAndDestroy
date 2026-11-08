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

// Function: entry_0011fce0
// Address: 0x11fce0 - 0x11fd00
void entry_0011fce0_0x11fce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fce0_0x11fce0");
#endif

    ctx->pc = 0x11fce0u;

    // 0x11fce0: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11FCE0u;
    {
        const bool branch_taken_0x11fce0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCE0u;
        // 0x11fce4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fce0) {
            ctx->pc = 0x11FD30u;
            return;
        }
    }
    ctx->pc = 0x11FCE8u;
    // 0x11fce8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11fce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11fcec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fcf0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x11fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11fcf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcf8: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x11fcf8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11fcfc: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x11fcfcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    ctx->pc = 0x11fd00u;
}
