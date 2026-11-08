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

// Function: BMemPMgrAllocCurrent__FUiUi
// Address: 0x1a0218 - 0x1a029c
void BMemPMgrAllocCurrent__FUiUi_0x1a0218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrAllocCurrent__FUiUi_0x1a0218");
#endif

    switch (ctx->pc) {
        case 0x1a0254u: goto label_1a0254;
        case 0x1a0288u: goto label_1a0288;
        default: break;
    }

    ctx->pc = 0x1a0218u;

    // 0x1a0218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a021c: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1a021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1a0220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0224: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a0224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a022c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a022cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0234: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a0234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0238: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0238u;
    {
        const bool branch_taken_0x1a0238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0238u;
        // 0x1a023c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0238) {
            ctx->pc = 0x1A0248u;
            goto label_1a0248;
        }
    }
    ctx->pc = 0x1A0240u;
    // 0x1a0240: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a0240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a0244: 0x8c42f640  lw          $v0, -0x9C0($v0)
    ctx->pc = 0x1a0244u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x23F640u));
label_1a0248:
    // 0x1a0248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a0248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a024c: 0xc067d0e  jal         func_19F438
    ctx->pc = 0x1A024Cu;
    SET_GPR_U32(ctx, 31, 0x1A0254u);
    ctx->pc = 0x1A0250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A024Cu;
    // 0x1a0250: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F438u, 0x1A024Cu, 0x1A0254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0254u;
label_1a0254:
    // 0x1a0254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0258: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a0258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a025c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A025Cu;
    {
        const bool branch_taken_0x1a025c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A025Cu;
        // 0x1a0260: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a025c) {
            ctx->pc = 0x1A0288u;
            goto label_1a0288;
        }
    }
    ctx->pc = 0x1A0264u;
    // 0x1a0264: 0x8f858ddc  lw          $a1, -0x7224($gp)
    ctx->pc = 0x1a0264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x1a0268: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0268u;
    {
        const bool branch_taken_0x1a0268 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0268) {
            ctx->pc = 0x1A0280u;
            goto label_1a0280;
        }
    }
    ctx->pc = 0x1A0270u;
    // 0x1a0270: 0x8f858dd8  lw          $a1, -0x7228($gp)
    ctx->pc = 0x1a0270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1a0274: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0274u;
    {
        const bool branch_taken_0x1a0274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0274u;
        // 0x1a0278: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0274) {
            ctx->pc = 0x1A0280u;
            goto label_1a0280;
        }
    }
    ctx->pc = 0x1A027Cu;
    // 0x1a027c: 0x8c45f640  lw          $a1, -0x9C0($v0)
    ctx->pc = 0x1a027cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964800)));
label_1a0280:
    // 0x1a0280: 0xc067d0e  jal         func_19F438
    ctx->pc = 0x1A0280u;
    SET_GPR_U32(ctx, 31, 0x1A0288u);
    ctx->pc = 0x19F438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F438u, 0x1A0280u, 0x1A0288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0288u;
label_1a0288:
    // 0x1a0288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a028c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a028cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0294: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0294u;
        // 0x1a0298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A029Cu;
}
