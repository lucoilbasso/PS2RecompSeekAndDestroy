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

// Function: ApRscKeyGroupReset__Fv
// Address: 0x1144e0 - 0x114530
void ApRscKeyGroupReset__Fv_0x1144e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRscKeyGroupReset__Fv_0x1144e0");
#endif

    switch (ctx->pc) {
        case 0x114508u: goto label_114508;
        default: break;
    }

    ctx->pc = 0x1144e0u;

    // 0x1144e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1144e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1144e4: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1144e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1144e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1144e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1144ec: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x1144ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x1144f0: 0x2610c058  addiu       $s0, $s0, -0x3FA8
    ctx->pc = 0x1144f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951000));
    // 0x1144f4: 0x24a5c020  addiu       $a1, $a1, -0x3FE0
    ctx->pc = 0x1144f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950944));
    // 0x1144f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1144f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1144fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x114500: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x114500u;
    SET_GPR_U32(ctx, 31, 0x114508u);
    ctx->pc = 0x114504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114500u;
    // 0x114504: 0x24060036  addiu       $a2, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x114500u, 0x114508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114508u;
label_114508:
    // 0x114508: 0x97838920  lhu         $v1, -0x76E0($gp)
    ctx->pc = 0x114508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x11450c: 0x97848924  lhu         $a0, -0x76DC($gp)
    ctx->pc = 0x11450cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x114510: 0x97828928  lhu         $v0, -0x76D8($gp)
    ctx->pc = 0x114510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x114514: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x114514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114518: 0xa6030028  sh          $v1, 0x28($s0)
    ctx->pc = 0x114518u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x11451c: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x11451cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x114520: 0xa604002a  sh          $a0, 0x2A($s0)
    ctx->pc = 0x114520u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x114524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114528: 0x3e00008  jr          $ra
    ctx->pc = 0x114528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114528u;
        // 0x11452c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114530u;
}
