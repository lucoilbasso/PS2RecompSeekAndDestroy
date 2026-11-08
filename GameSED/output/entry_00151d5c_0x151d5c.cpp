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

// Function: entry_00151d5c
// Address: 0x151d5c - 0x151d7c
void entry_00151d5c_0x151d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151d5c_0x151d5c");
#endif

    ctx->pc = 0x151d5cu;

    // 0x151d5c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x151d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151d60: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x151d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x151d64: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x151d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151d68: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x151d68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x151d6c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x151d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151d70: 0xc7b400c8  lwc1        $f20, 0xC8($sp)
    ctx->pc = 0x151d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x151d74: 0x3e00008  jr          $ra
    ctx->pc = 0x151D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D74u;
        // 0x151d78: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151D7Cu;
}
