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

// Function: entry_0018b40c
// Address: 0x18b40c - 0x18b428
void entry_0018b40c_0x18b40c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b40c_0x18b40c");
#endif

    ctx->pc = 0x18b40cu;

    // 0x18b40c: 0x96020200  lhu         $v0, 0x200($s0)
    ctx->pc = 0x18b40cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18b410: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18b410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18b414: 0x3042fff0  andi        $v0, $v0, 0xFFF0
    ctx->pc = 0x18b414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x18b418: 0xa6020200  sh          $v0, 0x200($s0)
    ctx->pc = 0x18b418u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
    // 0x18b41c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18b41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b420: 0x3e00008  jr          $ra
    ctx->pc = 0x18B420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B420u;
        // 0x18b424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B428u;
}
