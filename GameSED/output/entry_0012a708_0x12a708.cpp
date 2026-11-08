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

// Function: entry_0012a708
// Address: 0x12a708 - 0x12a730
void entry_0012a708_0x12a708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a708_0x12a708");
#endif

    ctx->pc = 0x12a708u;

    // 0x12a708: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x12a708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x12a70c: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x12a70cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12a710: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x12a710u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x12a714: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x12a714u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12a718: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x12a718u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x12a71c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x12a71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12a720: 0xc7b50100  lwc1        $f21, 0x100($sp)
    ctx->pc = 0x12a720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12a724: 0xc7b400f8  lwc1        $f20, 0xF8($sp)
    ctx->pc = 0x12a724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12a728: 0x3e00008  jr          $ra
    ctx->pc = 0x12A728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A728u;
        // 0x12a72c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A730u;
}
