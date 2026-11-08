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

// Function: entry_001c1738
// Address: 0x1c1738 - 0x1c1768
void entry_001c1738_0x1c1738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1738_0x1c1738");
#endif

    ctx->pc = 0x1c1738u;

    // 0x1c1738: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1c1738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c173c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x1c173cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c1740: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x1c1740u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c1744: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1c1744u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c1748: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x1c1748u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c174c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1c174cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c1750: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x1c1750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c1754: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c1754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1758: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1c1758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c175c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c175cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1760: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1760u;
        // 0x1c1764: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1768u;
}
