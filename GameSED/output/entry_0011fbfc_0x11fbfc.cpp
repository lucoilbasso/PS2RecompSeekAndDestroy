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

// Function: entry_0011fbfc
// Address: 0x11fbfc - 0x11fc34
void entry_0011fbfc_0x11fbfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fbfc_0x11fbfc");
#endif

    ctx->pc = 0x11fbfcu;

    // 0x11fbfc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11fbfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11fc00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11fc00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fc04: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x11fc04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11fc08: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x11fc08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fc0c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11fc0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11fc10: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x11fc10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fc14: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x11fc14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11fc18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11fc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11fc1c: 0xc7b70070  lwc1        $f23, 0x70($sp)
    ctx->pc = 0x11fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x11fc20: 0xc7b60068  lwc1        $f22, 0x68($sp)
    ctx->pc = 0x11fc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11fc24: 0xc7b50060  lwc1        $f21, 0x60($sp)
    ctx->pc = 0x11fc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11fc28: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x11fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11fc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC2Cu;
        // 0x11fc30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC34u;
}
