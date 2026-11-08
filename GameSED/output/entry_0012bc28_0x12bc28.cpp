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

// Function: entry_0012bc28
// Address: 0x12bc28 - 0x12bc60
void entry_0012bc28_0x12bc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bc28_0x12bc28");
#endif

    ctx->pc = 0x12bc28u;

    // 0x12bc28: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x12bc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x12bc2c: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x12bc2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x12bc30: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x12bc30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x12bc34: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x12bc34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12bc38: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x12bc38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x12bc3c: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x12bc3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x12bc40: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x12bc40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x12bc44: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x12bc44u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x12bc48: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x12bc48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x12bc4c: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x12bc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x12bc50: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x12bc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12bc54: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x12bc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12bc58: 0x3e00008  jr          $ra
    ctx->pc = 0x12BC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC58u;
        // 0x12bc5c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BC60u;
}
