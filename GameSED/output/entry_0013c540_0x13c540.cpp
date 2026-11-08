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

// Function: entry_0013c540
// Address: 0x13c540 - 0x13c55c
void entry_0013c540_0x13c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c540_0x13c540");
#endif

    ctx->pc = 0x13c540u;

    // 0x13c540: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x13c540u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13c544: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x13c544u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13c548: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x13c548u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13c54c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x13c54cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13c550: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x13c550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13c554: 0x3e00008  jr          $ra
    ctx->pc = 0x13C554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C554u;
        // 0x13c558: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C55Cu;
}
