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

// Function: entry_0012472c
// Address: 0x12472c - 0x124750
void entry_0012472c_0x12472c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012472c_0x12472c");
#endif

    switch (ctx->pc) {
        case 0x124734u: goto label_124734;
        default: break;
    }

    ctx->pc = 0x12472cu;

    // 0x12472c: 0xc047a1a  jal         func_11E868
    ctx->pc = 0x12472Cu;
    SET_GPR_U32(ctx, 31, 0x124734u);
    ctx->pc = 0x124730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12472Cu;
    // 0x124730: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E868u, 0x12472Cu, 0x124734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124734u;
label_124734:
    // 0x124734: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x124734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124738: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x124738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12473c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12473cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124740: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x124740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x124744: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x124744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x124748: 0x3e00008  jr          $ra
    ctx->pc = 0x124748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124748u;
        // 0x12474c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124750u;
}
