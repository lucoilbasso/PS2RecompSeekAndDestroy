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

// Function: entry_00190188
// Address: 0x190188 - 0x1901b4
void entry_00190188_0x190188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190188_0x190188");
#endif

    ctx->pc = 0x190188u;

    // 0x190188: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x190188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x19018c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x19018cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x190190: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x190190u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x190194: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x190194u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x190198: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x190198u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x19019c: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x19019cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1901a0: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x1901a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1901a4: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x1901a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1901a8: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x1901a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1901ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1901ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1901B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901ACu;
        // 0x1901b0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1901ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1901B4u;
}
