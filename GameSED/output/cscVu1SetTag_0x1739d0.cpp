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

// Function: cscVu1SetTag
// Address: 0x1739d0 - 0x173a5c
void cscVu1SetTag_0x1739d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cscVu1SetTag_0x1739d0");
#endif

    switch (ctx->pc) {
        case 0x173a50u: goto label_173a50;
        default: break;
    }

    ctx->pc = 0x1739d0u;

    // 0x1739d0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1739d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739d4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1739d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739d8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1739d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739dc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1739dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1739e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1739e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1739e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1739e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1739e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1739ec: 0x286b0002  slti        $t3, $v1, 0x2
    ctx->pc = 0x1739ecu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1739f0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1739f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739f4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1739F4u;
    {
        const bool branch_taken_0x1739f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1739F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739F4u;
        // 0x1739f8: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739f4) {
            ctx->pc = 0x173A48u;
            goto label_173a48;
        }
    }
    ctx->pc = 0x1739FCu;
    // 0x1739fc: 0x51600006  beql        $t3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1739FCu;
    {
        const bool branch_taken_0x1739fc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1739fc) {
            ctx->pc = 0x173A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1739FCu;
            // 0x173a00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173A18u;
            goto label_173a18;
        }
    }
    ctx->pc = 0x173A04u;
    // 0x173a04: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x173A04u;
    {
        const bool branch_taken_0x173a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A04u;
        // 0x173a08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a04) {
            ctx->pc = 0x173A28u;
            goto label_173a28;
        }
    }
    ctx->pc = 0x173A0Cu;
    // 0x173a0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x173A0Cu;
    {
        const bool branch_taken_0x173a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173a0c) {
            ctx->pc = 0x173A54u;
            goto label_173a54;
        }
    }
    ctx->pc = 0x173A14u;
    // 0x173a14: 0x0  nop
    ctx->pc = 0x173a14u;
    // NOP
label_173a18:
    // 0x173a18: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173A18u;
    {
        const bool branch_taken_0x173a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x173A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A18u;
        // 0x173a1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a18) {
            ctx->pc = 0x173A30u;
            goto label_173a30;
        }
    }
    ctx->pc = 0x173A20u;
    // 0x173a20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x173A20u;
    {
        const bool branch_taken_0x173a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173a20) {
            ctx->pc = 0x173A54u;
            goto label_173a54;
        }
    }
    ctx->pc = 0x173A28u;
label_173a28:
    // 0x173a28: 0x805c7ea  j           func_171FA8
    ctx->pc = 0x173A28u;
    ctx->pc = 0x173A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A28u;
    // 0x173a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171FA8u;
    cscVu1SetTag_frfl_0x171fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x173A30u;
label_173a30:
    // 0x173a30: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x173a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a34: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x173a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a38: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x173a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a3c: 0x805c9ce  j           func_172738
    ctx->pc = 0x173A3Cu;
    ctx->pc = 0x173A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A3Cu;
    // 0x173a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172738u;
    cscVu1SetTag_prog_0x172738(rdram, ctx, runtime); return;
    ctx->pc = 0x173A44u;
    // 0x173a44: 0x0  nop
    ctx->pc = 0x173a44u;
    // NOP
label_173a48:
    // 0x173a48: 0xc05cbe6  jal         func_172F98
    ctx->pc = 0x173A48u;
    SET_GPR_U32(ctx, 31, 0x173A50u);
    ctx->pc = 0x172F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172F98u, 0x173A48u, 0x173A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A50u;
label_173a50:
    // 0x173a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173a54:
    // 0x173a54: 0x3e00008  jr          $ra
    ctx->pc = 0x173A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A54u;
        // 0x173a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173A5Cu;
}
