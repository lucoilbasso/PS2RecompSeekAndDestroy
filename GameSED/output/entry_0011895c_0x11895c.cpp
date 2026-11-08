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

// Function: entry_0011895c
// Address: 0x11895c - 0x11897c
void entry_0011895c_0x11895c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011895c_0x11895c");
#endif

    ctx->pc = 0x11895cu;

    // 0x11895c: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x11895cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x118960: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118964: 0xa6110ff0  sh          $s1, 0xFF0($s0)
    ctx->pc = 0x118964u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4080), (uint16_t)GPR_U32(ctx, 17));
    // 0x118968: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x118968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11896c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11896cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118970: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118974: 0x3e00008  jr          $ra
    ctx->pc = 0x118974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118974u;
        // 0x118978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11897Cu;
}
