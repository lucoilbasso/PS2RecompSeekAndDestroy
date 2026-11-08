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

// Function: GdCellUvInit__6WcFont
// Address: 0x183d68 - 0x183ddc
void GdCellUvInit__6WcFont_0x183d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GdCellUvInit__6WcFont_0x183d68");
#endif

    switch (ctx->pc) {
        case 0x183d90u: goto label_183d90;
        case 0x183da8u: goto label_183da8;
        default: break;
    }

    ctx->pc = 0x183d68u;

    // 0x183d68: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x183d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x183d6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x183d6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d70: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x183d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x183d74: 0x8c4b0014  lw          $t3, 0x14($v0)
    ctx->pc = 0x183d74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x183d78: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x183d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x183d7c: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x183D7Cu;
    {
        const bool branch_taken_0x183d7c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x183D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183D7Cu;
        // 0x183d80: 0x8c480010  lw          $t0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d7c) {
            ctx->pc = 0x183DD4u;
            goto label_183dd4;
        }
    }
    ctx->pc = 0x183D84u;
    // 0x183d84: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x183d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x183d88: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x183d88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x183d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183d90:
    // 0x183d90: 0x5880000d  blezl       $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x183D90u;
    {
        const bool branch_taken_0x183d90 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x183d90) {
            ctx->pc = 0x183D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183D90u;
            // 0x183d94: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183DC8u;
            goto label_183dc8;
        }
    }
    ctx->pc = 0x183D98u;
    // 0x183d98: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x183d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183da0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x183da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183da4: 0x0  nop
    ctx->pc = 0x183da4u;
    // NOP
label_183da8:
    // 0x183da8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183dac: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x183dacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x183db0: 0xa4660002  sh          $a2, 0x2($v1)
    ctx->pc = 0x183db0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x183db4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x183db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x183db8: 0x0  nop
    ctx->pc = 0x183db8u;
    // NOP
    // 0x183dbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x183DBCu;
    {
        const bool branch_taken_0x183dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DBCu;
        // 0x183dc0: 0xa82821  addu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183dbc) {
            ctx->pc = 0x183DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183da8;
        }
    }
    ctx->pc = 0x183DC4u;
    // 0x183dc4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x183dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_183dc8:
    // 0x183dc8: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x183dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x183dcc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x183DCCu;
    {
        const bool branch_taken_0x183dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183DCCu;
        // 0x183dd0: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183dcc) {
            ctx->pc = 0x183D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183d90;
        }
    }
    ctx->pc = 0x183DD4u;
label_183dd4:
    // 0x183dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x183DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183DDCu;
}
