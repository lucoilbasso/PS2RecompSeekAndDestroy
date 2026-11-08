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

// Function: default
// Address: 0x1546b8 - 0x1546d0
void ps2_default_0x1546b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1546b8");
#endif

    ctx->pc = 0x1546b8u;

    // 0x1546b8: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1546B8u;
    {
        const bool branch_taken_0x1546b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546B8u;
        // 0x1546bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546b8) {
            ctx->pc = 0x1546ECu;
            return;
        }
    }
    ctx->pc = 0x1546C0u;
    // 0x1546c0: 0x56600003  bnel        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1546C0u;
    {
        const bool branch_taken_0x1546c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1546c0) {
            ctx->pc = 0x1546C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1546C0u;
            // 0x1546c4: 0xc6400000  lwc1        $f0, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1546D0u;
            return;
        }
    }
    ctx->pc = 0x1546C8u;
    // 0x1546c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1546C8u;
    {
        const bool branch_taken_0x1546c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546C8u;
        // 0x1546cc: 0xe6540000  swc1        $f20, 0x0($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546c8) {
            ctx->pc = 0x1546ECu;
            return;
        }
    }
    ctx->pc = 0x1546D0u;
}
