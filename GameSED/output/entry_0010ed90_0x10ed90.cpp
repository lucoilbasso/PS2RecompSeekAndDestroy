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

// Function: entry_0010ed90
// Address: 0x10ed90 - 0x10edb0
void entry_0010ed90_0x10ed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ed90_0x10ed90");
#endif

    ctx->pc = 0x10ed90u;

    // 0x10ed90: 0x1a40005b  blez        $s2, . + 4 + (0x5B << 2)
    ctx->pc = 0x10ED90u;
    {
        const bool branch_taken_0x10ed90 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x10ed90) {
            ctx->pc = 0x10EF00u;
            return;
        }
    }
    ctx->pc = 0x10ED98u;
    // 0x10ed98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ed98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ed9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10ed9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10eda0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eda4: 0xc7818060  lwc1        $f1, -0x7FA0($gp)
    ctx->pc = 0x10eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10eda8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10eda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10edac: 0x0  nop
    ctx->pc = 0x10edacu;
    // NOP
    ctx->pc = 0x10edb0u;
}
