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

// Function: entry_00140e88
// Address: 0x140e88 - 0x140eac
void entry_00140e88_0x140e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140e88_0x140e88");
#endif

    ctx->pc = 0x140e88u;

    // 0x140e88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x140e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x140e8c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x140e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x140e90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x140e90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140e94: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x140e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x140e98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x140e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140e9c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x140e9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x140ea0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x140ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x140EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EA4u;
        // 0x140ea8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140EACu;
}
