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

// Function: entry_0010c680
// Address: 0x10c680 - 0x10c6a0
void entry_0010c680_0x10c680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c680_0x10c680");
#endif

    ctx->pc = 0x10c680u;

    // 0x10c680: 0x96020200  lhu         $v0, 0x200($s0)
    ctx->pc = 0x10c680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x10c684: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c688: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10c688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10c68c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c690: 0xa6020200  sh          $v0, 0x200($s0)
    ctx->pc = 0x10c690u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
    // 0x10c694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c698: 0x3e00008  jr          $ra
    ctx->pc = 0x10C698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C698u;
        // 0x10c69c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C6A0u;
}
