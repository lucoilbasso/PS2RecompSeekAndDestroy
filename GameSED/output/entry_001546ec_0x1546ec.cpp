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

// Function: entry_001546ec
// Address: 0x1546ec - 0x15470c
void entry_001546ec_0x1546ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001546ec_0x1546ec");
#endif

    ctx->pc = 0x1546ecu;

    // 0x1546ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1546ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1546f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1546f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1546f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1546f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1546f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1546f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1546fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1546fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x154700: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x154700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x154704: 0x3e00008  jr          $ra
    ctx->pc = 0x154704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154704u;
        // 0x154708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15470Cu;
}
