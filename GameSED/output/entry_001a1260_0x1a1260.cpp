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

// Function: entry_001a1260
// Address: 0x1a1260 - 0x1a1280
void entry_001a1260_0x1a1260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1260_0x1a1260");
#endif

    ctx->pc = 0x1a1260u;

    // 0x1a1260: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a1260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a1264: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a1264u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a1268: 0xac312c00  sw          $s1, 0x2C00($at)
    ctx->pc = 0x1a1268u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11264), GPR_U32(ctx, 17));
    // 0x1a126c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a126cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a1274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1278: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1278u;
        // 0x1a127c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1280u;
}
