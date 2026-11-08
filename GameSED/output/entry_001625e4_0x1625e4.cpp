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

// Function: entry_001625e4
// Address: 0x1625e4 - 0x162620
void entry_001625e4_0x1625e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001625e4_0x1625e4");
#endif

    ctx->pc = 0x1625e4u;

    // 0x1625e4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1625e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1625e8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1625e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1625ec: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1625ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1625f0: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1625f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1625f4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1625f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1625f8: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1625f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1625fc: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1625fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x162600: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x162600u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x162604: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x162604u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x162608: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x162608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16260c: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x16260cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x162610: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x162610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x162614: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x162614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x162618: 0x3e00008  jr          $ra
    ctx->pc = 0x162618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162618u;
        // 0x16261c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162620u;
}
