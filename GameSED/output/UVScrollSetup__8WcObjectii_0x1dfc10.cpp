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

// Function: UVScrollSetup__8WcObjectii
// Address: 0x1dfc10 - 0x1dfc6c
void UVScrollSetup__8WcObjectii_0x1dfc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UVScrollSetup__8WcObjectii_0x1dfc10");
#endif

    switch (ctx->pc) {
        case 0x1dfc4cu: goto label_1dfc4c;
        default: break;
    }

    ctx->pc = 0x1dfc10u;

    // 0x1dfc10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfc14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfc18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dfc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dfc20: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x1dfc20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x1dfc24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dfc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dfc28: 0xa6050178  sh          $a1, 0x178($s0)
    ctx->pc = 0x1dfc28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 5));
    // 0x1dfc2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dfc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc30: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dfc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dfc34: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1dfc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1dfc38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DFC38u;
    {
        const bool branch_taken_0x1dfc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC38u;
        // 0x1dfc3c: 0xa606017a  sh          $a2, 0x17A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 378), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc38) {
            ctx->pc = 0x1DFC58u;
            goto label_1dfc58;
        }
    }
    ctx->pc = 0x1DFC40u;
    // 0x1dfc40: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1dfc40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1dfc44: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1DFC44u;
    SET_GPR_U32(ctx, 31, 0x1DFC4Cu);
    ctx->pc = 0x1DFC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC44u;
    // 0x1dfc48: 0x2484de38  addiu       $a0, $a0, -0x21C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1DFC44u, 0x1DFC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC4Cu;
label_1dfc4c:
    // 0x1dfc4c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dfc50: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1dfc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1dfc54: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1dfc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1dfc58:
    // 0x1dfc58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfc58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfc5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfc60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dfc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfc64: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC64u;
        // 0x1dfc68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFC6Cu;
}
