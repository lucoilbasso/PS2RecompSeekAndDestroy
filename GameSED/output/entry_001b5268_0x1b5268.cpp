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

// Function: entry_001b5268
// Address: 0x1b5268 - 0x1b5298
void entry_001b5268_0x1b5268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5268_0x1b5268");
#endif

    ctx->pc = 0x1b5268u;

    // 0x1b5268: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1b5268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b526c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1b526cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b5270: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1b5270u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b5274: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b5274u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5278: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b5278u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b527c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b527cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b5280: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b5280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b5284: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b5284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b5288: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b5288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b528c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b528cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5290: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5290u;
        // 0x1b5294: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5298u;
}
