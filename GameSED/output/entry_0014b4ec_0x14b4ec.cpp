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

// Function: entry_0014b4ec
// Address: 0x14b4ec - 0x14b510
void entry_0014b4ec_0x14b4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b4ec_0x14b4ec");
#endif

    ctx->pc = 0x14b4ecu;

    // 0x14b4ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14b4ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14b4f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14b4f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b4f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14b4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14b4f8: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x14b4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14b4fc: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x14b4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14b500: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x14b500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14b504: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x14b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14b508: 0x3e00008  jr          $ra
    ctx->pc = 0x14B508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B508u;
        // 0x14b50c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B510u;
}
