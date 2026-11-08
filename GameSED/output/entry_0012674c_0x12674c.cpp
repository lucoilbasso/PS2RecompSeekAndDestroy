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

// Function: entry_0012674c
// Address: 0x12674c - 0x126780
void entry_0012674c_0x12674c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012674c_0x12674c");
#endif

    ctx->pc = 0x12674cu;

    // 0x12674c: 0x2a021324  slti        $v0, $s0, 0x1324
    ctx->pc = 0x12674cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4900) ? 1 : 0);
    // 0x126750: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x126750u;
    {
        const bool branch_taken_0x126750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126750) {
            ctx->pc = 0x126754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126750u;
            // 0x126754: 0x8e4301b0  lw          $v1, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1266B0u;
            return;
        }
    }
    ctx->pc = 0x126758u;
    // 0x126758: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x126758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12675c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x12675cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x126760: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x126760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126764: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x126764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x126768: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x126768u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12676c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x12676cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x126770: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x126770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x126774: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x126774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x126778: 0x3e00008  jr          $ra
    ctx->pc = 0x126778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126778u;
        // 0x12677c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126780u;
}
