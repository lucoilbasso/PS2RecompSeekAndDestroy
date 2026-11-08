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

// Function: entry_0016d058
// Address: 0x16d058 - 0x16d07c
void entry_0016d058_0x16d058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d058_0x16d058");
#endif

    ctx->pc = 0x16d058u;

    // 0x16d058: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x16d058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16d05c: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x16d05cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16d060: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x16d060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16d064: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x16d064u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16d068: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x16d068u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16d06c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x16d06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16d070: 0xc7b400c8  lwc1        $f20, 0xC8($sp)
    ctx->pc = 0x16d070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16d074: 0x3e00008  jr          $ra
    ctx->pc = 0x16D074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D074u;
        // 0x16d078: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D07Cu;
}
