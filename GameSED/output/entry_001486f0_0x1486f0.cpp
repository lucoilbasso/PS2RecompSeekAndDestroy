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

// Function: entry_001486f0
// Address: 0x1486f0 - 0x148730
void entry_001486f0_0x1486f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001486f0_0x1486f0");
#endif

    ctx->pc = 0x1486f0u;

    // 0x1486f0: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x1486f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1486f4: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x1486f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1486f8: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x1486f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1486fc: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x1486fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x148700: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x148700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x148704: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x148704u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x148708: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x148708u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14870c: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x14870cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x148710: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x148710u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x148714: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x148714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x148718: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x148718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14871c: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x14871cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x148720: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x148720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x148724: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x148724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x148728: 0x3e00008  jr          $ra
    ctx->pc = 0x148728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148728u;
        // 0x14872c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148730u;
}
