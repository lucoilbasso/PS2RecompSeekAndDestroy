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

// Function: SetupFileData__5WcToc
// Address: 0x1837d8 - 0x18382c
void SetupFileData__5WcToc_0x1837d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupFileData__5WcToc_0x1837d8");
#endif

    switch (ctx->pc) {
        case 0x183808u: goto label_183808;
        default: break;
    }

    ctx->pc = 0x1837d8u;

    // 0x1837d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1837d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1837dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1837dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1837e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1837e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1837e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1837e8: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x1837e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1837ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1837ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1837f0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1837f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1837f4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1837f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1837f8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1837F8u;
    {
        const bool branch_taken_0x1837f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1837f8) {
            ctx->pc = 0x1837FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1837F8u;
            // 0x1837fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18381Cu;
            goto label_18381c;
        }
    }
    ctx->pc = 0x183800u;
    // 0x183800: 0xc060d20  jal         func_183480
    ctx->pc = 0x183800u;
    SET_GPR_U32(ctx, 31, 0x183808u);
    ctx->pc = 0x183480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183480u, 0x183800u, 0x183808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183808u;
label_183808:
    // 0x183808: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x183808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18380c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x18380cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x183810: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x183810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x183814: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x183814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x183818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x183818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18381c:
    // 0x18381c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18381cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x183820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183824: 0x3e00008  jr          $ra
    ctx->pc = 0x183824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183824u;
        // 0x183828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18382Cu;
}
