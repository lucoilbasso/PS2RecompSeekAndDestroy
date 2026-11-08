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

// Function: VColorJobRegist__8WcObject
// Address: 0x1954c0 - 0x195514
void VColorJobRegist__8WcObject_0x1954c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VColorJobRegist__8WcObject_0x1954c0");
#endif

    switch (ctx->pc) {
        case 0x1954f4u: goto label_1954f4;
        default: break;
    }

    ctx->pc = 0x1954c0u;

    // 0x1954c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1954c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1954c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1954c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1954c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1954c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1954cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1954ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1954d0: 0x24112000  addiu       $s1, $zero, 0x2000
    ctx->pc = 0x1954d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1954d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1954d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1954d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1954d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1954dc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1954dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1954e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1954E0u;
    {
        const bool branch_taken_0x1954e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1954E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954E0u;
        // 0x1954e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954e0) {
            ctx->pc = 0x195500u;
            goto label_195500;
        }
    }
    ctx->pc = 0x1954E8u;
    // 0x1954e8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x1954e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x1954ec: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1954ECu;
    SET_GPR_U32(ctx, 31, 0x1954F4u);
    ctx->pc = 0x1954F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1954ECu;
    // 0x1954f0: 0x2484de68  addiu       $a0, $a0, -0x2198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1954ECu, 0x1954F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1954F4u;
label_1954f4:
    // 0x1954f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1954f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1954f8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1954f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1954fc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1954fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_195500:
    // 0x195500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x195504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19550c: 0x3e00008  jr          $ra
    ctx->pc = 0x19550Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19550Cu;
        // 0x195510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19550Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195514u;
}
