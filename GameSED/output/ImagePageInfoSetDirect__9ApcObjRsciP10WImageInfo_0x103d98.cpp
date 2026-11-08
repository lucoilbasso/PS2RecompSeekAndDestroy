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

// Function: ImagePageInfoSetDirect__9ApcObjRsciP10WImageInfo
// Address: 0x103d98 - 0x103e7c
void ImagePageInfoSetDirect__9ApcObjRsciP10WImageInfo_0x103d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ImagePageInfoSetDirect__9ApcObjRsciP10WImageInfo_0x103d98");
#endif

    switch (ctx->pc) {
        case 0x103dd8u: goto label_103dd8;
        case 0x103e10u: goto label_103e10;
        case 0x103e20u: goto label_103e20;
        default: break;
    }

    ctx->pc = 0x103d98u;

    // 0x103d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103da0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x103da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103da8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x103da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x103dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x103db0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x103db0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103db4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x103db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x103db8: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x103db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x103dbc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x103dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x103dc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103DC0u;
    {
        const bool branch_taken_0x103dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DC0u;
        // 0x103dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dc0) {
            ctx->pc = 0x103DD8u;
            goto label_103dd8;
        }
    }
    ctx->pc = 0x103DC8u;
    // 0x103dc8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x103dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x103dcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dd0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x103DD0u;
    SET_GPR_U32(ctx, 31, 0x103DD8u);
    ctx->pc = 0x103DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DD0u;
    // 0x103dd4: 0x24a519c8  addiu       $a1, $a1, 0x19C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x103DD0u, 0x103DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DD8u;
label_103dd8:
    // 0x103dd8: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x103DD8u;
    {
        const bool branch_taken_0x103dd8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x103DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DD8u;
        // 0x103ddc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dd8) {
            ctx->pc = 0x103DF0u;
            goto label_103df0;
        }
    }
    ctx->pc = 0x103DE0u;
    // 0x103de0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x103de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x103de4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x103de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x103de8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x103DE8u;
    {
        const bool branch_taken_0x103de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103de8) {
            ctx->pc = 0x103DF4u;
            goto label_103df4;
        }
    }
    ctx->pc = 0x103DF0u;
label_103df0:
    // 0x103df0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x103df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103df4:
    // 0x103df4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x103DF4u;
    {
        const bool branch_taken_0x103df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DF4u;
        // 0x103df8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103df4) {
            ctx->pc = 0x103E10u;
            goto label_103e10;
        }
    }
    ctx->pc = 0x103DFCu;
    // 0x103dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e00: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x103e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x103e04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103e04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e08: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x103E08u;
    SET_GPR_U32(ctx, 31, 0x103E10u);
    ctx->pc = 0x103E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E08u;
    // 0x103e0c: 0x24a519c8  addiu       $a1, $a1, 0x19C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x103E08u, 0x103E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E10u;
label_103e10:
    // 0x103e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x103e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x103e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e18: 0xc04039c  jal         func_100E70
    ctx->pc = 0x103E18u;
    SET_GPR_U32(ctx, 31, 0x103E20u);
    ctx->pc = 0x103E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103E18u;
    // 0x103e1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100E70u, 0x103E18u, 0x103E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E20u;
label_103e20:
    // 0x103e20: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x103e20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103e24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x103e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x103e28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103e2c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x103e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x103e30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103e34: 0xde020008  ld          $v0, 0x8($s0)
    ctx->pc = 0x103e34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x103e38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x103e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103e3c: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x103e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x103e40: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x103e40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x103e44: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x103e44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x103e48: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x103e48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x103e4c: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x103e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x103e50: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x103e50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x103e54: 0xfc830020  sd          $v1, 0x20($a0)
    ctx->pc = 0x103e54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
    // 0x103e58: 0xde020028  ld          $v0, 0x28($s0)
    ctx->pc = 0x103e58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x103e5c: 0xfc820028  sd          $v0, 0x28($a0)
    ctx->pc = 0x103e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 2));
    // 0x103e60: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x103e60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x103e64: 0xfc830030  sd          $v1, 0x30($a0)
    ctx->pc = 0x103e64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
    // 0x103e68: 0xde020038  ld          $v0, 0x38($s0)
    ctx->pc = 0x103e68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x103e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103e70: 0xfc820038  sd          $v0, 0x38($a0)
    ctx->pc = 0x103e70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 2));
    // 0x103e74: 0x3e00008  jr          $ra
    ctx->pc = 0x103E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E74u;
        // 0x103e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103E7Cu;
}
