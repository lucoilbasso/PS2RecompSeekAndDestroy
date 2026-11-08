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

// Function: entry_00159f1c
// Address: 0x159f1c - 0x159f5c
void entry_00159f1c_0x159f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159f1c_0x159f1c");
#endif

    switch (ctx->pc) {
        case 0x159f3cu: goto label_159f3c;
        default: break;
    }

    ctx->pc = 0x159f1cu;

label_159f1c:
    // 0x159f1c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x159f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_159f20:
    // 0x159f20: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x159f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_159f24:
    // 0x159f24: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x159f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_159f28:
    // 0x159f28: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x159f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_159f2c:
    // 0x159f2c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x159f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_159f30:
    // 0x159f30: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x159f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_159f34:
    // 0x159f34: 0x60f809  jalr        $v1
label_159f38:
    if (ctx->pc == 0x159F38u) {
        ctx->pc = 0x159F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F34u;
        // 0x159f38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F3Cu;
        goto label_159f3c;
    }
    ctx->pc = 0x159F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x159F3Cu);
        ctx->pc = 0x159F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F34u;
        // 0x159f38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159F34u, 0x159F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159F3Cu;
label_159f3c:
    // 0x159f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159f40:
    // 0x159f40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x159f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_159f44:
    // 0x159f44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x159f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_159f48:
    // 0x159f48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x159f48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_159f4c:
    // 0x159f4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x159f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_159f50:
    // 0x159f50: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x159f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_159f54:
    // 0x159f54: 0x3e00008  jr          $ra
label_159f58:
    if (ctx->pc == 0x159F58u) {
        ctx->pc = 0x159F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F54u;
        // 0x159f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F5Cu;
        goto label_fallthrough_0x159f54;
    }
    ctx->pc = 0x159F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F54u;
        // 0x159f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x159f54:
    ctx->pc = 0x159F5Cu;
}
