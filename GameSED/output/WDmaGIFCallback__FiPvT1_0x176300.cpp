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

// Function: WDmaGIFCallback__FiPvT1
// Address: 0x176300 - 0x17636c
void WDmaGIFCallback__FiPvT1_0x176300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WDmaGIFCallback__FiPvT1_0x176300");
#endif

    switch (ctx->pc) {
        case 0x176314u: goto label_176314;
        case 0x176334u: goto label_176334;
        case 0x176340u: goto label_176340;
        case 0x176354u: goto label_176354;
        default: break;
    }

    ctx->pc = 0x176300u;

    // 0x176300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176304: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x176304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x176308: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17630c: 0xc06bd38  jal         func_1AF4E0
    ctx->pc = 0x17630Cu;
    SET_GPR_U32(ctx, 31, 0x176314u);
    ctx->pc = 0x176310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17630Cu;
    // 0x176310: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4E0u, 0x17630Cu, 0x176314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176314u;
label_176314:
    // 0x176314: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x176314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176318: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x176318u;
    {
        const bool branch_taken_0x176318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176318u;
        // 0x17631c: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176318) {
            ctx->pc = 0x176338u;
            goto label_176338;
        }
    }
    ctx->pc = 0x176320u;
    // 0x176320: 0x8f828c70  lw          $v0, -0x7390($gp)
    ctx->pc = 0x176320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937712)));
    // 0x176324: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176324u;
    {
        const bool branch_taken_0x176324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176324) {
            ctx->pc = 0x176338u;
            goto label_176338;
        }
    }
    ctx->pc = 0x17632Cu;
    // 0x17632c: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x17632Cu;
    SET_GPR_U32(ctx, 31, 0x176334u);
    ctx->pc = 0x176330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17632Cu;
    // 0x176330: 0x8f848c64  lw          $a0, -0x739C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x17632Cu, 0x176334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176334u;
label_176334:
    // 0x176334: 0x8f848c6c  lw          $a0, -0x7394($gp)
    ctx->pc = 0x176334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
label_176338:
    // 0x176338: 0xc06bd38  jal         func_1AF4E0
    ctx->pc = 0x176338u;
    SET_GPR_U32(ctx, 31, 0x176340u);
    ctx->pc = 0x17633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176338u;
    // 0x17633c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4E0u, 0x176338u, 0x176340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176340u;
label_176340:
    // 0x176340: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x176340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176344: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x176344u;
    {
        const bool branch_taken_0x176344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176344) {
            ctx->pc = 0x176354u;
            goto label_176354;
        }
    }
    ctx->pc = 0x17634Cu;
    // 0x17634c: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x17634Cu;
    SET_GPR_U32(ctx, 31, 0x176354u);
    ctx->pc = 0x176350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17634Cu;
    // 0x176350: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x17634Cu, 0x176354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176354u;
label_176354:
    // 0x176354: 0xf  sync
    ctx->pc = 0x176354u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x176358: 0x42000038  ei
    ctx->pc = 0x176358u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x17635c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17635cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x176360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176364: 0x3e00008  jr          $ra
    ctx->pc = 0x176364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176364u;
        // 0x176368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17636Cu;
}
