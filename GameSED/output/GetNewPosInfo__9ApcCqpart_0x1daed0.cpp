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

// Function: GetNewPosInfo__9ApcCqpart
// Address: 0x1daed0 - 0x1daf28
void GetNewPosInfo__9ApcCqpart_0x1daed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNewPosInfo__9ApcCqpart_0x1daed0");
#endif

    switch (ctx->pc) {
        case 0x1daf14u: goto label_1daf14;
        default: break;
    }

    ctx->pc = 0x1daed0u;

    // 0x1daed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1daed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1daed4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1daed4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1daed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1daedc: 0x24670ccc  addiu       $a3, $v1, 0xCCC
    ctx->pc = 0x1daedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3276));
    // 0x1daee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1daee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1daee4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1daee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1daee8: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x1daee8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1daeec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1daeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1daef0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1daef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1daef4: 0x28460021  slti        $a2, $v0, 0x21
    ctx->pc = 0x1daef4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1daef8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1daef8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1daefc: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAEFCu;
    {
        const bool branch_taken_0x1daefc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEFCu;
        // 0x1daf00: 0x24700cd0  addiu       $s0, $v1, 0xCD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daefc) {
            ctx->pc = 0x1DAF14u;
            goto label_1daf14;
        }
    }
    ctx->pc = 0x1DAF04u;
    // 0x1daf04: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1daf04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1daf08: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x1daf08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1daf0c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DAF0Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF14u);
    ctx->pc = 0x1DAF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF0Cu;
    // 0x1daf10: 0x24a57270  addiu       $a1, $a1, 0x7270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DAF0Cu, 0x1DAF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF14u;
label_1daf14:
    // 0x1daf14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1daf14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1daf18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daf1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1daf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1daf20: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF20u;
        // 0x1daf24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAF28u;
}
