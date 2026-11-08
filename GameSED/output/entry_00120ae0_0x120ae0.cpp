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

// Function: entry_00120ae0
// Address: 0x120ae0 - 0x120b14
void entry_00120ae0_0x120ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120ae0_0x120ae0");
#endif

    ctx->pc = 0x120ae0u;

    // 0x120ae0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x120ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x120ae4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x120ae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120ae8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x120ae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x120aec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x120aecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120af0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x120af0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x120af4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x120af4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x120af8: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x120af8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x120afc: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x120afcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x120b00: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x120b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120b04: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x120b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x120b08: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x120b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x120B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B0Cu;
        // 0x120b10: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120B14u;
}
